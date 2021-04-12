/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject {

	CMSpringTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSpringTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(CMSpringTrackerInternal *)_internal;
-(void)startWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isTracking;
-(void)stopWithHandler:(/*^block*/id)arg1 ;
-(void)querySleepDataFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

