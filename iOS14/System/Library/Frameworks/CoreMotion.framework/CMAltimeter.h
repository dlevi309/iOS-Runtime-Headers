/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMAltimeter : NSObject {

	id _internal;
	double _absoluteAltitudeUpdateInterval;

}

@property (assign,nonatomic) double absoluteAltitudeUpdateInterval;              //@synthesize absoluteAltitudeUpdateInterval=_absoluteAltitudeUpdateInterval - In the implementation block
+(void)initialize;
+(void)dummySelector:(id)arg1 ;
+(long long)authorizationStatus;
+(BOOL)isRelativeAltitudeAvailable;
+(BOOL)isAbsoluteAltitudeAvailable;
+(BOOL)isSignificantElevationAvailable;
-(id)initPrivate;
-(id)init;
-(void)onFilteredPressure:(const Sample*)arg1 ;
-(void)stopRelativeAltitudeUpdatesPrivate;
-(void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startRelativeAltitudeUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopRelativeAltitudeUpdates;
-(void)stopSignificantElevationUpdates;
-(void)startSignificantElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)startAbsoluteAltitudeUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopAbsoluteAltitudeUpdates;
-(void)pauseAbsoluteAltitudeUpdates;
-(void)resumeAbsoluteAltitudeUpdates;
-(double)absoluteAltitudeUpdateInterval;
-(void)setAbsoluteAltitudeUpdateInterval:(double)arg1 ;
-(void)deallocPrivate;
-(void)dealloc;
@end

