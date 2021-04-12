/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CNMeCardSharingPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/IMCNMeCardSharingOnboardingEditViewControllerDelegate.h>
#import <libobjc.A.dylib/IMCNMeCardSharingOnboardingAudienceViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/CKCNSharingProfileOnboardingFlowManagerDelegate.h>

@protocol CKOnboardingControllerDelegate, AVTAvatarRecord;
@class IMCloudKitSyncState, UINavigationController, OBWelcomeFullCenterContentController, AVPlayer, AVPlayerLooper, AVTAvatarStore, IMCNMeCardSharingResult, CKCNSharingProfileOnboardingFlowManager, CNSharingProfileAvatarItemProviderConfiguration, NSString;

@interface CKOnboardingController : NSObject <CNMeCardSharingPickerViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, IMCNMeCardSharingOnboardingEditViewControllerDelegate, IMCNMeCardSharingOnboardingAudienceViewControllerDelegate, UINavigationControllerDelegate, CKCNSharingProfileOnboardingFlowManagerDelegate> {

	int _micLayout;
	id<CKOnboardingControllerDelegate> _delegate;
	IMCloudKitSyncState* _syncState;
	UINavigationController* _navigationController;
	OBWelcomeFullCenterContentController* _memojiCreationController;
	AVPlayer* _memojiVideoPlayer;
	AVPlayerLooper* _memojiVideoPlayerLooper;
	AVTAvatarStore* _avatarStore;
	id<AVTAvatarRecord> _avatarRecord;
	IMCNMeCardSharingResult* _pendingMeCardSharingResult;
	CKCNSharingProfileOnboardingFlowManager* _nicknameFlowManager;
	CNSharingProfileAvatarItemProviderConfiguration* _avatarItemProviderConfiguration;

}

@property (nonatomic,retain) UINavigationController * navigationController;                                                                 //@synthesize navigationController=_navigationController - In the implementation block
@property (getter=_memojiCreationController,nonatomic,retain) OBWelcomeFullCenterContentController * memojiCreationController;              //@synthesize memojiCreationController=_memojiCreationController - In the implementation block
@property (nonatomic,retain) AVPlayer * memojiVideoPlayer;                                                                                  //@synthesize memojiVideoPlayer=_memojiVideoPlayer - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * memojiVideoPlayerLooper;                                                                      //@synthesize memojiVideoPlayerLooper=_memojiVideoPlayerLooper - In the implementation block
@property (nonatomic,retain) AVTAvatarStore * avatarStore;                                                                                  //@synthesize avatarStore=_avatarStore - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                                              //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) IMCNMeCardSharingResult * pendingMeCardSharingResult;                                                          //@synthesize pendingMeCardSharingResult=_pendingMeCardSharingResult - In the implementation block
@property (nonatomic,retain) CKCNSharingProfileOnboardingFlowManager * nicknameFlowManager;                                                 //@synthesize nicknameFlowManager=_nicknameFlowManager - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItemProviderConfiguration * avatarItemProviderConfiguration;                             //@synthesize avatarItemProviderConfiguration=_avatarItemProviderConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<CKOnboardingControllerDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMCloudKitSyncState * syncState;                                                                               //@synthesize syncState=_syncState - In the implementation block
@property (assign,nonatomic) int micLayout;                                                                                                 //@synthesize micLayout=_micLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKOnboardingControllerDelegate>)delegate;
-(void)setDelegate:(id<CKOnboardingControllerDelegate>)arg1 ;
-(id)_userDefaults;
-(UINavigationController *)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(void)setAvatarItemProviderConfiguration:(CNSharingProfileAvatarItemProviderConfiguration *)arg1 ;
-(AVTAvatarStore *)avatarStore;
-(void)meCardSharingOnboardingAudienceViewControllerDidFinish:(id)arg1 withSharingAudience:(unsigned long long)arg2 ;
-(void)flowManager:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)sharingPicker:(id)arg1 didChangeSharingState:(BOOL)arg2 ;
-(void)sharingPickerDidFinish:(id)arg1 ;
-(void)sharingPicker:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2 ;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(void)meCardSharingOnboardingEditController:(id)arg1 didFinishWithOnboardingResult:(id)arg2 ;
-(IMCloudKitSyncState *)syncState;
-(void)prepareForSuspend;
-(BOOL)_shouldShowNicknameOnboardingFlow;
-(BOOL)presentNicknameSharingSetupFlow;
-(BOOL)_meCardSharingEnabled;
-(unsigned long long)_meCardSharingAudience;
-(id)_meCardSharingState;
-(BOOL)_shouldPresentNewInMessages;
-(void)prepareForOnboarding;
-(id)_introController;
-(void)presentOnboarding:(id)arg1 ;
-(void)_writeDefaultWhatsNewDidShow;
-(BOOL)_shouldShowNicknameOnboardingFlowOnLaunch;
-(void)startNicknameOnboardingIfNeeded;
-(BOOL)_shouldPresentMiCWelcome;
-(void)_beginMiCWelcomeScreen;
-(void)_writeDefaultMiCWelcome;
-(BOOL)alwaysShowNicknameOnboarding;
-(BOOL)_shouldShowNicknameOnboardingFlowIgnoringVersion:(BOOL)arg1 ;
-(BOOL)_isRunningTest;
-(unsigned long long)nicknameOnboardingLastShownVersion;
-(BOOL)accountCanCreateNickname;
-(id)_memojiCreationController;
-(id)_nameAndPhotoSharingIntroController;
-(void)_presentMemojiCreationIfNeeded:(/*^block*/id)arg1 skipAction:(/*^block*/id)arg2 ;
-(void)pushMemojiCreationStepIfNeeded;
-(id)_nicknameController;
-(void)pushMemojiCreationStep;
-(void)pushNameAndPhotoSharingIntroStepIfNeeded;
-(void)setAvatarStore:(AVTAvatarStore *)arg1 ;
-(void)setMemojiVideoPlayer:(AVPlayer *)arg1 ;
-(void)setMemojiVideoPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)presentMemojiSetup;
-(id)contactForNicknameOnboarding;
-(void)pushNameAndPhotoSharingConfigDataStep;
-(void)completedOnboarding;
-(void)pushNameAndPhotoSharingIntroStep;
-(void)_writeDefaultNicknameOnboardingVersion;
-(void)completedOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(void)setNicknameFlowManager:(CKCNSharingProfileOnboardingFlowManager *)arg1 ;
-(CKCNSharingProfileOnboardingFlowManager *)nicknameFlowManager;
-(void)setPendingMeCardSharingResult:(IMCNMeCardSharingResult *)arg1 ;
-(long long)_whatsNewLatestShippingVersion;
-(long long)_whatsNewVersion;
-(void)pushNameAndPhotoSharingConfigSharingPreferenceStep;
-(IMCNMeCardSharingResult *)pendingMeCardSharingResult;
-(BOOL)readyToShowNextScreen;
-(BOOL)_readyToShowNextScreenWithTimeout:(unsigned long long)arg1 ;
-(void)_onClickMiCOnboard;
-(void)_onClickMiCNotNow;
-(void)_beginMOCFlowForState:(id)arg1 rampState:(id)arg2 ;
-(void)setMicLayout:(int)arg1 ;
-(void)setSyncState:(IMCloudKitSyncState *)arg1 ;
-(void)reportMoCLayoutShown:(int)arg1 ;
-(id)_micController;
-(void)_tryToEnableHSA2;
-(void)_tryToEnableMOC;
-(AVPlayer *)memojiVideoPlayer;
-(void)sharingPicker:(id)arg1 didSelectNameFormat:(unsigned long long)arg2 ;
-(BOOL)presentOnboardingIfNeeded;
-(unsigned long long)_meCardSharingNameFormat;
-(int)micLayout;
-(void)setMemojiCreationController:(OBWelcomeFullCenterContentController *)arg1 ;
-(AVPlayerLooper *)memojiVideoPlayerLooper;
@end

