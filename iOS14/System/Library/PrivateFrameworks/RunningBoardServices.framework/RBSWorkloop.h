/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol OS_dispatch_workloop;
@class NSObject;

@interface RBSWorkloop : NSObject {

	NSObject*<OS_dispatch_workloop> _calloutWorkloop;
	NSObject*<OS_dispatch_workloop> _backgroundWorkloop;
	NSObject*<OS_dispatch_workloop> _syncingWorkloop;

}
+(id)createCalloutQueue:(id)arg1 ;
+(void)performCallout:(/*^block*/id)arg1 ;
+(id)sharedBackgroundWorkloop;
+(void)performBackgroundWork:(/*^block*/id)arg1 ;
+(void)performBackgroundWorkWithServiceClass:(unsigned)arg1 block:(/*^block*/id)arg2 ;
+(id)sharedCalloutWorkloop;
+(id)createSyncingQueue:(id)arg1 ;
+(id)createBackgroundQueue:(id)arg1 ;
+(void)performCalloutWithServiceClass:(unsigned)arg1 block:(/*^block*/id)arg2 ;
@end

