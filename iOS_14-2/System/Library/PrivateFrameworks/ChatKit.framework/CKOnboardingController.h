/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CNMeCardSharingPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/IMCNMeCardSharingOnboardingEditViewControllerDelegate.h>
#import <libobjc.A.dylib/IMCNMeCardSharingOnboardingAudienceViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/CKCNSharingProfileOnboardingFlowManagerDelegate.h>

@protocol CKOnboardingControllerDelegate, AVTAvatarRecord, IMCNMeCardSharingResult;
@class IMCloudKitSyncState, UINavigationController, OBWelcomeFullCenterContentController, AVPlayer, AVPlayerLooper, AVTAvatarStore, CKCNSharingProfileOnboardingFlowManager, CNSharingProfileAvatarItemProviderConfiguration, NSString;

@interface CKOnboardingController : NSObject <CNMeCardSharingPickerViewControllerDelegate, AVTAvatarEditorViewControllerDelegate, IMCNMeCardSharingOnboardingEditViewControllerDelegate, IMCNMeCardSharingOnboardingAudienceViewControllerDelegate, UINavigationControllerDelegate, CKCNSharingProfileOnboardingFlowManagerDelegate> {

	BOOL _presentingFromPrefs;
	int _micLayout;
	id<CKOnboardingControllerDelegate> _delegate;
	IMCloudKitSyncState* _syncState;
	UINavigationController* _navigationController;
	OBWelcomeFullCenterContentController* _memojiCreationController;
	AVPlayer* _memojiVideoPlayer;
	AVPlayerLooper* _memojiVideoPlayerLooper;
	AVTAvatarStore* _avatarStore;
	id<AVTAvatarRecord> _avatarRecord;
	id<IMCNMeCardSharingResult> _pendingMeCardSharingResult;
	CKCNSharingProfileOnboardingFlowManager* _nicknameFlowManager;
	CNSharingProfileAvatarItemProviderConfiguration* _avatarItemProviderConfiguration;

}

@property (nonatomic,retain) UINavigationController * navigationController;                                                                 //@synthesize navigationController=_navigationController - In the implementation block
@property (getter=_memojiCreationController,nonatomic,retain) OBWelcomeFullCenterContentController * memojiCreationController;              //@synthesize memojiCreationController=_memojiCreationController - In the implementation block
@property (nonatomic,retain) AVPlayer * memojiVideoPlayer;                                                                                  //@synthesize memojiVideoPlayer=_memojiVideoPlayer - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * memojiVideoPlayerLooper;                                                                      //@synthesize memojiVideoPlayerLooper=_memojiVideoPlayerLooper - In the implementation block
@property (nonatomic,retain) AVTAvatarStore * avatarStore;                                                                                  //@synthesize avatarStore=_avatarStore - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                                              //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) id<IMCNMeCardSharingResult> pendingMeCardSharingResult;                                                        //@synthesize pendingMeCardSharingResult=_pendingMeCardSharingResult - In the implementation block
@property (nonatomic,retain) CKCNSharingProfileOnboardingFlowManager * nicknameFlowManager;                                                 //@synthesize nicknameFlowManager=_nicknameFlowManager - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItemProviderConfiguration * avatarItemProviderConfiguration;                             //@synthesize avatarItemProviderConfiguration=_avatarItemProviderConfiguration - In the implementation block
@property (assign,nonatomic) BOOL presentingFromPrefs;                                                                                      //@synthesize presentingFromPrefs=_presentingFromPrefs - In the implementation block
@property (assign,nonatomic,__weak) id<CKOnboardingControllerDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMCloudKitSyncState * syncState;                                                                               //@synthesize syncState=_syncState - In the implementation block
@property (assign,nonatomic) int micLayout;                                                                                                 //@synthesize micLayout=_micLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IMCloudKitSyncState *)syncState;
-(void)setSyncState:(IMCloudKitSyncState *)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(id<CKOnboardingControllerDelegate>)delegate;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(int)micLayout;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setDelegate:(id<CKOnboardingControllerDelegate>)arg1 ;
-(BOOL)accountCanCreateNickname;
-(BOOL)_shouldShowNicknameOnboardingFlow;
-(BOOL)presentNicknameSharingSetupFlowWithMemoji:(BOOL)arg1 ;
-(void)meCardSharingOnboardingAudienceViewControllerDidFinish:(id)arg1 withSharingAudience:(unsigned long long)arg2 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)flowManager:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)flowManagerDidSelectSetupLater:(id)arg1 ;
-(id)_nicknameController;
-(void)sharingPicker:(id)arg1 didChangeSharingState:(BOOL)arg2 ;
-(void)sharingPickerDidFinish:(id)arg1 ;
-(void)sharingPicker:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2 ;
-(void)prepareForSuspend;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(void)setAvatarItemProviderConfiguration:(CNSharingProfileAvatarItemProviderConfiguration *)arg1 ;
-(void)viewIssues:(id)arg1 ;
-(void)meCardSharingOnboardingEditController:(id)arg1 didFinishWithOnboardingResult:(id)arg2 ;
-(BOOL)_meCardSharingEnabled;
-(unsigned long long)_meCardSharingAudience;
-(id)_meCardSharingState;
-(id)_userDefaults;
-(AVTAvatarStore *)avatarStore;
-(BOOL)_shouldPresentNewInMessages;
-(id)_introController;
-(void)prepareForOnboarding;
-(void)presentOnboarding:(id)arg1 ;
-(void)_writeDefaultWhatsNewDidShow;
-(void)startNicknameOnboardingIfNeeded;
-(BOOL)_shouldShowNicknameOnboardingFlowOnLaunch;
-(BOOL)_shouldPresentMiCWelcome;
-(void)_beginMiCWelcomeScreen;
-(BOOL)_isRunningTest;
-(void)_writeDefaultMiCWelcome;
-(BOOL)alwaysShowNicknameOnboarding;
-(BOOL)_shouldShowNicknameOnboardingFlowIgnoringVersion:(BOOL)arg1 ;
-(unsigned long long)nicknameOnboardingLastShownVersion;
-(id)_memojiCreationController;
-(id)_nameAndPhotoSharingIntroController;
-(void)_presentMemojiCreationIfNeeded:(/*^block*/id)arg1 skipAction:(/*^block*/id)arg2 ;
-(void)_fetchMemojiWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pushMemojiCreationStepIfNeeded;
-(void)pushMemojiCreationStep;
-(void)setAvatarStore:(AVTAvatarStore *)arg1 ;
-(void)presentMemojiSetup;
-(void)pushNameAndPhotoSharingIntroStepIfNeeded;
-(void)setMemojiVideoPlayer:(AVPlayer *)arg1 ;
-(void)setMemojiVideoPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)_pushOnboardingViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)contactForNicknameOnboarding;
-(void)pushNameAndPhotoSharingConfigDataStep;
-(void)completedOnboarding;
-(void)pushNameAndPhotoSharingIntroStep;
-(long long)_whatsNewVersion;
-(void)_writeDefaultNicknameOnboardingVersion;
-(void)setNicknameFlowManager:(CKCNSharingProfileOnboardingFlowManager *)arg1 ;
-(void)completedOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(CKCNSharingProfileOnboardingFlowManager *)nicknameFlowManager;
-(void)setPendingMeCardSharingResult:(id<IMCNMeCardSharingResult>)arg1 ;
-(long long)_whatsNewLatestShippingVersion;
-(void)pushNameAndPhotoSharingConfigSharingPreferenceStep;
-(void)_onClickMiCOnboard;
-(id<IMCNMeCardSharingResult>)pendingMeCardSharingResult;
-(BOOL)_readyToShowNextScreenWithTimeout:(unsigned long long)arg1 ;
-(void)_onClickMiCNotNow;
-(void)_beginMOCFlowForState:(id)arg1 rampState:(id)arg2 ;
-(void)setMicLayout:(int)arg1 ;
-(UINavigationController *)navigationController;
-(void)reportMoCLayoutShown:(int)arg1 ;
-(id)_micController;
-(void)_tryToEnableHSA2;
-(void)_tryToEnableMOC;
-(AVPlayer *)memojiVideoPlayer;
-(void)sharingPicker:(id)arg1 didSelectNameFormat:(unsigned long long)arg2 ;
-(BOOL)presentOnboardingIfNeeded;
-(BOOL)presentNicknameSharingSetupFlow;
-(unsigned long long)_meCardSharingNameFormat;
-(void)presentFromPrefsPresentationController:(id)arg1 resizeToFitContent:(BOOL)arg2 ;
-(BOOL)readyToShowNextScreen;
-(AVPlayerLooper *)memojiVideoPlayerLooper;
-(void)setMemojiCreationController:(OBWelcomeFullCenterContentController *)arg1 ;
-(BOOL)presentingFromPrefs;
-(void)setPresentingFromPrefs:(BOOL)arg1 ;
@end

