/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOPDPlaceCacheSchedulingDelegate
@required
-(void)cancelCleanupBlockSchedule;
-(void)runCleanupBlock:(/*^block*/id)arg1 inSecondsFromNow:(long long)arg2;
-(long long)currentTime;

@end

