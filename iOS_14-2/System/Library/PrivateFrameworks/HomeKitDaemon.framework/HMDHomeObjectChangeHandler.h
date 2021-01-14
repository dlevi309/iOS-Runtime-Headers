/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMDHome, NSObject;

@interface HMDHomeObjectChangeHandler : HMFObject {

	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,__weak,readonly) HMDHome * home;                               //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithHome:(id)arg1 ;
-(HMDHome *)home;
-(void)handleObjectAdd:(id)arg1 message:(id)arg2 ;
-(void)handleObjectRemove:(id)arg1 message:(id)arg2 ;
-(void)handleObjectUpdate:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
@end

