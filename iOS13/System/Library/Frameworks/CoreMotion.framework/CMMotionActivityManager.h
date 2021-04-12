/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isActivityAvailable;
+(long long)authorizationStatus;
-(id)init;
-(void)dealloc;
-(void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)startActivityUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopActivityUpdates;
@end

