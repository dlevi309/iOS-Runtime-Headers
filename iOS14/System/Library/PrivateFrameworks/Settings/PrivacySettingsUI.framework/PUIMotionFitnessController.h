/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <PrivacySettingsUI/PUITCCAccessController.h>

@protocol SRRelatedSettingsProvider;
@interface PUIMotionFitnessController : PUITCCAccessController {

	id<SRRelatedSettingsProvider> _sensorKitSpecifiersProvider;

}
-(id)specifiers;
-(id)_appSpecifiers;
-(id)valueForSpecifier:(id)arg1 ;
-(id)loadSensorKitSpecifiersProvider;
-(BOOL)isFitnessTrackingEnabledFromTCC;
-(void)setFitnessTrackingEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isFitnessTrackingEnabled:(id)arg1 ;
@end

