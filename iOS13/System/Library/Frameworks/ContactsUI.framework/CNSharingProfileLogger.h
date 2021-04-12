/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol OS_os_log;
@class NSObject;

@interface CNSharingProfileLogger : NSObject {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
+(id)log;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg1 ;
-(void)logOnboardingSuccessSavingMeCardImageToRecents;
-(void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg1 ;
-(void)logOnboardingSavingContact:(id)arg1 ;
-(void)logOnboardingAddingContact;
-(void)logOnboardingUpdatingContactWithIdentifier:(id)arg1 ;
-(void)logOnboardingErrorSavingContactWithDescription:(id)arg1 ;
-(void)logOnboardingSettingMeContact;
-(void)logOnboardingErrorSettingMeContactWithDescription:(id)arg1 ;
-(void)logOnboardingSuccessSavingContact;
-(void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg1 ;
-(void)logOnboardingReturningSharingResultWithDescription:(id)arg1 ;
-(void)logOnboardingReturningDefaultMonogram;
-(void)logOnboardingReturningEmptyImage;
-(void)logSettingsSavingContact:(id)arg1 ;
-(void)logSettingsErrorSavingContactWithDescription:(id)arg1 ;
-(void)logSettingsSettingMeContact;
-(void)logSettingsErrorSettingMeContactWithDescription:(id)arg1 ;
-(void)logSettingsSuccessSavingContact;
-(void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg1 ;
-(void)logSettingsReturningSharingResultWithDescription:(id)arg1 ;
-(void)logSettingsReturningDefaultMonogram;
-(void)logSettingsReturningEmptyImageForNoChange;
-(void)logSettingsReturningEmptyImage;
@end

