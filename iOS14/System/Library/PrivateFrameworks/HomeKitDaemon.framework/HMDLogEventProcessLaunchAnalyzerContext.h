/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDLogEventAnalyzerContext.h>
#import <libobjc.A.dylib/HMDLogEventProcessLaunchAnalyzerContext.h>
@class HMFTimer;


@protocol HMDLogEventProcessLaunchAnalyzerContext <HMDLogEventAnalyzerContext>
@property (nonatomic,readonly) HMFTimer * submitProcessLaunchInfoTimer; 
@required
-(jetsam_snapshot*)fetchJetsamSnapshot;
-(HMFTimer *)submitProcessLaunchInfoTimer;

@end


@class HMFTimer, HMDLogEventDispatcher, NSString;

@interface HMDLogEventProcessLaunchAnalyzerContext : HMDLogEventAnalyzerContext <HMDLogEventProcessLaunchAnalyzerContext> {

	HMFTimer* _submitProcessLaunchInfoTimer;

}

@property (nonatomic,readonly) HMFTimer * submitProcessLaunchInfoTimer;              //@synthesize submitProcessLaunchInfoTimer=_submitProcessLaunchInfoTimer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (readonly) HMDLogEventDispatcher * logEventDispatcher; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWorkQueue:(id)arg1 processLaunchInfoTimer:(id)arg2 ;
-(jetsam_snapshot*)fetchJetsamSnapshot;
-(HMFTimer *)submitProcessLaunchInfoTimer;
@end

