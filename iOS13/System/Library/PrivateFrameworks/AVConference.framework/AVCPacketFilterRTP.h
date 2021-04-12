/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVCPacketFilter.h>

@interface AVCPacketFilterRTP : AVCPacketFilter {

	unsigned _SSRC;
	unsigned char _type;

}
-(BOOL)isMatchedPacket:(const void*)arg1 size:(int)arg2 ;
-(BOOL)isRTCPPayload:(unsigned short)arg1 ;
-(BOOL)isPayloadTypeMatched:(BOOL)arg1 ;
-(id)initWithIncomingSSRC:(unsigned)arg1 acceptPacketType:(unsigned char)arg2 ;
@end

