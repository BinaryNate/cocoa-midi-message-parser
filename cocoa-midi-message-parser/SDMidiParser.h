//
//  SDMidiParser.h
//  cocoa-midi-message-parser
//
//  Created by Hill, Nathan on 12/24/16.
//  Copyright © 2016 Hill, Nathan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMIDI/CoreMIDI.h>

@interface SDMidiParser : NSObject

/**
 * Converts a MIDIPacketList C struct to an array of NSData instances, where
 * each NSData instance encapsulates the data for a MIDI packet.
 */
+ (NSMutableArray *)convertPacketListToData: (MIDIPacketList *)packetList;

@end
