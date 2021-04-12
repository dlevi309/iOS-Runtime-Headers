/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/


@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, CTDeviceDataUsage, NSDictionary;

@interface PSDataUsageStatisticsCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _refreshInProgress;
	CoreTelephonyClient* _client;
	CTDeviceDataUsage* _cachedDeviceDataUsage;
	/*^block*/id _refreshCompletionHandler;
	NSDictionary* _workspaceInfoDict;
	NSDictionary* _hotspotClientsUsage;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                 //@synthesize client=_client - In the implementation block
@property (retain) CTDeviceDataUsage * cachedDeviceDataUsage;              //@synthesize cachedDeviceDataUsage=_cachedDeviceDataUsage - In the implementation block
@property (assign) BOOL refreshInProgress;                                 //@synthesize refreshInProgress=_refreshInProgress - In the implementation block
@property (copy) id refreshCompletionHandler;                              //@synthesize refreshCompletionHandler=_refreshCompletionHandler - In the implementation block
@property (retain) NSDictionary * workspaceInfoDict;                       //@synthesize workspaceInfoDict=_workspaceInfoDict - In the implementation block
@property (retain) NSDictionary * hotspotClientsUsage;                     //@synthesize hotspotClientsUsage=_hotspotClientsUsage - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)willEnterForeground;
-(id)billingCycleEndDate;
-(id)initPrivate;
-(void)_clearCache;
-(id)refreshCompletionHandler;
-(void)setRefreshCompletionHandler:(id)arg1 ;
-(id)appBundleIDs;
-(void)fetchDeviceDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(id)watchOnlyAppBundleIDsForPeriod:(unsigned long long)arg1 ;
-(id)systemServiceBundleIDsForPeriod:(unsigned long long)arg1 ;
-(id)uninstalledAppBundleIDsForPeriod:(unsigned long long)arg1 ;
-(id)hotspotClientIDsForPeriod:(unsigned long long)arg1 ;
-(id)usageForBundleID:(id)arg1 inPeriod:(unsigned long long)arg2 ;
-(BOOL)billingCycleSupported;
-(BOOL)useCalendarMonthBillingCycle;
-(id)totalWatchOnlyAppUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalSystemServicesUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalUninstalledAppUsageForPeriod:(unsigned long long)arg1 ;
-(unsigned long long)totalHotspotClientUsageForPeriod:(unsigned long long)arg1 ;
-(id)wifiAssistUsageForPeriod:(unsigned long long)arg1 ;
-(unsigned long long)totalCellularUsageForPeriod:(unsigned long long)arg1 ;
-(unsigned long long)totalRoamingUsageForPeriod:(unsigned long long)arg1 ;
-(void)_handleUsageOrInfoChanged;
-(void)setCachedDeviceDataUsage:(CTDeviceDataUsage *)arg1 ;
-(void)setWorkspaceInfoDict:(NSDictionary *)arg1 ;
-(void)setHotspotClientsUsage:(NSDictionary *)arg1 ;
-(BOOL)refreshInProgress;
-(void)setRefreshInProgress:(BOOL)arg1 ;
-(void)fetchDeviceDataUsage;
-(CTDeviceDataUsage *)cachedDeviceDataUsage;
-(NSDictionary *)hotspotClientsUsage;
-(void)fetchHotspotClientsUsage;
-(NSDictionary *)workspaceInfoDict;
-(void)fetchWorkspaceInfo;
-(id)displayNameForAppBundleID:(id)arg1 ;
-(id)totalAppUsageForPeriod:(unsigned long long)arg1 ;
-(id)displayNameForWatchOnlyAppBundleID:(id)arg1 ;
-(id)displayNameForSystemServiceBundleID:(id)arg1 ;
-(id)displayNameForUninstalledAppBundleID:(id)arg1 ;
-(id)displayNameForHotspotClientID:(id)arg1 ;
-(unsigned long long)usageForHotspotClientID:(id)arg1 inPeriod:(unsigned long long)arg2 ;
-(id)previousBillingCycleEndDate;
@end

