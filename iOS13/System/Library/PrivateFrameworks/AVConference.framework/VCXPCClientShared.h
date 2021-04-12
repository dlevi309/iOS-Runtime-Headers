/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConferenceXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCXPCClientShared : AVConferenceXPCClient {

	NSMutableDictionary* _registeredUUIDServiceBlocks;
	NSObject*<OS_dispatch_queue> _registeredBlocksQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * registeredUUIDServiceBlocks;              //@synthesize registeredUUIDServiceBlocks=_registeredUUIDServiceBlocks - In the implementation block
-(id)init;
-(void)dealloc;
-(void)deregisterFromNotifications;
-(void)registerBlockWithUUID:(id)arg1 service:(char*)arg2 block:(/*^block*/id)arg3 ;
-(void)deregisterWithUUID:(id)arg1 service:(char*)arg2 ;
-(NSMutableDictionary *)registeredUUIDServiceBlocks;
@end

