/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMAltimeter : NSObject {

	id _internal;

}
+(void)initialize;
+(long long)authorizationStatus;
+(void)dummySelector:(id)arg1 ;
+(BOOL)isRelativeAltitudeAvailable;
+(BOOL)isSignificantElevationAvailable;
-(id)init;
-(void)dealloc;
-(id)initPrivate;
-(void)deallocPrivate;
-(void)onFilteredPressure:(const Sample*)arg1 ;
-(void)stopRelativeAltitudeUpdatesPrivate;
-(void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startRelativeAltitudeUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopRelativeAltitudeUpdates;
-(void)startSignificantElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopSignificantElevationUpdates;
-(void)querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
@end

