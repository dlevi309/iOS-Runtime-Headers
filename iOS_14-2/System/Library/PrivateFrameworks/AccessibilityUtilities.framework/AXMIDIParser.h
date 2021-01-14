/*
* Generated on Thursday, January 14, 2021 at 2:22:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXMIDIParser : NSObject
-(unsigned short)_channelForStatusByte:(unsigned char)arg1 ;
-(long long)_eventTypeForStatusByte:(unsigned char)arg1 ;
-(unsigned long long)_expectedPacketLengthForEventType:(long long)arg1 ;
-(id)parse:(const MIDIPacketList*)arg1 error:(id*)arg2 ;
@end

