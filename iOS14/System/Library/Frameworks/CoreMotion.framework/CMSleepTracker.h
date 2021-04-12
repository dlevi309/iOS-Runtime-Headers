/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject {

	CMSpringTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSpringTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(CMSpringTrackerInternal *)_internal;
-(id)init;
-(BOOL)isTracking;
-(void)stopWithHandler:(/*^block*/id)arg1 ;
-(void)querySleepDataFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)startWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

