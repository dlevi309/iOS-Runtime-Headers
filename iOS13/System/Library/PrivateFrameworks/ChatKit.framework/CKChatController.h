/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCoreChatController.h>
#import <libobjc.A.dylib/CKStickerDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/CKEffectPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/CKThrowAnimationManagerDelegate.h>
#import <libobjc.A.dylib/CKSendAnimationManagerDelegate.h>
#import <libobjc.A.dylib/CKSendAnimationBalloonProvider.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/CKReaderViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAddPassesViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <libobjc.A.dylib/CKVideoMessageRecordingViewControllerDelegate.h>
#import <libobjc.A.dylib/CKActionMenuGestureRecognizerButtonDelegate.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryViewDelegate.h>
#import <libobjc.A.dylib/CKReaderViewControllerDelegate.h>
#import <libobjc.A.dylib/CKTrimControllerDelegate.h>
#import <libobjc.A.dylib/AFContextProvider.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKChatInputControllerDelegate.h>
#import <libobjc.A.dylib/CKFullScreenBalloonViewControllerDelegate.h>
#import <libobjc.A.dylib/CKBrowserDragControllerTranscriptDelegate.h>
#import <libobjc.A.dylib/SGSuggestionPresenterDelegate.h>
#import <libobjc.A.dylib/CKDetailsControllerDelegate.h>
#import <libobjc.A.dylib/_UIClickInteractionDelegate.h>
#import <libobjc.A.dylib/CKUnexpectedlyLoggedOutNotificationViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UITextDropDelegate.h>
#import <UIKit/UITextPasteDelegate.h>
#import <libobjc.A.dylib/CKExtensionConsumer.h>
#import <libobjc.A.dylib/CKFunCameraViewControllerDelegate.h>
#import <libobjc.A.dylib/ILClassificationUIExtensionHostViewControllerDelegate.h>
#import <libobjc.A.dylib/CKNicknameBannerViewDelegate.h>
#import <libobjc.A.dylib/CKOnboardingControllerDelegate.h>
#import <libobjc.A.dylib/CKNicknameUpdatesViewControllerDelegate.h>
#import <libobjc.A.dylib/CKNavbarCanvasViewControllerDelegate.h>

@protocol OS_dispatch_group, UIDragSession, UIDropSession;
@class CKComposition, NSNumber, CKMessageEntryViewController, CKChatInputController, IMScheduledUpdater, CKScheduledUpdater, CKNavbarCanvasViewController, SGFoundInSuggestionPresenter, NSLayoutConstraint, CKUnreadBannerView, NSString, CKRaiseGesture, UIToolbar, CKAudioTrimViewController, CKVideoTrimController, IMPluginPayload, CKThrowAnimationManager, UIImagePickerController, CKVideoMessageRecordingViewController, CKQLPreviewController, CKQLDetailsPreviewController, UIView, CKInvisibleInkEffectController, CKEffectPickerViewController, UIWindow, CKUnexpectedlyLoggedOutNotificationView, CADisplayLink, NSObject, CKFunCameraViewController, CKNicknameBannerView, CKNicknameUpdatesViewController, CNContactPickerViewController, IMNickname, CKOnboardingController, STConversationContext, CKMessageEntryView;

@interface CKChatController : CKCoreChatController <CKStickerDetailViewControllerDelegate, CKEffectPickerViewControllerDelegate, CKThrowAnimationManagerDelegate, CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider, UIInteractionProgressObserver, QLPreviewControllerDelegate, CKReaderViewControllerDelegate, PKAddPassesViewControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, CKVideoMessageRecordingViewControllerDelegate, CKActionMenuGestureRecognizerButtonDelegate, PHPhotoLibraryChangeObserver, CNContactPickerDelegate, CKMessageEntryViewDelegate, CKReaderViewControllerDelegate, CKTrimControllerDelegate, AFContextProvider, UIGestureRecognizerDelegate, CKChatInputControllerDelegate, CKFullScreenBalloonViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, SGSuggestionPresenterDelegate, CKDetailsControllerDelegate, _UIClickInteractionDelegate, CKUnexpectedlyLoggedOutNotificationViewDelegate, UIPopoverPresentationControllerDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, UITextDropDelegate, UITextPasteDelegate, CKExtensionConsumer, CKFunCameraViewControllerDelegate, ILClassificationUIExtensionHostViewControllerDelegate, CKNicknameBannerViewDelegate, CKOnboardingControllerDelegate, CKNicknameUpdatesViewControllerDelegate, CKNavbarCanvasViewControllerDelegate> {

	CGPoint _startingScrollOffset;
	BOOL _shouldBecomeFirstResponderWhenDismissingModalBrowser;
	BOOL _shouldDisplayKeyboardWhenDismissingModalBrowser;
	CKComposition* _dropComposition;
	BOOL _isAnimatingMessageSend;
	BOOL _shouldShowDoneButton;
	BOOL _transitioningSize;
	BOOL _needToScrollToBottom;
	BOOL _firstLayoutAfterResume;
	BOOL _suppressEntryViewKeyboardNotifications;
	BOOL _entryViewWasActiveBeforePresentingDataDetector;
	BOOL _primeTranscriptWithInitialScrollGeometries;
	BOOL _shouldDisableEntryView;
	BOOL _showingVideoMessageRecordingView;
	BOOL _isShowingPreview;
	BOOL _entryViewWasActiveOnPreview;
	BOOL _isShowingAcknowledgmentPicker;
	BOOL _effectPickerIsPresented;
	BOOL _scrollDownIsValid;
	BOOL _isShowingDetailsController;
	BOOL _isShowingCamera;
	double _lastLaidOutWidth;
	long long _lastKnownDeviceOrientation;
	NSNumber* _transcriptBottomContentOffsetAtSuspend;
	long long _targetFirstResponder;
	CKMessageEntryViewController* _entryViewController;
	CKChatInputController* _inputController;
	IMScheduledUpdater* _autorotationUpdater;
	CKScheduledUpdater* _typingUpdater;
	CKNavbarCanvasViewController* _navbarCanvasViewController;
	SGFoundInSuggestionPresenter* _suggestionBannerPresenter;
	double _suggestionBannerHeight;
	NSLayoutConstraint* _suggestionBannerTopConstraint;
	CKUnreadBannerView* _unreadBannerView;
	NSString* _lastSeenGUID;
	/*^block*/id _scrollBlock;
	CKComposition* _initialComposition;
	CKRaiseGesture* _raiseGesture;
	UIToolbar* _actionsToolbar;
	CKComposition* _compositionBeingTrimmed;
	CKAudioTrimViewController* _audioTrimController;
	CKVideoTrimController* _videoTrimController;
	IMPluginPayload* _extensionPayloadBeingSent;
	CKThrowAnimationManager* _throwAnimationManager;
	/*^block*/id _deferredSendAnimationBlock;
	UIImagePickerController* _imagePickerController;
	CKVideoMessageRecordingViewController* _videoMessageRecordingViewController;
	CKQLPreviewController* _previewController;
	CKQLDetailsPreviewController* _entryPreviewController;
	UIView* _previewSourceView;
	CKInvisibleInkEffectController* _previewInvisibleInkEffectController;
	UIView* _previewRevealView;
	CKEffectPickerViewController* _effectPickerViewController;
	UIWindow* _effectPickerWindow;
	CKUnexpectedlyLoggedOutNotificationView* _unexpectedlyLoggedOutNotificationView;
	CKScheduledUpdater* _transcriptInlineNotificationUpdater;
	CADisplayLink* _stickerTranscriptScrollDisplayLink;
	double _stickerTranscriptScrollDelta;
	NSObject*<OS_dispatch_group> _revealAnimationGroup;
	id<UIDragSession> _dragSession;
	id<UIDropSession> _dropSession;
	CKFunCameraViewController* _funCameraViewController;
	/*^block*/id _deferredPresentationBlock;
	CKNicknameBannerView* _nicknameBanner;
	CKNicknameUpdatesViewController* _nicknameUpdateController;
	CNContactPickerViewController* _contactPicker;
	IMNickname* _currentNickname;
	CKOnboardingController* _onboardingController;
	UIView* _lockoutView;
	STConversationContext* _conversationContext;
	long long _acknowledgmentToSend;
	CGPoint _initialContentOffset;
	UIEdgeInsets _initialContentInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CKEffectPickerViewController * effectPickerViewController; 
@property (nonatomic,retain) UIWindow * effectPickerWindow; 
@property (assign,nonatomic) BOOL effectPickerIsPresented; 
@property (nonatomic,retain) CKThrowAnimationManager * throwAnimationManager; 
@property (assign,getter=isTransitioningSize,nonatomic) BOOL transitioningSize;                                            //@synthesize transitioningSize=_transitioningSize - In the implementation block
@property (assign,nonatomic) double lastLaidOutWidth;                                                                      //@synthesize lastLaidOutWidth=_lastLaidOutWidth - In the implementation block
@property (assign,nonatomic) BOOL needToScrollToBottom;                                                                    //@synthesize needToScrollToBottom=_needToScrollToBottom - In the implementation block
@property (assign,nonatomic) long long lastKnownDeviceOrientation;                                                         //@synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation - In the implementation block
@property (nonatomic,retain) NSNumber * transcriptBottomContentOffsetAtSuspend;                                            //@synthesize transcriptBottomContentOffsetAtSuspend=_transcriptBottomContentOffsetAtSuspend - In the implementation block
@property (assign,nonatomic) BOOL firstLayoutAfterResume;                                                                  //@synthesize firstLayoutAfterResume=_firstLayoutAfterResume - In the implementation block
@property (assign,nonatomic) long long targetFirstResponder;                                                               //@synthesize targetFirstResponder=_targetFirstResponder - In the implementation block
@property (nonatomic,retain) CKMessageEntryViewController * entryViewController;                                           //@synthesize entryViewController=_entryViewController - In the implementation block
@property (nonatomic,retain) CKChatInputController * inputController;                                                      //@synthesize inputController=_inputController - In the implementation block
@property (assign,nonatomic) BOOL suppressEntryViewKeyboardNotifications;                                                  //@synthesize suppressEntryViewKeyboardNotifications=_suppressEntryViewKeyboardNotifications - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * autorotationUpdater;                                                     //@synthesize autorotationUpdater=_autorotationUpdater - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * typingUpdater;                                                           //@synthesize typingUpdater=_typingUpdater - In the implementation block
@property (nonatomic,retain) CKNavbarCanvasViewController * navbarCanvasViewController;                                    //@synthesize navbarCanvasViewController=_navbarCanvasViewController - In the implementation block
@property (nonatomic,retain) SGFoundInSuggestionPresenter * suggestionBannerPresenter;                                     //@synthesize suggestionBannerPresenter=_suggestionBannerPresenter - In the implementation block
@property (assign,nonatomic) double suggestionBannerHeight;                                                                //@synthesize suggestionBannerHeight=_suggestionBannerHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * suggestionBannerTopConstraint;                                           //@synthesize suggestionBannerTopConstraint=_suggestionBannerTopConstraint - In the implementation block
@property (nonatomic,retain) CKUnreadBannerView * unreadBannerView;                                                        //@synthesize unreadBannerView=_unreadBannerView - In the implementation block
@property (nonatomic,retain) NSString * lastSeenGUID;                                                                      //@synthesize lastSeenGUID=_lastSeenGUID - In the implementation block
@property (nonatomic,copy) id scrollBlock;                                                                                 //@synthesize scrollBlock=_scrollBlock - In the implementation block
@property (assign,nonatomic) BOOL entryViewWasActiveBeforePresentingDataDetector;                                          //@synthesize entryViewWasActiveBeforePresentingDataDetector=_entryViewWasActiveBeforePresentingDataDetector - In the implementation block
@property (assign,nonatomic) BOOL primeTranscriptWithInitialScrollGeometries;                                              //@synthesize primeTranscriptWithInitialScrollGeometries=_primeTranscriptWithInitialScrollGeometries - In the implementation block
@property (assign,nonatomic) CGPoint initialContentOffset;                                                                 //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets initialContentInset;                                                             //@synthesize initialContentInset=_initialContentInset - In the implementation block
@property (nonatomic,retain) CKComposition * initialComposition;                                                           //@synthesize initialComposition=_initialComposition - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableEntryView;                                                                  //@synthesize shouldDisableEntryView=_shouldDisableEntryView - In the implementation block
@property (nonatomic,retain) CKRaiseGesture * raiseGesture;                                                                //@synthesize raiseGesture=_raiseGesture - In the implementation block
@property (nonatomic,retain) UIToolbar * actionsToolbar;                                                                   //@synthesize actionsToolbar=_actionsToolbar - In the implementation block
@property (nonatomic,retain) CKComposition * compositionBeingTrimmed;                                                      //@synthesize compositionBeingTrimmed=_compositionBeingTrimmed - In the implementation block
@property (nonatomic,retain) CKAudioTrimViewController * audioTrimController;                                              //@synthesize audioTrimController=_audioTrimController - In the implementation block
@property (nonatomic,retain) CKVideoTrimController * videoTrimController;                                                  //@synthesize videoTrimController=_videoTrimController - In the implementation block
@property (nonatomic,retain) IMPluginPayload * extensionPayloadBeingSent;                                                  //@synthesize extensionPayloadBeingSent=_extensionPayloadBeingSent - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingMessageSend;                                                                  //@synthesize isAnimatingMessageSend=_isAnimatingMessageSend - In the implementation block
@property (nonatomic,retain) CKThrowAnimationManager * throwAnimationManager;                                              //@synthesize throwAnimationManager=_throwAnimationManager - In the implementation block
@property (nonatomic,copy) id deferredSendAnimationBlock;                                                                  //@synthesize deferredSendAnimationBlock=_deferredSendAnimationBlock - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePickerController;                                              //@synthesize imagePickerController=_imagePickerController - In the implementation block
@property (nonatomic,retain) CKVideoMessageRecordingViewController * videoMessageRecordingViewController;                  //@synthesize videoMessageRecordingViewController=_videoMessageRecordingViewController - In the implementation block
@property (assign,getter=isShowingVideoMessageRecordingView,nonatomic) BOOL showingVideoMessageRecordingView;              //@synthesize showingVideoMessageRecordingView=_showingVideoMessageRecordingView - In the implementation block
@property (nonatomic,retain) CKQLPreviewController * previewController;                                                    //@synthesize previewController=_previewController - In the implementation block
@property (nonatomic,retain) CKQLDetailsPreviewController * entryPreviewController;                                        //@synthesize entryPreviewController=_entryPreviewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * previewSourceView;                                                            //@synthesize previewSourceView=_previewSourceView - In the implementation block
@property (assign,nonatomic) BOOL isShowingPreview;                                                                        //@synthesize isShowingPreview=_isShowingPreview - In the implementation block
@property (assign,nonatomic) BOOL entryViewWasActiveOnPreview;                                                             //@synthesize entryViewWasActiveOnPreview=_entryViewWasActiveOnPreview - In the implementation block
@property (nonatomic,retain) CKInvisibleInkEffectController * previewInvisibleInkEffectController;                         //@synthesize previewInvisibleInkEffectController=_previewInvisibleInkEffectController - In the implementation block
@property (nonatomic,retain) UIView * previewRevealView;                                                                   //@synthesize previewRevealView=_previewRevealView - In the implementation block
@property (assign,nonatomic) BOOL isShowingAcknowledgmentPicker;                                                           //@synthesize isShowingAcknowledgmentPicker=_isShowingAcknowledgmentPicker - In the implementation block
@property (nonatomic,retain) CKEffectPickerViewController * effectPickerViewController;                                    //@synthesize effectPickerViewController=_effectPickerViewController - In the implementation block
@property (nonatomic,retain) UIWindow * effectPickerWindow;                                                                //@synthesize effectPickerWindow=_effectPickerWindow - In the implementation block
@property (assign,nonatomic) BOOL effectPickerIsPresented;                                                                 //@synthesize effectPickerIsPresented=_effectPickerIsPresented - In the implementation block
@property (nonatomic,retain) CKUnexpectedlyLoggedOutNotificationView * unexpectedlyLoggedOutNotificationView;              //@synthesize unexpectedlyLoggedOutNotificationView=_unexpectedlyLoggedOutNotificationView - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * transcriptInlineNotificationUpdater;                                     //@synthesize transcriptInlineNotificationUpdater=_transcriptInlineNotificationUpdater - In the implementation block
@property (nonatomic,retain) CADisplayLink * stickerTranscriptScrollDisplayLink;                                           //@synthesize stickerTranscriptScrollDisplayLink=_stickerTranscriptScrollDisplayLink - In the implementation block
@property (assign,nonatomic) double stickerTranscriptScrollDelta;                                                          //@synthesize stickerTranscriptScrollDelta=_stickerTranscriptScrollDelta - In the implementation block
@property (assign,nonatomic) BOOL scrollDownIsValid;                                                                       //@synthesize scrollDownIsValid=_scrollDownIsValid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> revealAnimationGroup;                                            //@synthesize revealAnimationGroup=_revealAnimationGroup - In the implementation block
@property (nonatomic,retain) id<UIDragSession> dragSession;                                                                //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;                                                                //@synthesize dropSession=_dropSession - In the implementation block
@property (assign,nonatomic) BOOL isShowingDetailsController;                                                              //@synthesize isShowingDetailsController=_isShowingDetailsController - In the implementation block
@property (nonatomic,retain) CKFunCameraViewController * funCameraViewController;                                          //@synthesize funCameraViewController=_funCameraViewController - In the implementation block
@property (assign,nonatomic) BOOL isShowingCamera;                                                                         //@synthesize isShowingCamera=_isShowingCamera - In the implementation block
@property (nonatomic,copy) id deferredPresentationBlock;                                                                   //@synthesize deferredPresentationBlock=_deferredPresentationBlock - In the implementation block
@property (nonatomic,retain) CKNicknameBannerView * nicknameBanner;                                                        //@synthesize nicknameBanner=_nicknameBanner - In the implementation block
@property (nonatomic,retain) CKNicknameUpdatesViewController * nicknameUpdateController;                                   //@synthesize nicknameUpdateController=_nicknameUpdateController - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * contactPicker;                                                //@synthesize contactPicker=_contactPicker - In the implementation block
@property (nonatomic,retain) IMNickname * currentNickname;                                                                 //@synthesize currentNickname=_currentNickname - In the implementation block
@property (nonatomic,retain) CKOnboardingController * onboardingController;                                                //@synthesize onboardingController=_onboardingController - In the implementation block
@property (nonatomic,retain) UIView * lockoutView;                                                                         //@synthesize lockoutView=_lockoutView - In the implementation block
@property (nonatomic,retain) STConversationContext * conversationContext;                                                  //@synthesize conversationContext=_conversationContext - In the implementation block
@property (assign,nonatomic) long long acknowledgmentToSend;                                                               //@synthesize acknowledgmentToSend=_acknowledgmentToSend - In the implementation block
@property (assign,nonatomic,__weak) id<CKChatControllerDelegate> delegate; 
@property (nonatomic,readonly) CKMessageEntryView * entryView; 
@property (nonatomic,retain) CKComposition * composition; 
@property (nonatomic,readonly) BOOL isFunCamPresented; 
@property (assign,nonatomic) BOOL shouldShowDoneButton;                                                                    //@synthesize shouldShowDoneButton=_shouldShowDoneButton - In the implementation block
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)inputAccessoryView;
-(id)inputViewController;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isCollapsed;
-(long long)preferredStatusBarStyle;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<UIDropSession>)dropSession;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(id<UIDragSession>)dragSession;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(id)rotatingFooterView;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(UIEdgeInsets)_avoidanceInsets;
-(void)didReceiveMemoryWarning;
-(BOOL)prefersStatusBarHidden;
-(void)_setShouldLoadInputAccessoryViewOnAppearance:(BOOL)arg1 ;
-(void)_doneButtonPressed;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)_api_dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)_api_dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)_api_dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id)inputAccessoryViewController;
-(void)_showPhotoPickerWithSourceType:(long long)arg1 ;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(void)dismissKeyboard;
-(CKChatInputController *)inputController;
-(void)setInputController:(CKChatInputController *)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 ;
-(void)showKeyboard;
-(id)_currentPresentationController;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(id)textDroppableView:(id)arg1 proposalForDrop:(id)arg2 ;
-(id)textPasteConfigurationSupporting:(id)arg1 combineItemAttributedStrings:(id)arg2 forRange:(id)arg3 ;
-(id)textPasteConfigurationSupporting:(id)arg1 performPasteOfAttributedString:(id)arg2 toRange:(id)arg3 ;
-(void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2 ;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(CGPoint)initialContentOffset;
-(void)setConversation:(id)arg1 ;
-(id)_meContact;
-(void)_dealloc;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(CKComposition *)composition;
-(id)progressBar;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(CNContactPickerViewController *)contactPicker;
-(void)setContactPicker:(CNContactPickerViewController *)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)dismissPresentedViewController:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(CKQLPreviewController *)previewController;
-(void)setPreviewController:(CKQLPreviewController *)arg1 ;
-(UIImagePickerController *)imagePickerController;
-(void)setImagePickerController:(UIImagePickerController *)arg1 ;
-(void)windowDidResignKey:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(id)viewControllerToPresentFrom;
-(void)setConversationContext:(STConversationContext *)arg1 ;
-(STConversationContext *)conversationContext;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(void)_dismissPresentedViewController:(id)arg1 ;
-(id)viewControllerForPresentingFromBannerByPresenter:(id)arg1 ;
-(void)suggestionPresenterWantsToHideBanner:(id)arg1 ;
-(void)suggestionPresenterWantsToShowBanner:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(id)invisibleInkEffectControllerForPreviewController:(id)arg1 ;
-(void)previewControllerDidCancelDismiss:(id)arg1 ;
-(id)previewActionsForPreviewController:(id)arg1 ;
-(BOOL)previewController:(id)arg1 canShareItem:(id)arg2 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(CGRect*)arg3 realSize:(CGSize*)arg4 ;
-(BOOL)_clickyOrbEnabled;
-(id)_parentChatItemForIndexPath:(id)arg1 ;
-(id)_parentIndexPathForCellAtIndexPath:(id)arg1 ;
-(id)_balloonViewForCellAtIndexPath:(id)arg1 ;
-(void)hideStickersAssociatedWithChatItem:(id)arg1 ;
-(id)_previewingViewControllerForHitView:(id)arg1 indexPath:(id)arg2 ;
-(id)_menuForChatItem:(id)arg1 ;
-(void)showFullScreenAcknowledgmentPickerForBalloonAtIndexPath:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(void)setIsShowingPreview:(BOOL)arg1 ;
-(void)restoreEntryViewAfterPreview;
-(id)transcriptCollectionViewController:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2 ;
-(BOOL)_shouldShowAcknowledgmentPickerForBalloon;
-(BOOL)_shouldShowVotingViewForChatItem:(id)arg1 ;
-(void)showStickersAssociatedWithChatItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)acknowledgmentToSend;
-(void)setAcknowledgmentToSend:(long long)arg1 ;
-(void)_stickerDetailViewControllerCloseButtonPressed:(id)arg1 ;
-(void)_deleteStickerWithTransferGUID:(id)arg1 ;
-(void)_presentAppStoreForAdamID:(id)arg1 ;
-(id)_contextMenuActionsForChatItem:(id)arg1 ;
-(BOOL)_smsEnabled;
-(void)presentStickerDetailControllerWithStickers:(id)arg1 ;
-(void)_presentBrowserOrAppStoreForAdamID:(id)arg1 url:(id)arg2 identifier:(id)arg3 ;
-(void)actionMoreIsTappedForChatItem:(id)arg1 ;
-(id)transcriptCollectionViewController:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 interaction:(id)arg4 ;
-(void)transcriptCollectionViewController:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)transcriptCollectionViewController:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2 ;
-(id)transcriptCollectionViewController:(id)arg1 accessoriesForContextMenuWithConfiguration:(id)arg2 layoutAnchor:(SCD_Struct_CK5)arg3 ;
-(id)transcriptCollectionViewController:(id)arg1 styleForContextMenuWithConfiguration:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)stickerDetailViewController:(id)arg1 deletedStickerWithTransferGUID:(id)arg2 ;
-(void)stickerDetailViewController:(id)arg1 selectedStickerPackWithAdamID:(id)arg2 ;
-(void)messageAcknowledgmentPickerViewController:(id)arg1 didPickAcknowledgment:(long long)arg2 ;
-(BOOL)_hasPreviewViewControllerForChatItem:(id)arg1 ;
-(void)nicknameBannerViewActionButtonTapped:(id)arg1 ;
-(void)nicknameBannerViewDismissButtonTapped:(id)arg1 ;
-(void)prepareForSuspend;
-(void)setShouldShowDoneButton:(BOOL)arg1 ;
-(void)_handleChatItemDidChange:(id)arg1 ;
-(double)messageEntryViewMaxHeight:(id)arg1 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2 ;
-(void)setComposition:(CKComposition *)arg1 ;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(void)messageEntryView:(id)arg1 shouldShowAppStrip:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1 ;
-(CGSize)messageEntryViewMaxShelfPluginViewSize:(id)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidEndEditing:(id)arg1 ;
-(BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(void)messageEntryViewRecordingDidChange:(id)arg1 ;
-(BOOL)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1 ;
-(BOOL)pluginButtonsEnabled;
-(void)messageEntryViewSwipeDownGestureRecognized:(id)arg1 ;
-(void)sendCurrentLocationMessage:(id)arg1 ;
-(void)setSendingMessage:(BOOL)arg1 ;
-(void)_updateEntryViewFrameIfNeeded:(BOOL)arg1 ;
-(CKMessageEntryView *)entryView;
-(CKComposition *)initialComposition;
-(void)setInitialComposition:(CKComposition *)arg1 ;
-(void)sendComposition:(id)arg1 ;
-(void)insertInitialCompositionIfNeeded;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5 ;
-(void)transcriptCollectionViewController:(id)arg1 willDisplayBalloonForGUID:(id)arg2 ;
-(BOOL)transcriptCollectionViewShouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewDidBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)unexpectedlyLoggedOutNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2 ;
-(void)setStickerTranscriptScrollDisplayLink:(CADisplayLink *)arg1 ;
-(IMScheduledUpdater *)autorotationUpdater;
-(void)setAutorotationUpdater:(IMScheduledUpdater *)arg1 ;
-(CKScheduledUpdater *)typingUpdater;
-(void)setTypingUpdater:(CKScheduledUpdater *)arg1 ;
-(void)hideMediaPickerAnimated:(BOOL)arg1 ;
-(CKNavbarCanvasViewController *)navbarCanvasViewController;
-(CKFunCameraViewController *)funCameraViewController;
-(void)_autorotationUpdaterFired;
-(void)setTargetFirstResponder:(long long)arg1 ;
-(void)updateTyping;
-(void)_updateTranscriptInlineNotification;
-(void)_handleIsUnexpectedlyLoggedOutChanged:(id)arg1 ;
-(void)composeRecipientViewShouldResignFirstResponder;
-(void)keyboardShouldShowPredictions:(id)arg1 ;
-(void)keyboardShouldShowCandidates:(id)arg1 ;
-(void)keyboardWillBeginInteractiveDismissal:(id)arg1 ;
-(void)updateScreenTimeShieldIfNeededForChat:(id)arg1 ;
-(BOOL)isChatAllowedByScreenTime:(id)arg1 ;
-(void)removeLockoutControllerIfNeeded;
-(void)showScreenTimeShieldIfNeeded;
-(void)chatAllowedByScreenTimeChanged:(id)arg1 ;
-(void)setEntryView:(CKMessageEntryView *)arg1 ;
-(BOOL)isHandwritingLandscape;
-(void)setLockoutView:(UIView *)arg1 ;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(UIView *)lockoutView;
-(CKScheduledUpdater *)transcriptInlineNotificationUpdater;
-(BOOL)shouldUseNavigationBarCanvasView;
-(void)_initializeNavigationBarCanvasViewIfNecessary;
-(BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
-(CKUnexpectedlyLoggedOutNotificationView *)unexpectedlyLoggedOutNotificationView;
-(void)setUnexpectedlyLoggedOutNotificationView:(CKUnexpectedlyLoggedOutNotificationView *)arg1 ;
-(void)_invalidateChatItemLayoutIfNecessary:(CGSize)arg1 ;
-(NSNumber *)transcriptBottomContentOffsetAtSuspend;
-(BOOL)needToScrollToBottom;
-(double)lastLaidOutWidth;
-(void)setNeedToScrollToBottom:(BOOL)arg1 ;
-(BOOL)firstLayoutAfterResume;
-(void)setTranscriptBottomContentOffsetAtSuspend:(NSNumber *)arg1 ;
-(void)setFirstLayoutAfterResume:(BOOL)arg1 ;
-(void)setLastLaidOutWidth:(double)arg1 ;
-(long long)targetFirstResponder;
-(id)scrollBlock;
-(void)setScrollBlock:(id)arg1 ;
-(void)_updateProgressBarFrame;
-(CKNicknameBannerView *)nicknameBanner;
-(void)layoutLockoutView;
-(BOOL)_showNicknameBannerIfNeeded;
-(CKUnreadBannerView *)unreadBannerView;
-(void)setUnreadBannerView:(CKUnreadBannerView *)arg1 ;
-(void)_updateTranscriptOffsetForBannerView;
-(void)setUnreadBannerHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)configureForCurrentTraitCollection;
-(void)updateRaiseGesture;
-(UIWindow *)effectPickerWindow;
-(void)_sizeEffectPickerWindow;
-(id)deferredPresentationBlock;
-(void)setDeferredPresentationBlock:(id)arg1 ;
-(void)checkSuggestionsForBanner;
-(void)_kickPhotoKit;
-(void)setLastKnownDeviceOrientation:(long long)arg1 ;
-(void)_markMessagesAsReadOnPushIfNeeded;
-(void)setSuppressEntryViewKeyboardNotifications:(BOOL)arg1 ;
-(void)_saveDraftState;
-(void)setIsShowingDetailsController:(BOOL)arg1 ;
-(void)setIsShowingCamera:(BOOL)arg1 ;
-(double)balloonMaxWidth;
-(void)parentControllerDidBecomeActive;
-(void)_performResume;
-(void)reloadEntryViewIfNeeded;
-(void)dismissVideoMessageRecordingViewController;
-(BOOL)isFunCamPresented;
-(void)setEntryPreviewController:(CKQLDetailsPreviewController *)arg1 ;
-(void)setTransitioningSize:(BOOL)arg1 ;
-(long long)lastKnownDeviceOrientation;
-(void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg1 ;
-(void)updateStyleForCurrentEffect;
-(BOOL)_canShowBackButtonView;
-(BOOL)shouldShowDoneButton;
-(void)performResumeDeferredSetup;
-(void)evaluateSendMetricsForComposition:(id)arg1 ;
-(id)nextMediaObjectToTrimInComposition:(id)arg1 ;
-(void)startTrimmingMediaObjectsInComposition:(id)arg1 ;
-(BOOL)_isRunningPPT;
-(void)_updateNavigationButtons;
-(void)_willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)updateAppStripVisibility:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldUseThrowAnimationForComposition:(id)arg1 ;
-(void)sendCompositionWithThrow:(id)arg1 inConversation:(id)arg2 ;
-(void)sendCompositionWithoutThrow:(id)arg1 inConversation:(id)arg2 ;
-(void)setThrowAnimationManager:(CKThrowAnimationManager *)arg1 ;
-(void)_didSendCompositionInConversation:(id)arg1 ;
-(void)setupStateForLaunchPluginWithBundleID:(id)arg1 pluginPayload:(id)arg2 ;
-(void)setPrimeTranscriptWithInitialScrollGeometries:(BOOL)arg1 ;
-(void)setInitialContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)_mediaObjectNeedsTrimming:(id)arg1 ;
-(void)setCompositionBeingTrimmed:(CKComposition *)arg1 ;
-(void)presentTrimControllerForMediaObject:(id)arg1 ;
-(CKComposition *)compositionBeingTrimmed;
-(void)_setConversationDeferredSetup;
-(void)cleanUpDarkEffectStyle;
-(BOOL)primeTranscriptWithInitialScrollGeometries;
-(UIEdgeInsets)initialContentInset;
-(CKRaiseGesture *)raiseGesture;
-(void)raiseGestureRecognized:(id)arg1 ;
-(void)setRaiseGesture:(CKRaiseGesture *)arg1 ;
-(void)setLastSeenGUID:(NSString *)arg1 ;
-(void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2 ;
-(void)_presentSentWithSiriUI;
-(void)_updateActionsToolbarItems;
-(void)showViewerForMediaObject:(id)arg1 ;
-(void)_showReaderForAggregateChatItem:(id)arg1 ;
-(void)_presentDetailsViewController;
-(void)showSMSReportSpamExtensionControllerForMessages:(id)arg1 ;
-(void)_dismissSentWithSiriUI;
-(void)_presentBrowserForPlugin:(id)arg1 ;
-(void)presentAppStoreForURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(void)_updateForNewPreferredService;
-(CKEffectPickerViewController *)effectPickerViewController;
-(void)setExtensionPayloadBeingSent:(IMPluginPayload *)arg1 ;
-(IMPluginPayload *)extensionPayloadBeingSent;
-(BOOL)isSafeToMarkAsRead;
-(void)_markAsReadIfNecessary;
-(BOOL)_shouldShowReadRecieptAlert;
-(void)_askToTurnOnSMSRelayIfNeeded;
-(void)_askToTurnOnReadReceiptsIfNeeded;
-(void)_confirmReadReceiptSettings;
-(void)keyboardWillShowOrHide:(id)arg1 ;
-(BOOL)suppressEntryViewKeyboardNotifications;
-(void)keyboardDidShowOrHide:(id)arg1 ;
-(void)updateEntryViewHeightIncludingAppStrip:(BOOL)arg1 ;
-(BOOL)inputAccessoryViewControllerEnabled;
-(double)topInsetPadding;
-(SGFoundInSuggestionPresenter *)suggestionBannerPresenter;
-(double)suggestionBannerHeight;
-(id)_progressBarHostView;
-(void)setNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(void)_backbuttonPressed;
-(void)_detailsButtonPressed;
-(void)_editCancelButtonPressed;
-(void)clearCurrentMessageThread;
-(BOOL)isTransitioningSize;
-(void)_resizeNavigationBarIfNecessary;
-(void)_callButtonPressedWithVideoEnabled:(BOOL)arg1 ;
-(id)_navigationControllerToPop;
-(void)registerNotifications;
-(void)_raiseToListenSettingChanged:(id)arg1 ;
-(void)_textInputModeDidChange:(id)arg1 ;
-(void)inputLanguageDidChange:(id)arg1 ;
-(void)nicknameStoreDidChange:(id)arg1 ;
-(void)_dataDetectorsWillPresentNotification:(id)arg1 ;
-(void)_dataDetectorsDidDismissNotification:(id)arg1 ;
-(void)registerNotificationsForConversation:(id)arg1 ;
-(void)_conversationParticipantsChanged:(id)arg1 ;
-(void)_conversationJoinStateDidChange:(id)arg1 ;
-(void)_displayNameUpdatedNotification:(id)arg1 ;
-(void)updateQLPreviewControllerIfVisible;
-(BOOL)appModalIsDisplayed;
-(BOOL)effectPickerIsPresented;
-(void)setEffectPickerIsPresented:(BOOL)arg1 ;
-(void)setEffectPickerViewController:(CKEffectPickerViewController *)arg1 ;
-(void)setEffectPickerWindow:(UIWindow *)arg1 ;
-(void)setEntryViewController:(CKMessageEntryViewController *)arg1 ;
-(CKMessageEntryViewController *)entryViewController;
-(BOOL)isShowingPreview;
-(BOOL)_shouldDisplayTextEntry;
-(BOOL)shouldShowEntryView;
-(BOOL)appManagerDisplayedInMessages;
-(void)loadChatInputController;
-(UIEdgeInsets)_marginInsetsForEntryView;
-(double)_entryViewTopInsetPadding;
-(double)_maxEntryViewHeight;
-(void)setupScrollingForKeyboardInteraction;
-(void)_setEntryViewFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShowingCamera;
-(CADisplayLink *)stickerTranscriptScrollDisplayLink;
-(id)selectedBalloonForTarget:(id)arg1 ;
-(id)stickerInfoDictionaryWithLayoutIntent:(unsigned long long)arg1 parentPreviewWidth:(double)arg2 xScalar:(double)arg3 yScalar:(double)arg4 scale:(double)arg5 rotation:(double)arg6 ;
-(void)sendStickerWithMediaObject:(id)arg1 parentMessagePartChatItem:(id)arg2 ;
-(void)setScrollDownIsValid:(BOOL)arg1 ;
-(BOOL)scrollDownIsValid;
-(void)setStickerTranscriptScrollDelta:(double)arg1 ;
-(void)_stickerTranscriptScrollDisplayLinkFired;
-(void)addMedia:(id)arg1 ;
-(void)prewarmFunCamera;
-(void)setFunCameraViewController:(CKFunCameraViewController *)arg1 ;
-(void)_validateAndSendComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)createAlertControllerForAccountComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_passKitUIDismissed:(id)arg1 ;
-(BOOL)_shouldValidatePayloadBeforeSendingPayload:(id)arg1 ;
-(void)setDeferredSendAnimationBlock:(id)arg1 ;
-(BOOL)isAnimatingMessageSend;
-(void)selectAccountAndSendComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentActionMenuForAccountSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deferredSendAnimationBlock;
-(BOOL)allowEffectPickerToBePresented;
-(void)_initializeEffectPicker;
-(void)__raiseGestureRecognized:(id)arg1 ;
-(id)_actionsToolbar;
-(void)_deleteSelectedMessages:(id)arg1 ;
-(void)_forwardSelectedMessages:(id)arg1 ;
-(void)_reportSelectedMessages:(id)arg1 ;
-(void)setUpStyleForDarkEffect;
-(id)_menuTitleForChatItem:(id)arg1 ;
-(id)_interfaceActionsForChatItem:(id)arg1 ;
-(void)setIsShowingAcknowledgmentPicker:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(void)beginHoldingAutorotationForKey:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2 ;
-(double)_currentScrollDelta;
-(NSObject*<OS_dispatch_group>)revealAnimationGroup;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg1 ;
-(void)endHoldingAutorotationForKey:(id)arg1 ;
-(void)setRevealAnimationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)addSuggestionBanner:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSuggestionsBanner:(id)arg1 animated:(BOOL)arg2 ;
-(NSLayoutConstraint *)suggestionBannerTopConstraint;
-(id)_nicknameBannerUpdatesAndStyle:(unsigned long long*)arg1 ;
-(BOOL)_alwaysShowNicknameBanners;
-(BOOL)_hasExistingBannerMatchingStyle:(unsigned long long)arg1 withNicknames:(id)arg2 ;
-(void)_replaceNicknameBannerView:(id)arg1 withNewBannerView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNicknameBanner:(CKNicknameBannerView *)arg1 ;
-(void)_presentNicknameBannerView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissNicknameBannerView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearHandlesFromScrutinyForNicknameUpdates:(id)arg1 ;
-(void)showAddContactForNickname:(id)arg1 sourceView:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateContactQuietlyForNickname:(id)arg1 updatePhoto:(BOOL)arg2 updateName:(BOOL)arg3 ;
-(void)showUpdatePromptForNickname:(id)arg1 sourceView:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setNicknameUpdateController:(CKNicknameUpdatesViewController *)arg1 ;
-(void)nicknameBannerDidInteractWithOnboardingOffer:(id)arg1 ;
-(BOOL)showNicknameSharingOnboarding;
-(CKOnboardingController *)onboardingController;
-(void)setOnboardingController:(CKOnboardingController *)arg1 ;
-(BOOL)_shouldShowNicknameOnboardingFlow;
-(id)_dragItemsForInteraction:(id)arg1 ;
-(id)_dragItemsFromChatItem:(id)arg1 balloonView:(id)arg2 ;
-(id)_itemProvidersFromDragItems:(id)arg1 ;
-(BOOL)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
-(id)presentedControllerDoneButtonItem;
-(void)chatInputSentComposition:(id)arg1 ;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readerViewControllerWillDismiss:(id)arg1 ;
-(void)trimControllerDidCancel:(id)arg1 ;
-(void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3 ;
-(id)viewControllerForChatInputModalPresentation;
-(id)viewForDragAndChatInputDropTarget;
-(void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg1 ;
-(void)sendSticker:(id)arg1 ;
-(void)sendSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(id)dragControllerTranscriptDelegate;
-(BOOL)keyboardIsVisibleForChatInputController:(id)arg1 ;
-(void)chatInputWillUpdateInputViewShowingBrowser;
-(void)chatInputDidUpdateInputViewShowingBrowser:(BOOL)arg1 entryFieldCollapsed:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)chatInputController:(id)arg1 presentShelfModal:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)chatInputDidUpdateWithNewInputViewController:(id)arg1 ;
-(void)setLocalUserIsComposing:(BOOL)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3 ;
-(void)chatInputDidSelectPhotoPicker;
-(void)chatInputWillChangeHeightForCompactPresentation:(double)arg1 ;
-(void)chatInputDidChangeSize;
-(void)chatInputControllerDidShowHandwriting:(id)arg1 ;
-(void)chatInputControllerWillHideHandwriting:(id)arg1 ;
-(void)chatInputControllerWillPresentModalBrowserViewController:(id)arg1 ;
-(void)chatInputControllerDidPresentModalBrowserViewController:(id)arg1 ;
-(void)chatInputControllerWillDismissModalBrowserViewController:(id)arg1 ;
-(void)chatInputControllerDidDismissModalBrowserViewController:(id)arg1 ;
-(void)chatInputControllerWillTransitionExpanded:(id)arg1 ;
-(void)chatInputControllerDidTransitionExpanded:(id)arg1 ;
-(void)chatInputControllerWillTransitionCollapsed:(id)arg1 ;
-(void)chatInputControllerDidTransitionCollapsed:(id)arg1 ;
-(void)chatInputControllerDidDismissCompactBrowserViewController:(id)arg1 ;
-(void)chatInputControllerWillDismissCompactBrowserViewController:(id)arg1 ;
-(void)sendCurrentLocation;
-(void)chatInputControllerWillSelectFunCamera:(id)arg1 ;
-(void)chatInputControllerDidSelectFunCamera:(id)arg1 ;
-(BOOL)chatInputControllerShouldShowHandwriting:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3 ;
-(void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2 ;
-(void)dragManagerDidBeginDragging:(id)arg1 ;
-(void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2 ;
-(void)dragManagerDidEndDragging:(id)arg1 ;
-(int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2 ;
-(void)detailsControllerWillDismiss:(id)arg1 ;
-(void)detailsControllerDidDismiss:(id)arg1 ;
-(id)consumingBundleIdentifiers;
-(void)startDeferredEditingPayload:(id)arg1 forConversation:(id)arg2 ;
-(void)startCommitPayload:(id)arg1 forConversation:(id)arg2 ;
-(void)willDismissFunCamera:(id)arg1 ;
-(void)presentPhotosApp;
-(void)controller:(id)arg1 didCompleteClassificationRequest:(id)arg2 withResponse:(id)arg3 ;
-(id)presentingViewControllerForOnboardingController:(id)arg1 ;
-(void)onboardingControllerDidFinish:(id)arg1 ;
-(id)nicknameUpdatesForController:(id)arg1 ;
-(void)nicknameController:(id)arg1 updateButtonTappedForBanner:(id)arg2 ;
-(void)nicknameController:(id)arg1 ignoreButtonTappedForBanner:(id)arg2 ;
-(void)dismissNicknameUpdateController:(id)arg1 ;
-(void)navbarCanvasViewController:(id)arg1 didTapView:(id)arg2 ;
-(void)navbarCanvasViewController:(id)arg1 buttonWasPressedOfType:(long long)arg2 wasLongPress:(BOOL)arg3 ;
-(void)navbarCanvasViewControllerWantsNavbarResize:(id)arg1 ;
-(NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForViewController:(id)arg1 ;
-(void)prepareToDismissForSecondInstance;
-(void)forciblyUnloadChatInputController;
-(void)unreadBannerViewTapped:(id)arg1 ;
-(void)setupStateForLaunchURL:(id)arg1 ;
-(void)makeEntryViewActiveAfterSend;
-(void)showKeyboardForReply;
-(void)primeTranscriptWithInitialOffset:(CGPoint)arg1 inset:(UIEdgeInsets)arg2 ;
-(double)gradientBottomPlaceholderHeight;
-(id)outgoingComposeViewForSendAnimation;
-(double)minimumBottomInset;
-(BOOL)_multiwayAvailable;
-(void)dismissDetailsController:(id)arg1 ;
-(void)_transferFinishedNotification:(id)arg1 ;
-(void)_transferRestoredNotification:(id)arg1 ;
-(void)_presentEffectPicker;
-(void)invalidateEntryViewForNewCompose;
-(void)setEntryViewOverrideForNewCompose:(id)arg1 ;
-(void)cleanupPostComposeTransitionWithKBFrame:(CGRect)arg1 ;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(void)setIsAnimatingMessageSend:(BOOL)arg1 ;
-(void)setSuggestionBannerPresenter:(SGFoundInSuggestionPresenter *)arg1 ;
-(void)setSuggestionBannerHeight:(double)arg1 ;
-(void)setSuggestionBannerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)lastSeenGUID;
-(BOOL)entryViewWasActiveBeforePresentingDataDetector;
-(void)setEntryViewWasActiveBeforePresentingDataDetector:(BOOL)arg1 ;
-(BOOL)shouldDisableEntryView;
-(void)setShouldDisableEntryView:(BOOL)arg1 ;
-(UIToolbar *)actionsToolbar;
-(void)setActionsToolbar:(UIToolbar *)arg1 ;
-(CKAudioTrimViewController *)audioTrimController;
-(void)setAudioTrimController:(CKAudioTrimViewController *)arg1 ;
-(CKVideoTrimController *)videoTrimController;
-(void)setVideoTrimController:(CKVideoTrimController *)arg1 ;
-(CKThrowAnimationManager *)throwAnimationManager;
-(CKVideoMessageRecordingViewController *)videoMessageRecordingViewController;
-(void)setVideoMessageRecordingViewController:(CKVideoMessageRecordingViewController *)arg1 ;
-(BOOL)isShowingVideoMessageRecordingView;
-(void)setShowingVideoMessageRecordingView:(BOOL)arg1 ;
-(CKQLDetailsPreviewController *)entryPreviewController;
-(UIView *)previewSourceView;
-(void)setPreviewSourceView:(UIView *)arg1 ;
-(BOOL)entryViewWasActiveOnPreview;
-(void)setEntryViewWasActiveOnPreview:(BOOL)arg1 ;
-(CKInvisibleInkEffectController *)previewInvisibleInkEffectController;
-(void)setPreviewInvisibleInkEffectController:(CKInvisibleInkEffectController *)arg1 ;
-(UIView *)previewRevealView;
-(void)setPreviewRevealView:(UIView *)arg1 ;
-(BOOL)isShowingAcknowledgmentPicker;
-(void)setTranscriptInlineNotificationUpdater:(CKScheduledUpdater *)arg1 ;
-(double)stickerTranscriptScrollDelta;
-(BOOL)isShowingDetailsController;
-(CKNicknameUpdatesViewController *)nicknameUpdateController;
-(IMNickname *)currentNickname;
-(void)setCurrentNickname:(IMNickname *)arg1 ;
-(void)effectPickerViewControllerClose:(id)arg1 ;
-(void)effectPickerViewController:(id)arg1 effectWithIdentifierSelected:(id)arg2 ;
-(BOOL)_shouldHideNavigationBarForSendAnimationContext:(id)arg1 ;
-(id)_fullscreenEffectsManager;
-(void)_finishSendAnimation;
-(CGRect)_convertedNavigationBarFrameInSendAnimationContainerView:(id)arg1 ;
-(id)chatForSendAnimationManager:(id)arg1 ;
-(id)collectionViewControllerForImpactEffectManager:(id)arg1 ;
-(void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2 ;
-(void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2 ;
-(void)throwAnimationManager:(id)arg1 canNowSendMessages:(id)arg2 ;
-(id)throwAnimationManagerEntryView:(id)arg1 ;
-(double)throwAnimationManagerAccessoryViewHeight:(id)arg1 ;
-(CGRect)throwAnimationKeyboardFrame:(id)arg1 ;
-(CGRect)throwAnimationWindowFrame:(id)arg1 ;
-(double)throwAnimationManagerTopHeaderHeight:(id)arg1 ;
-(void)throwAnimationManagerPrepareForThrowAnimation:(id)arg1 context:(id)arg2 ;
-(BOOL)wantsOverKeyboardAnimationForSendAnimationContext:(id)arg1 ;
-(id)throwBalloonsForSendAnimationContext:(id)arg1 ;
-(id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(long long*)arg2 containsRestoring:(BOOL*)arg3 ;
-(BOOL)_displayMediaObjectFullscreen:(id)arg1 ;
-(void)_showMapViewerForMediaObject:(id)arg1 ;
-(void)_showVCardViewerForMediaObject:(id)arg1 ;
-(void)_showPassbookCardViewForMediaObject:(id)arg1 ;
-(BOOL)_displayPreviewItemForMediaObject:(id)arg1 ;
-(void)restoreContentOffsetChanges;
-(id)_previewingViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(BOOL)_canReloadEntryView;
-(void)showAlternateViewerForMediaObject:(id)arg1 ;
-(void)_showVCalViewerForMediaObject:(id)arg1 ;
-(void)previewController:(id)arg1 willTransitionToState:(long long)arg2 ;
-(void)previewController:(id)arg1 didTransitionToState:(long long)arg2 ;
-(void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3 ;
-(void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1 ;
-(void)hideMediaPickerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)prewarmCamera:(id)arg1 ;
-(void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)showMediaPicker:(id)arg1 animated:(BOOL)arg2 ;
-(void)createContactWithNickname:(id)arg1 ;
-(void)selectContact;
-(id)contactForNickname:(id)arg1 ;
-(void)updateContact:(id)arg1 withNickname:(id)arg2 updatePhoto:(BOOL)arg3 updateName:(BOOL)arg4 addHandleToContact:(BOOL)arg5 presentationMode:(unsigned long long)arg6 ;
-(void)updateContact:(id)arg1 withHandle:(id)arg2 ;
-(BOOL)saveContact:(id)arg1 ;
-(void)dismissPickerWithCompletion:(/*^block*/id)arg1 ;
@end

