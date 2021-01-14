/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMHealthTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;

}
-(id)init;
-(void)_teardown;
-(void)_queryVO2MaxInputsFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

