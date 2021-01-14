/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSOperationQueue;

@interface CMMotionActivityManager : NSObject {

	CLConnectionClient* fLocationConnection;
	NSObject*<OS_dispatch_queue> fQueue;
	/*^block*/id fHandler;
	NSOperationQueue* fHandlerQueue;

}
+(long long)authorizationStatus;
+(BOOL)isActivityAvailable;
-(id)init;
-(void)stopActivityUpdates;
-(void)startActivityUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

