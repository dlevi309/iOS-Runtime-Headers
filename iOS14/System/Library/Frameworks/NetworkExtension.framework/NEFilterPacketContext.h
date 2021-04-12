/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NEFilterPacketInterpose;

@interface NEFilterPacketContext : NSObject {

	NEFilterPacketInterpose* _interpose;

}

@property (retain) NEFilterPacketInterpose * interpose;              //@synthesize interpose=_interpose - In the implementation block
-(NEFilterPacketInterpose *)interpose;
-(void)setInterpose:(NEFilterPacketInterpose *)arg1 ;
@end

