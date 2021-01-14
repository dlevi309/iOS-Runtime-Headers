/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
*/

#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/HDFeatureAvailabilityExtensionProvider.h>

@class HDFeatureAvailabilityManager, HDProfile, HDHRHealthLiteDataCollector, HDHRDailyHeartRateManager, HDHRNotificationManager, NSString;

@interface HDHeartRateProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {

	HDFeatureAvailabilityManager* _featureAvailabilityManager;
	HDProfile* _profile;
	HDHRHealthLiteDataCollector* _healthLiteDataCollector;
	HDHRDailyHeartRateManager* _dailyHeartRateManager;
	HDHRNotificationManager* _heartRateNotificationManager;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDHRHealthLiteDataCollector * healthLiteDataCollector;               //@synthesize healthLiteDataCollector=_healthLiteDataCollector - In the implementation block
@property (nonatomic,retain) HDHRDailyHeartRateManager * dailyHeartRateManager;                   //@synthesize dailyHeartRateManager=_dailyHeartRateManager - In the implementation block
@property (nonatomic,retain) HDHRNotificationManager * heartRateNotificationManager;              //@synthesize heartRateNotificationManager=_heartRateNotificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)setHeartRateNotificationManager:(HDHRNotificationManager *)arg1 ;
-(HDHRDailyHeartRateManager *)dailyHeartRateManager;
-(HDProfile *)profile;
-(HDHRHealthLiteDataCollector *)healthLiteDataCollector;
-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1 client:(id)arg2 ;
-(void)setHealthLiteDataCollector:(HDHRHealthLiteDataCollector *)arg1 ;
-(HDHRNotificationManager *)heartRateNotificationManager;
-(void)setDailyHeartRateManager:(HDHRDailyHeartRateManager *)arg1 ;
@end

