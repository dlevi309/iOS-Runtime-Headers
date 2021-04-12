/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

