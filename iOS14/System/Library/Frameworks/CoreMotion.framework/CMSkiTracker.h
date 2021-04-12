/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject {

	CMSkiTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSkiTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(CMSkiTrackerInternal *)_internal;
-(id)init;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)querySkiUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

