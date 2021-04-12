/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAFilterGeneralSettings, TAFilterVisitsSettings, TAFilterSingleVisitSettings, TAEventBufferSettings, TAVisitStateSettings, TADeviceRecordSettings, TAScanRequestSettings, TATrackingAvoidanceServiceSettings, TAPersistenceManagerSettings, TAAnalyticsManagerSettings;

@interface TASettings : NSObject {

	BOOL _trackingAvoidanceEnabled;
	BOOL _peopleDensityEnabled;
	unsigned long long _maximumDailyScans;
	unsigned long long _notificationThrottleHours;
	unsigned long long _notificationThrottleMaxPerPeriod;
	double _persistenceInterval;
	TAFilterGeneralSettings* _filterGeneralSettings;
	TAFilterVisitsSettings* _filterVisitsSettings;
	TAFilterSingleVisitSettings* _filterSingleVisitSettings;
	TAEventBufferSettings* _eventBufferSettings;
	TAVisitStateSettings* _visitStateSettings;
	TADeviceRecordSettings* _deviceRecordSettings;
	TAScanRequestSettings* _scanRequestSettings;
	TATrackingAvoidanceServiceSettings* _serviceSettings;
	TAPersistenceManagerSettings* _persistenceManagerSettings;
	TAAnalyticsManagerSettings* _analyticsManagerSettings;

}

@property (assign,nonatomic) BOOL trackingAvoidanceEnabled;                                          //@synthesize trackingAvoidanceEnabled=_trackingAvoidanceEnabled - In the implementation block
@property (assign,nonatomic) BOOL peopleDensityEnabled;                                              //@synthesize peopleDensityEnabled=_peopleDensityEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long maximumDailyScans;                                   //@synthesize maximumDailyScans=_maximumDailyScans - In the implementation block
@property (assign,nonatomic) unsigned long long notificationThrottleHours;                           //@synthesize notificationThrottleHours=_notificationThrottleHours - In the implementation block
@property (assign,nonatomic) unsigned long long notificationThrottleMaxPerPeriod;                    //@synthesize notificationThrottleMaxPerPeriod=_notificationThrottleMaxPerPeriod - In the implementation block
@property (assign,nonatomic) double persistenceInterval;                                             //@synthesize persistenceInterval=_persistenceInterval - In the implementation block
@property (nonatomic,retain) TAFilterGeneralSettings * filterGeneralSettings;                        //@synthesize filterGeneralSettings=_filterGeneralSettings - In the implementation block
@property (nonatomic,retain) TAFilterVisitsSettings * filterVisitsSettings;                          //@synthesize filterVisitsSettings=_filterVisitsSettings - In the implementation block
@property (nonatomic,retain) TAFilterSingleVisitSettings * filterSingleVisitSettings;                //@synthesize filterSingleVisitSettings=_filterSingleVisitSettings - In the implementation block
@property (nonatomic,retain) TAEventBufferSettings * eventBufferSettings;                            //@synthesize eventBufferSettings=_eventBufferSettings - In the implementation block
@property (nonatomic,retain) TAVisitStateSettings * visitStateSettings;                              //@synthesize visitStateSettings=_visitStateSettings - In the implementation block
@property (nonatomic,retain) TADeviceRecordSettings * deviceRecordSettings;                          //@synthesize deviceRecordSettings=_deviceRecordSettings - In the implementation block
@property (nonatomic,retain) TAScanRequestSettings * scanRequestSettings;                            //@synthesize scanRequestSettings=_scanRequestSettings - In the implementation block
@property (nonatomic,retain) TATrackingAvoidanceServiceSettings * serviceSettings;                   //@synthesize serviceSettings=_serviceSettings - In the implementation block
@property (nonatomic,retain) TAPersistenceManagerSettings * persistenceManagerSettings;              //@synthesize persistenceManagerSettings=_persistenceManagerSettings - In the implementation block
@property (nonatomic,retain) TAAnalyticsManagerSettings * analyticsManagerSettings;                  //@synthesize analyticsManagerSettings=_analyticsManagerSettings - In the implementation block
+(id)getStringSettingsKeys;
+(id)convertEnabledLoiTypesValueContentToNSNumberType:(id)arg1 ;
+(id)getBooleanSettingsKeys;
+(id)getArraySettingsKeys;
+(id)getIntegerSettingsKeys;
+(id)getUnsignedIntegerSettingsKeys;
+(id)getDoubleSettingsKeys;
-(double)persistenceInterval;
-(TAFilterSingleVisitSettings *)filterSingleVisitSettings;
-(id)initWithSettings:(id)arg1 ;
-(void)setPeopleDensityEnabled:(BOOL)arg1 ;
-(unsigned long long)maximumDailyScans;
-(id)init;
-(TATrackingAvoidanceServiceSettings *)serviceSettings;
-(void)setServiceSettings:(TATrackingAvoidanceServiceSettings *)arg1 ;
-(TAEventBufferSettings *)eventBufferSettings;
-(TAFilterGeneralSettings *)filterGeneralSettings;
-(void)setEventBufferSettings:(TAEventBufferSettings *)arg1 ;
-(TAAnalyticsManagerSettings *)analyticsManagerSettings;
-(void)setFilterGeneralSettings:(TAFilterGeneralSettings *)arg1 ;
-(TADeviceRecordSettings *)deviceRecordSettings;
-(void)setVisitStateSettings:(TAVisitStateSettings *)arg1 ;
-(void)setFilterSingleVisitSettings:(TAFilterSingleVisitSettings *)arg1 ;
-(void)setPersistenceManagerSettings:(TAPersistenceManagerSettings *)arg1 ;
-(void)setSettings:(id)arg1 ;
-(void)setDeviceRecordSettings:(TADeviceRecordSettings *)arg1 ;
-(void)setFilterVisitsSettings:(TAFilterVisitsSettings *)arg1 ;
-(void)setNotificationThrottleMaxPerPeriod:(unsigned long long)arg1 ;
-(id)description;
-(TAVisitStateSettings *)visitStateSettings;
-(TAPersistenceManagerSettings *)persistenceManagerSettings;
-(unsigned long long)notificationThrottleMaxPerPeriod;
-(void)setPersistenceInterval:(double)arg1 ;
-(void)setTrackingAvoidanceEnabled:(BOOL)arg1 ;
-(unsigned long long)notificationThrottleHours;
-(BOOL)peopleDensityEnabled;
-(void)setNotificationThrottleHours:(unsigned long long)arg1 ;
-(void)setAnalyticsManagerSettings:(TAAnalyticsManagerSettings *)arg1 ;
-(TAFilterVisitsSettings *)filterVisitsSettings;
-(void)setMaximumDailyScans:(unsigned long long)arg1 ;
-(TAScanRequestSettings *)scanRequestSettings;
-(void)setScanRequestSettings:(TAScanRequestSettings *)arg1 ;
-(BOOL)trackingAvoidanceEnabled;
@end

