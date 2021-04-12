/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

