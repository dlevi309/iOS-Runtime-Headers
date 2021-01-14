/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <libobjc.A.dylib/HDProfileExtension.h>

@class HDMCAnalyticsManager, HDProfile, HDMCAnalysisManager, HDMCNotificationManager, HKMCSettingsManager, NSString;

@interface HDMCProfileExtension : NSObject <HDProfileExtension> {

	HDMCAnalyticsManager* _analyticsManager;
	HDProfile* _profile;
	HDMCAnalysisManager* _analysisManager;
	HDMCNotificationManager* _notificationManager;
	HKMCSettingsManager* _settingsManager;

}

@property (nonatomic,readonly) HKMCSettingsManager * settingsManager;                      //@synthesize settingsManager=_settingsManager - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDMCAnalysisManager * analysisManager;                        //@synthesize analysisManager=_analysisManager - In the implementation block
@property (nonatomic,readonly) HDMCNotificationManager * notificationManager;              //@synthesize notificationManager=_notificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)setAnalysisManager:(HDMCAnalysisManager *)arg1 ;
-(HDMCNotificationManager *)notificationManager;
-(HDProfile *)profile;
-(HDMCAnalysisManager *)analysisManager;
-(HKMCSettingsManager *)settingsManager;
@end

