/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/

#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/HDFeatureAvailabilityExtensionProvider.h>

@class HDSHFeatureAvailabilityManager, HDSHAccessibilityAssertionManager, HDProfile, NSString;

@interface HDSHProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {

	/*^block*/id _sleepStoreProvider;
	HDSHFeatureAvailabilityManager* _coachingAvailabilityManager;
	HDSHFeatureAvailabilityManager* _trackingAvailabilityManager;
	HDSHFeatureAvailabilityManager* _windDownShortcutsAvailabilityManager;
	HDSHAccessibilityAssertionManager* _accessibilityAssertionManager;
	HDProfile* _profile;

}

@property (nonatomic,readonly) HDSHAccessibilityAssertionManager * accessibilityAssertionManager;                  //@synthesize accessibilityAssertionManager=_accessibilityAssertionManager - In the implementation block
@property (nonatomic,readonly) HDSHFeatureAvailabilityManager * coachingAvailabilityManager;                       //@synthesize coachingAvailabilityManager=_coachingAvailabilityManager - In the implementation block
@property (nonatomic,readonly) HDSHFeatureAvailabilityManager * trackingAvailabilityManager;                       //@synthesize trackingAvailabilityManager=_trackingAvailabilityManager - In the implementation block
@property (nonatomic,readonly) HDSHFeatureAvailabilityManager * windDownShortcutsAvailabilityManager;              //@synthesize windDownShortcutsAvailabilityManager=_windDownShortcutsAvailabilityManager - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                                         //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(HDSHFeatureAvailabilityManager *)windDownShortcutsAvailabilityManager;
-(HDProfile *)profile;
-(HDSHFeatureAvailabilityManager *)coachingAvailabilityManager;
-(HDSHAccessibilityAssertionManager *)accessibilityAssertionManager;
-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1 client:(id)arg2 ;
-(id)initWithProfile:(id)arg1 sleepStoreProvider:(/*^block*/id)arg2 ;
-(HDSHFeatureAvailabilityManager *)trackingAvailabilityManager;
@end

