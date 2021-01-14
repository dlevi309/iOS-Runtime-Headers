/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEFilterProvider.h>

@interface NEFilterPacketProvider : NEFilterProvider {

	/*^block*/id _packetHandler;

}

@property (copy) id packetHandler;              //@synthesize packetHandler=_packetHandler - In the implementation block
-(void)setPacketHandler:(id)arg1 ;
-(id)packetHandler;
-(void)allowPacket:(id)arg1 ;
-(id)delayCurrentPacket:(id)arg1 ;
@end

