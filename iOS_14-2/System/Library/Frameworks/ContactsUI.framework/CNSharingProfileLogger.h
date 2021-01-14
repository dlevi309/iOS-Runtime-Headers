/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)logOnboardingAddingContact;
-(void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg1 ;
-(void)logOnboardingSavingContact:(id)arg1 ;
-(void)logOnboardingSuccessSavingMeCardImageToRecents;
-(void)logOnboardingSuccessSavingContact;
-(void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg1 ;
-(void)logOnboardingUpdatingContactWithIdentifier:(id)arg1 ;
-(void)logOnboardingReturningDefaultMonogram;
-(void)logOnboardingErrorSavingContactWithDescription:(id)arg1 ;
-(void)logOnboardingSettingMeContact;
-(void)logOnboardingErrorSettingMeContactWithDescription:(id)arg1 ;
-(void)logOnboardingReturningEmptyImage;
-(void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg1 ;
-(void)logOnboardingReturningSharingResultWithDescription:(id)arg1 ;
-(void)logSettingsSavingContact:(id)arg1 ;
-(void)logSettingsErrorSavingContactWithDescription:(id)arg1 ;
-(void)logSettingsSettingMeContact;
-(void)logSettingsErrorSettingMeContactWithDescription:(id)arg1 ;
-(void)logSettingsSuccessSavingContact;
-(void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg1 ;
-(void)logSettingsReturningSharingResultWithDescription:(id)arg1 ;
-(void)logSettingsReturningEmptyImage;
-(void)logSettingsReturningDefaultMonogram;
-(void)logSettingsReturningEmptyImageForNoChange;
@end

