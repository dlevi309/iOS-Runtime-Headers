/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class NAFuture, HUAccessorySettingsSiriRecognitionLanguageItemManager, NSString;

@interface HUAccessorySettingsSiriRecognitionLanguageViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol> {

	NAFuture* _changeLanguageFuture;
	long long _selectedLanguageIndex;

}

@property (nonatomic,readonly) HUAccessorySettingsSiriRecognitionLanguageItemManager * itemManager; 
@property (nonatomic,retain) NAFuture * changeLanguageFuture;                                                    //@synthesize changeLanguageFuture=_changeLanguageFuture - In the implementation block
@property (assign,nonatomic) long long selectedLanguageIndex;                                                    //@synthesize selectedLanguageIndex=_selectedLanguageIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(long long)selectedLanguageIndex;
-(void)setSelectedLanguageIndex:(long long)arg1 ;
-(BOOL)_shouldPresentAlertRequestingToTurnOffVoiceRecognition:(id)arg1 ;
-(void)_presentAlertConfirmingLanguageChangeAndTurnOffVoiceRecognition:(id)arg1 indexPath:(id)arg2 ;
-(void)_presentAlertConfirmingLanguageChangeForThisORAllHomePods:(id)arg1 indexPath:(id)arg2 ;
-(void)_changeSiriLanguageOnlyForThisHomePod:(id)arg1 turnOffVoiceID:(BOOL)arg2 ;
-(void)_attemptToFixVoiceRecognitionOnboardingFailures:(id)arg1 ;
-(void)_presentAlertConfirmingLanguageChangeForAllHomeMembers:(id)arg1 indexPath:(id)arg2 ;
-(void)_clearSpinner;
-(void)_turnOffVoiceIDAndChangeSiriLanguageForAllHomePods:(id)arg1 ;
-(BOOL)_isAnyHomePodOnSupportedMultiUserLanguage;
-(void)_turnOffVoiceIDForTargetLanguageOption:(id)arg1 ;
-(void)setChangeLanguageFuture:(NAFuture *)arg1 ;
-(NAFuture *)changeLanguageFuture;
@end

