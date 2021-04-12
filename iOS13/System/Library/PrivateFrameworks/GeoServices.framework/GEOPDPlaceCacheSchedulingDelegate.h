/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOPDPlaceCacheSchedulingDelegate
@required
-(long long)currentTime;
-(void)cancelCleanupBlockSchedule;
-(void)runCleanupBlock:(/*^block*/id)arg1 inSecondsFromNow:(long long)arg2;

@end

