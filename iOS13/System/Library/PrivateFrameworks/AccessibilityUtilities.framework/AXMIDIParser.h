/*
* Generated on Monday, March 1, 2021 at 2:30:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXMIDIParser : NSObject
-(unsigned short)_channelForStatusByte:(unsigned char)arg1 ;
-(long long)_eventTypeForStatusByte:(unsigned char)arg1 ;
-(unsigned long long)_expectedPacketLengthForEventType:(long long)arg1 ;
-(id)parse:(const MIDIPacketList*)arg1 error:(id*)arg2 ;
@end

