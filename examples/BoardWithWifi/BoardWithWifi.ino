#include <DSPI.h>
#include <OpenBCI_32bit_Library.h>
#include <OpenBCI_32Bit_Library_Definitions.h>

// THIS IS NOT COMPLETE OR WORKING!

void setup() {
  // Bring up the OpenBCI Board
  board.begin();
  board.beginSecondarySerial();
  board.curBoardMode = OPENBCI_BOARD_MODE_WIFI;
}

void loop() {

  if (board.streaming) {
    if (board.channelDataAvailable) {
      // Read from the ADS(s), store data, set channelDataAvailable flag to false
      board.updateChannelData();

      board.sendChannelDataWithRawAux();

    }
  }

  // Check the serial port for new data
  if (board.hasDataSerial0()) {
    // Read one char and process it
    board.processChar(board.getCharSerial0());
  }
  if (board.hasDataSerial1()) {
    // Read one char and process it
    board.getCharSerial1();
    // board.processChar();
  }

}
