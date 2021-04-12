/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

