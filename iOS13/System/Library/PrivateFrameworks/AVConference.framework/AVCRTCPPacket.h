/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface AVCRTCPPacket : NSObject {

	unsigned char _packetType;
	unsigned _SSRC;

}

@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,setter=SRC,nonatomic) unsigned SSRC;              //@synthesize SSRC=_SSRC - In the implementation block
+(id)newPacketWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(id)description;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(unsigned char)packetType;
-(unsigned)SSRC;
-(void)setPacketType:(unsigned char)arg1 ;
-(void)setSSRC:(unsigned)arg1 ;
@end

