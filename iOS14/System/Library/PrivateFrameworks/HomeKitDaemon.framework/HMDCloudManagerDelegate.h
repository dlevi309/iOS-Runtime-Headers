/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDCloudManagerDelegate
@required
-(void)fetchHomeFromCloudZone:(id)arg1 cloudConflict:(BOOL)arg2 withDelay:(double)arg3;
-(void)fetchHomeManagerCloudConflict:(BOOL)arg1 withDelay:(double)arg2;
-(void)uploadHomeConfigToCloud:(BOOL)arg1 withDelay:(double)arg2;
-(void)fetchHomeDataFromCloudWithCloudConflict:(BOOL)arg1 withDelay:(double)arg2;
-(void)archiveServerToken:(id)arg1;
-(void)eraseLocalHomeData;
-(void)reloadHomeDataFromLocalStore:(BOOL)arg1;
-(void)fetchAllZones;
-(void)verifyHomeDataFromCloud:(/*^block*/id)arg1;
-(void)schedulePostFetch;
-(void)notifyZonesCloudZoneReady:(id)arg1;
-(void)kickAccountAvailabilityCheck;

@end

