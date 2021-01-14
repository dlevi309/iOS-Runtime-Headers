/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface WLKPrewarming : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSXPCConnection* _connection;

}
+(id)sharedInstance;
-(void)prewarm;
-(id)init;
-(id)_init;
-(id)_connection;
-(void)_onQueue_prewarmDevice;
-(void)prewarmDevice;
-(void)prewarmDeviceAndNetwork;
@end

