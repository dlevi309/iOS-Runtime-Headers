/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMSkiTrackerInternal;

@interface CMSkiTracker : NSObject {

	CMSkiTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSkiTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(CMSkiTrackerInternal *)_internal;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)querySkiUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

