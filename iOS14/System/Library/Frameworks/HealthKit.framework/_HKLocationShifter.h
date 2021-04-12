/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(BOOL)isShiftRequiredForLocations:(id)arg1 ;
-(id)init;
-(void)shiftLocations:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

