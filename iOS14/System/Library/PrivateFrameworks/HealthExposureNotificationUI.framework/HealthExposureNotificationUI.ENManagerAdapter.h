/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/

#import <HealthExposureNotificationUI/HealthExposureNotificationUI.ExposureNotifying.h>

@class ENManager;

@interface HealthExposureNotificationUI.ENManagerAdapter : NSObject <HealthExposureNotificationUI.ExposureNotifying> {

	 exposureNotificationStatus;
	 isExposureLoggingDataPresent;
	 areAvailabilityAlertsEnabled;
	 isAvailabilityAlertsSwitchEnabled;
	 statusChangeHandler;
	 manager;
	 activationGroup;
	 statusObservation;

}

@property (assign,nonatomic) long long exposureNotificationStatus; 
@property (assign,nonatomic) BOOL isExposureLoggingDataPresent; 
@property (assign,nonatomic) BOOL areAvailabilityAlertsEnabled; 
@property (assign,nonatomic) BOOL isAvailabilityAlertsSwitchEnabled; 
@property (copy,nonatomic) id statusChangeHandler; 
@property (readonly,nonatomic) ENManager * manager; 
+(id)defaultAdapter;
+(void)setDefaultAdapter:(id)arg1 ;
-(id)init;
-(id)statusChangeHandler;
-(void)setStatusChangeHandler:(id)arg1 ;
-(ENManager *)manager;
-(void)dealloc;
-(void)setActiveRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)exposureNotificationStatus;
-(void)setExposureNotificationStatus:(long long)arg1 ;
-(BOOL)isExposureLoggingDataPresent;
-(void)setIsExposureLoggingDataPresent:(BOOL)arg1 ;
-(BOOL)areAvailabilityAlertsEnabled;
-(void)setAreAvailabilityAlertsEnabled:(BOOL)arg1 ;
-(void)refreshStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)setExposureNotificationEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)latestExposureNotification:(/*^block*/id)arg1 ;
-(void)allRegionConfigurations:(/*^block*/id)arg1 ;
-(void)setShareAnalyticsEnabled:(BOOL)arg1 region:(id)arg2 version:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)isTravelStatusEnabledForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTravelStatusEnabled:(BOOL)arg1 region:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isPreReleaseAuthorizedForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPreReleaseAuthorized:(BOOL)arg1 region:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAvailabilityAlertsEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserConsent:(long long)arg1 region:(id)arg2 text:(id)arg3 version:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)onboardingDidStartForRegion:(id)arg1 source:(long long)arg2 ;
-(BOOL)isAvailabilityAlertsSwitchEnabled;
-(void)setIsAvailabilityAlertsSwitchEnabled:(BOOL)arg1 ;
-(void)fetchSubdivisionsForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActivePhaseOneAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAgencyModelForRegionCode:(id)arg1 reason:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAllEntities:(/*^block*/id)arg1 ;
-(void)getAgencyModelForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAgencyModelForRegionCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetAllDataAndDisableExposureNotifications:(/*^block*/id)arg1 ;
-(void)setWeeklySummaryEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)tccContainsRecordForBundleIdentifier:(id)arg1 ;
@end

