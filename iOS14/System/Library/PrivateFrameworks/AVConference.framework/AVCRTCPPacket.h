/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)SSRC;
-(id)description;
-(void)setPacketType:(unsigned char)arg1 ;
-(unsigned char)packetType;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(void)setSSRC:(unsigned)arg1 ;
@end

