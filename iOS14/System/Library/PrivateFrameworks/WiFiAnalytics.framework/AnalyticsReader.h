/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class AnalyticsStoreMOHandler;

@interface AnalyticsReader : NSObject {

	AnalyticsStoreMOHandler* _managedObjectHandler;

}

@property (nonatomic,retain) AnalyticsStoreMOHandler * managedObjectHandler;              //@synthesize managedObjectHandler=_managedObjectHandler - In the implementation block
-(id)init;
-(BOOL)parsedBeaconInfoIsStored:(id)arg1 ssid:(id)arg2 ;
-(AnalyticsStoreMOHandler *)managedObjectHandler;
-(id)neighborChannelsForBSS:(id)arg1 ssid:(id)arg2 ;
-(id)neighborsForBSS:(id)arg1 ssid:(id)arg2 ;
-(void)setManagedObjectHandler:(AnalyticsStoreMOHandler *)arg1 ;
-(unsigned long long)manualLeaveCountForBss:(id)arg1 ssid:(id)arg2 ;
-(long long)autoLeaveRssiForBss:(id)arg1 ssid:(id)arg2 ;
-(long long)rssiRoamTriggerForBSS:(id)arg1 ssid:(id)arg2 ;
@end

