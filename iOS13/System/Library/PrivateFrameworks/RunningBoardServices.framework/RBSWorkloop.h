/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol OS_dispatch_workloop;
@class NSObject;

@interface RBSWorkloop : NSObject {

	NSObject*<OS_dispatch_workloop> _calloutWorkloop;
	NSObject*<OS_dispatch_workloop> _backgroundWorkloop;
	NSObject*<OS_dispatch_workloop> _syncingWorkloop;

}
+(id)sharedInstance;
+(id)sharedCalloutWorkloop;
+(id)sharedBackgroundWorkloop;
+(void)performBackgroundWork:(/*^block*/id)arg1 ;
+(id)createCalloutQueue:(id)arg1 ;
+(void)performCallout:(/*^block*/id)arg1 ;
+(void)performCalloutWithServiceClass:(unsigned)arg1 block:(/*^block*/id)arg2 ;
+(id)createBackgroundQueue:(id)arg1 ;
+(void)performBackgroundWorkWithServiceClass:(unsigned)arg1 block:(/*^block*/id)arg2 ;
+(id)createSyncingQueue:(id)arg1 ;
-(id)_init;
@end

