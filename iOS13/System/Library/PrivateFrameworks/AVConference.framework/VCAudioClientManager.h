/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCAudioClientManager : NSObject {

	NSMutableDictionary* _clientList;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)unregisterBlocksForService;
-(id)getAudioClientWithProcessId:(id)arg1 create:(BOOL)arg2 ;
@end

