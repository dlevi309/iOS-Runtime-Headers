/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface HMDCameraRecordingSessionRetryContext : NSObject {

	double _retryInterval;
	NSDictionary* _homePresenceByPairingIdentity;
	double _maxRetryInterval;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) double maxRetryInterval;                                   //@synthesize maxRetryInterval=_maxRetryInterval - In the implementation block
@property (assign) double retryInterval;                                        //@synthesize retryInterval=_retryInterval - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSDictionary * homePresenceByPairingIdentity;              //@synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(double)retryInterval;
-(NSDictionary *)homePresenceByPairingIdentity;
-(void)computeNextRetryInterval;
-(id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 preferences:(id)arg3 ;
-(double)maxRetryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 ;
@end

