/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NMRMediaRemoteUpdater : NSObject {

	unsigned long long _updateState;
	/*^block*/id _updateBlock;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)executeUpdateBlock;
-(id)initWithQueue:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
@end

