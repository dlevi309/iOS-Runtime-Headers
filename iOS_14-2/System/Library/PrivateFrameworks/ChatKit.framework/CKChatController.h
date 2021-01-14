/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCoreChatController.h>
#import <libobjc.A.dylib/CKStickerDetailViewControllerDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/CKEffectPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/CKThrowAnimationManagerDelegate.h>
#import <libobjc.A.dylib/CKSendAnimationManagerDelegate.h>
#import <libobjc.A.dylib/CKSendAnimationBalloonProvider.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <libobjc.A.dylib/QLPreviewControllerConformingDelegate.h>
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
#import <libobjc.A.dylib/CKNavigationBarTitleControllerDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryViewDelegate.h>
#import <libobjc.A.dylib/CKReaderViewControllerDelegate.h>
#import <libobjc.A.dylib/CKTrimControllerDelegate.h>
#import <libobjc.A.dylib/AFContextProvider.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKChatInputControllerDelegate.h>
#import <libobjc.A.dylib/CKFullScreenBalloonViewControllerDelegate.h>
#import <libobjc.A.dylib/CKBrowserDragControllerTranscriptDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
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
#import <libobjc.A.dylib/CKInlineReplyInteractionDelegate.h>
#import <libobjc.A.dylib/CKBannerUpdatesViewDelegate.h>
#import <libobjc.A.dylib/CKMacRecipientsControllerDelegate.h>
#import <libobjc.A.dylib/CKDetailsContactsManagerDelegate.h>
#import <libobjc.A.dylib/CKNavbarCanvasViewControllerDelegate.h>
#import <libobjc.A.dylib/STLockoutViewControllerDelegate.h>
#import <libobjc.A.dylib/CKMacToolbarItemProvider.h>

@protocol CKEffectPickerViewControllerProtocol, OS_dispatch_group, UIDragSession, UIDropSession;
@class CKComposition, CKDetailsContactsManager, UIContextMenuInteraction, NSNumber, CKMessageEntryViewController, CKChatInputController, IMScheduledUpdater, CKScheduledUpdater, CKNavbarCanvasViewController, SGFoundInSuggestionPresenter, NSLayoutConstraint, CKUnreadBannerView, NSString, CKMacToolbarController, CKMacToolbarItem, UIView, CKRaiseGesture, UIToolbar, CKAudioTrimViewController, CKVideoTrimController, IMPluginPayload, CKThrowAnimationManager, UIImagePickerController, CKVideoMessageRecordingViewController, CKQLPreviewControllerDataSource, CKQLPreviewController, CKQLDetailsPreviewController, CKInvisibleInkEffectController, UITapGestureRecognizer, UIKeyboardInputMode, UIViewController, UIWindow, CKUnexpectedlyLoggedOutNotificationView, CADisplayLink, NSObject, CKFunCameraViewController, CKNicknameBannerView, CKNicknameUpdatesViewController, CNContactPickerViewController, CKNicknameUpdate, CKOnboardingController, STConversationContext, CKNavigationBarTitleController, CKInlineReplyChatController, CKGroupUpdateBannerView, CKMacRecipientsController, CKBusinessMacToolbarViewController, CKEffectPickerViewController, CKMessageEntryView;

@interface CKChatController : CKCoreChatController <CKStickerDetailViewControllerDelegate, UIContextMenuInteractionDelegate, CKEffectPickerViewControllerDelegate, CKThrowAnimationManagerDelegate, CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider, UIInteractionProgressObserver, QLPreviewControllerConformingDelegate, QLPreviewControllerDelegate, CKReaderViewControllerDelegate, PKAddPassesViewControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, CKVideoMessageRecordingViewControllerDelegate, CKActionMenuGestureRecognizerButtonDelegate, PHPhotoLibraryChangeObserver, CNContactPickerDelegate, CKNavigationBarTitleControllerDelegate, CKMessageEntryViewDelegate, CKReaderViewControllerDelegate, CKTrimControllerDelegate, AFContextProvider, UIGestureRecognizerDelegate, CKChatInputControllerDelegate, CKFullScreenBalloonViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SGSuggestionPresenterDelegate, CKDetailsControllerDelegate, _UIClickInteractionDelegate, CKUnexpectedlyLoggedOutNotificationViewDelegate, UIPopoverPresentationControllerDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, UITextDropDelegate, UITextPasteDelegate, CKExtensionConsumer, CKFunCameraViewControllerDelegate, ILClassificationUIExtensionHostViewControllerDelegate, CKNicknameBannerViewDelegate, CKOnboardingControllerDelegate, CKNicknameUpdatesViewControllerDelegate, CKInlineReplyInteractionDelegate, CKBannerUpdatesViewDelegate, CKMacRecipientsControllerDelegate, CKDetailsContactsManagerDelegate, CKNavbarCanvasViewControllerDelegate, STLockoutViewControllerDelegate, CKMacToolbarItemProvider> {

	CGPoint _startingScrollOffset;
	BOOL _shouldBecomeFirstResponderWhenDismissingModalBrowser;
	BOOL _shouldDisplayKeyboardWhenDismissingModalBrowser;
	CKComposition* _dropComposition;
	BOOL _isAnimatingMessageSend;
	BOOL _shouldShowDoneButton;
	BOOL _wasKeyboardShowingWithApp;
	BOOL _showingInStandAloneWindow;
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
	BOOL _entryViewWasActiveOnContextMenuPresentation;
	BOOL _isShowingAcknowledgmentPicker;
	BOOL _isShowingEmojiKeyboard;
	BOOL _effectPickerIsPresented;
	BOOL _scrollDownIsValid;
	BOOL _isShowingDetailsController;
	BOOL _isShowingCamera;
	BOOL _wantsStickerDetails;
	BOOL _wantsInlineOverlay;
	BOOL _transcriptWasScrolledToBottomBeforeInlinePresentation;
	CKDetailsContactsManager* _detailsContactsManager;
	UIContextMenuInteraction* _transcriptContextMenuInteraction;
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
	CKMacToolbarController* _macToolbarController;
	CKMacToolbarItem* _detailsToolbarItem;
	UIView* _recipientsVirtualToolbarItem;
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
	CKQLPreviewControllerDataSource* _qlPreviewDataSource;
	CKQLPreviewController* _previewController;
	CKQLDetailsPreviewController* _entryPreviewController;
	UIView* _previewSourceView;
	CKInvisibleInkEffectController* _previewInvisibleInkEffectController;
	UIView* _previewRevealView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIKeyboardInputMode* _savedKeyboardInputMode;
	UIViewController*<CKEffectPickerViewControllerProtocol> _effectPickerViewController;
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
	CKNicknameUpdate* _currentNicknameUpdate;
	CKOnboardingController* _onboardingController;
	UIView* _lockoutView;
	STConversationContext* _conversationContext;
	long long _acknowledgmentToSend;
	CKNavigationBarTitleController* _navigationBarTitleController;
	CKInlineReplyChatController* _inlineReplyController;
	CKGroupUpdateBannerView* _groupPhotoUpdateBanner;
	CKMacRecipientsController* _macRecipientsController;
	CKBusinessMacToolbarViewController* _businessMacToolbarController;
	NSString* _lastPopulatedMessageGuidFromMe;
	CKComposition* _originalComposition;
	NSString* _shareSheetHostBundleIdentifier;
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
@property (assign,getter=isTransitioningSize,nonatomic) BOOL transitioningSize;                                               //@synthesize transitioningSize=_transitioningSize - In the implementation block
@property (assign,nonatomic) double lastLaidOutWidth;                                                                         //@synthesize lastLaidOutWidth=_lastLaidOutWidth - In the implementation block
@property (assign,nonatomic) BOOL needToScrollToBottom;                                                                       //@synthesize needToScrollToBottom=_needToScrollToBottom - In the implementation block
@property (assign,nonatomic) long long lastKnownDeviceOrientation;                                                            //@synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation - In the implementation block
@property (nonatomic,retain) NSNumber * transcriptBottomContentOffsetAtSuspend;                                               //@synthesize transcriptBottomContentOffsetAtSuspend=_transcriptBottomContentOffsetAtSuspend - In the implementation block
@property (assign,nonatomic) BOOL firstLayoutAfterResume;                                                                     //@synthesize firstLayoutAfterResume=_firstLayoutAfterResume - In the implementation block
@property (assign,nonatomic) long long targetFirstResponder;                                                                  //@synthesize targetFirstResponder=_targetFirstResponder - In the implementation block
@property (nonatomic,retain) CKMessageEntryViewController * entryViewController;                                              //@synthesize entryViewController=_entryViewController - In the implementation block
@property (nonatomic,retain) CKChatInputController * inputController;                                                         //@synthesize inputController=_inputController - In the implementation block
@property (assign,nonatomic) BOOL suppressEntryViewKeyboardNotifications;                                                     //@synthesize suppressEntryViewKeyboardNotifications=_suppressEntryViewKeyboardNotifications - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * autorotationUpdater;                                                        //@synthesize autorotationUpdater=_autorotationUpdater - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * typingUpdater;                                                              //@synthesize typingUpdater=_typingUpdater - In the implementation block
@property (nonatomic,retain) CKNavbarCanvasViewController * navbarCanvasViewController;                                       //@synthesize navbarCanvasViewController=_navbarCanvasViewController - In the implementation block
@property (nonatomic,retain) SGFoundInSuggestionPresenter * suggestionBannerPresenter;                                        //@synthesize suggestionBannerPresenter=_suggestionBannerPresenter - In the implementation block
@property (assign,nonatomic) double suggestionBannerHeight;                                                                   //@synthesize suggestionBannerHeight=_suggestionBannerHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * suggestionBannerTopConstraint;                                              //@synthesize suggestionBannerTopConstraint=_suggestionBannerTopConstraint - In the implementation block
@property (nonatomic,retain) CKUnreadBannerView * unreadBannerView;                                                           //@synthesize unreadBannerView=_unreadBannerView - In the implementation block
@property (nonatomic,retain) NSString * lastSeenGUID;                                                                         //@synthesize lastSeenGUID=_lastSeenGUID - In the implementation block
@property (nonatomic,copy) id scrollBlock;                                                                                    //@synthesize scrollBlock=_scrollBlock - In the implementation block
@property (assign,nonatomic) BOOL entryViewWasActiveBeforePresentingDataDetector;                                             //@synthesize entryViewWasActiveBeforePresentingDataDetector=_entryViewWasActiveBeforePresentingDataDetector - In the implementation block
@property (assign,nonatomic,__weak) CKMacToolbarController * macToolbarController;                                            //@synthesize macToolbarController=_macToolbarController - In the implementation block
@property (nonatomic,retain) CKMacToolbarItem * detailsToolbarItem;                                                           //@synthesize detailsToolbarItem=_detailsToolbarItem - In the implementation block
@property (nonatomic,retain) UIView * recipientsVirtualToolbarItem;                                                           //@synthesize recipientsVirtualToolbarItem=_recipientsVirtualToolbarItem - In the implementation block
@property (assign,nonatomic) BOOL primeTranscriptWithInitialScrollGeometries;                                                 //@synthesize primeTranscriptWithInitialScrollGeometries=_primeTranscriptWithInitialScrollGeometries - In the implementation block
@property (assign,nonatomic) CGPoint initialContentOffset;                                                                    //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets initialContentInset;                                                                //@synthesize initialContentInset=_initialContentInset - In the implementation block
@property (nonatomic,retain) CKComposition * initialComposition;                                                              //@synthesize initialComposition=_initialComposition - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableEntryView;                                                                     //@synthesize shouldDisableEntryView=_shouldDisableEntryView - In the implementation block
@property (nonatomic,retain) CKRaiseGesture * raiseGesture;                                                                   //@synthesize raiseGesture=_raiseGesture - In the implementation block
@property (nonatomic,retain) UIToolbar * actionsToolbar;                                                                      //@synthesize actionsToolbar=_actionsToolbar - In the implementation block
@property (nonatomic,retain) CKComposition * compositionBeingTrimmed;                                                         //@synthesize compositionBeingTrimmed=_compositionBeingTrimmed - In the implementation block
@property (nonatomic,retain) CKAudioTrimViewController * audioTrimController;                                                 //@synthesize audioTrimController=_audioTrimController - In the implementation block
@property (nonatomic,retain) CKVideoTrimController * videoTrimController;                                                     //@synthesize videoTrimController=_videoTrimController - In the implementation block
@property (nonatomic,retain) IMPluginPayload * extensionPayloadBeingSent;                                                     //@synthesize extensionPayloadBeingSent=_extensionPayloadBeingSent - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingMessageSend;                                                                     //@synthesize isAnimatingMessageSend=_isAnimatingMessageSend - In the implementation block
@property (nonatomic,retain) CKThrowAnimationManager * throwAnimationManager;                                                 //@synthesize throwAnimationManager=_throwAnimationManager - In the implementation block
@property (nonatomic,copy) id deferredSendAnimationBlock;                                                                     //@synthesize deferredSendAnimationBlock=_deferredSendAnimationBlock - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePickerController;                                                 //@synthesize imagePickerController=_imagePickerController - In the implementation block
@property (nonatomic,retain) CKVideoMessageRecordingViewController * videoMessageRecordingViewController;                     //@synthesize videoMessageRecordingViewController=_videoMessageRecordingViewController - In the implementation block
@property (assign,getter=isShowingVideoMessageRecordingView,nonatomic) BOOL showingVideoMessageRecordingView;                 //@synthesize showingVideoMessageRecordingView=_showingVideoMessageRecordingView - In the implementation block
@property (nonatomic,retain) CKQLPreviewControllerDataSource * qlPreviewDataSource;                                           //@synthesize qlPreviewDataSource=_qlPreviewDataSource - In the implementation block
@property (nonatomic,retain) CKQLPreviewController * previewController;                                                       //@synthesize previewController=_previewController - In the implementation block
@property (nonatomic,retain) CKQLDetailsPreviewController * entryPreviewController;                                           //@synthesize entryPreviewController=_entryPreviewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * previewSourceView;                                                               //@synthesize previewSourceView=_previewSourceView - In the implementation block
@property (assign,nonatomic) BOOL isShowingPreview;                                                                           //@synthesize isShowingPreview=_isShowingPreview - In the implementation block
@property (assign,nonatomic) BOOL entryViewWasActiveOnPreview;                                                                //@synthesize entryViewWasActiveOnPreview=_entryViewWasActiveOnPreview - In the implementation block
@property (assign,nonatomic) BOOL entryViewWasActiveOnContextMenuPresentation;                                                //@synthesize entryViewWasActiveOnContextMenuPresentation=_entryViewWasActiveOnContextMenuPresentation - In the implementation block
@property (nonatomic,retain) CKInvisibleInkEffectController * previewInvisibleInkEffectController;                            //@synthesize previewInvisibleInkEffectController=_previewInvisibleInkEffectController - In the implementation block
@property (nonatomic,retain) UIView * previewRevealView;                                                                      //@synthesize previewRevealView=_previewRevealView - In the implementation block
@property (assign,nonatomic) BOOL isShowingAcknowledgmentPicker;                                                              //@synthesize isShowingAcknowledgmentPicker=_isShowingAcknowledgmentPicker - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                                   //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isShowingEmojiKeyboard;                                                                     //@synthesize isShowingEmojiKeyboard=_isShowingEmojiKeyboard - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * savedKeyboardInputMode;                                                    //@synthesize savedKeyboardInputMode=_savedKeyboardInputMode - In the implementation block
@property (nonatomic,retain) UIViewController*<CKEffectPickerViewControllerProtocol> effectPickerViewController;              //@synthesize effectPickerViewController=_effectPickerViewController - In the implementation block
@property (nonatomic,retain) UIWindow * effectPickerWindow;                                                                   //@synthesize effectPickerWindow=_effectPickerWindow - In the implementation block
@property (assign,nonatomic) BOOL effectPickerIsPresented;                                                                    //@synthesize effectPickerIsPresented=_effectPickerIsPresented - In the implementation block
@property (nonatomic,retain) CKUnexpectedlyLoggedOutNotificationView * unexpectedlyLoggedOutNotificationView;                 //@synthesize unexpectedlyLoggedOutNotificationView=_unexpectedlyLoggedOutNotificationView - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * transcriptInlineNotificationUpdater;                                        //@synthesize transcriptInlineNotificationUpdater=_transcriptInlineNotificationUpdater - In the implementation block
@property (nonatomic,retain) CADisplayLink * stickerTranscriptScrollDisplayLink;                                              //@synthesize stickerTranscriptScrollDisplayLink=_stickerTranscriptScrollDisplayLink - In the implementation block
@property (assign,nonatomic) double stickerTranscriptScrollDelta;                                                             //@synthesize stickerTranscriptScrollDelta=_stickerTranscriptScrollDelta - In the implementation block
@property (assign,nonatomic) BOOL scrollDownIsValid;                                                                          //@synthesize scrollDownIsValid=_scrollDownIsValid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> revealAnimationGroup;                                               //@synthesize revealAnimationGroup=_revealAnimationGroup - In the implementation block
@property (nonatomic,retain) id<UIDragSession> dragSession;                                                                   //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;                                                                   //@synthesize dropSession=_dropSession - In the implementation block
@property (assign,nonatomic) BOOL isShowingDetailsController;                                                                 //@synthesize isShowingDetailsController=_isShowingDetailsController - In the implementation block
@property (nonatomic,retain) CKFunCameraViewController * funCameraViewController;                                             //@synthesize funCameraViewController=_funCameraViewController - In the implementation block
@property (assign,nonatomic) BOOL isShowingCamera;                                                                            //@synthesize isShowingCamera=_isShowingCamera - In the implementation block
@property (nonatomic,copy) id deferredPresentationBlock;                                                                      //@synthesize deferredPresentationBlock=_deferredPresentationBlock - In the implementation block
@property (nonatomic,retain) CKNicknameBannerView * nicknameBanner;                                                           //@synthesize nicknameBanner=_nicknameBanner - In the implementation block
@property (nonatomic,retain) CKNicknameUpdatesViewController * nicknameUpdateController;                                      //@synthesize nicknameUpdateController=_nicknameUpdateController - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * contactPicker;                                                   //@synthesize contactPicker=_contactPicker - In the implementation block
@property (nonatomic,retain) CKNicknameUpdate * currentNicknameUpdate;                                                        //@synthesize currentNicknameUpdate=_currentNicknameUpdate - In the implementation block
@property (nonatomic,retain) CKOnboardingController * onboardingController;                                                   //@synthesize onboardingController=_onboardingController - In the implementation block
@property (nonatomic,retain) UIView * lockoutView;                                                                            //@synthesize lockoutView=_lockoutView - In the implementation block
@property (nonatomic,retain) STConversationContext * conversationContext;                                                     //@synthesize conversationContext=_conversationContext - In the implementation block
@property (assign,nonatomic) long long acknowledgmentToSend;                                                                  //@synthesize acknowledgmentToSend=_acknowledgmentToSend - In the implementation block
@property (assign,nonatomic) BOOL wantsStickerDetails;                                                                        //@synthesize wantsStickerDetails=_wantsStickerDetails - In the implementation block
@property (assign,nonatomic) BOOL wantsInlineOverlay;                                                                         //@synthesize wantsInlineOverlay=_wantsInlineOverlay - In the implementation block
@property (nonatomic,retain) CKNavigationBarTitleController * navigationBarTitleController;                                   //@synthesize navigationBarTitleController=_navigationBarTitleController - In the implementation block
@property (nonatomic,retain) CKInlineReplyChatController * inlineReplyController;                                             //@synthesize inlineReplyController=_inlineReplyController - In the implementation block
@property (assign,nonatomic) BOOL transcriptWasScrolledToBottomBeforeInlinePresentation;                                      //@synthesize transcriptWasScrolledToBottomBeforeInlinePresentation=_transcriptWasScrolledToBottomBeforeInlinePresentation - In the implementation block
@property (nonatomic,retain) CKGroupUpdateBannerView * groupPhotoUpdateBanner;                                                //@synthesize groupPhotoUpdateBanner=_groupPhotoUpdateBanner - In the implementation block
@property (nonatomic,retain) CKMacRecipientsController * macRecipientsController;                                             //@synthesize macRecipientsController=_macRecipientsController - In the implementation block
@property (nonatomic,retain) CKBusinessMacToolbarViewController * businessMacToolbarController;                               //@synthesize businessMacToolbarController=_businessMacToolbarController - In the implementation block
@property (nonatomic,retain) NSString * lastPopulatedMessageGuidFromMe;                                                       //@synthesize lastPopulatedMessageGuidFromMe=_lastPopulatedMessageGuidFromMe - In the implementation block
@property (nonatomic,retain) CKComposition * originalComposition;                                                             //@synthesize originalComposition=_originalComposition - In the implementation block
@property (nonatomic,copy) NSString * shareSheetHostBundleIdentifier;                                                         //@synthesize shareSheetHostBundleIdentifier=_shareSheetHostBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CKChatControllerDelegate> delegate; 
@property (nonatomic,readonly) CKMessageEntryView * entryView; 
@property (nonatomic,retain) CKComposition * composition; 
@property (nonatomic,readonly) BOOL isFunCamPresented; 
@property (assign,nonatomic) BOOL shouldShowDoneButton;                                                                       //@synthesize shouldShowDoneButton=_shouldShowDoneButton - In the implementation block
@property (assign,nonatomic) BOOL wasKeyboardShowingWithApp;                                                                  //@synthesize wasKeyboardShowingWithApp=_wasKeyboardShowingWithApp - In the implementation block
@property (nonatomic,retain) CKDetailsContactsManager * detailsContactsManager;                                               //@synthesize detailsContactsManager=_detailsContactsManager - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * transcriptContextMenuInteraction;                                     //@synthesize transcriptContextMenuInteraction=_transcriptContextMenuInteraction - In the implementation block
@property (assign,nonatomic) BOOL showingInStandAloneWindow;                                                                  //@synthesize showingInStandAloneWindow=_showingInStandAloneWindow - In the implementation block
+(id)detailsToolbarItemImageForConversation:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)copy:(id)arg1 ;
-(id)inputAccessoryView;
-(BOOL)isCollapsed;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)becomeFirstResponder;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id<UIDropSession>)dropSession;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(void)dismissKeyboard;
-(void)dismissViewController:(id)arg1 ;
-(BOOL)shouldShowDoneButton;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)setQlPreviewDataSource:(CKQLPreviewControllerDataSource *)arg1 ;
-(void)delete:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CKQLPreviewControllerDataSource *)qlPreviewDataSource;
-(id)preferredFocusEnvironments;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(CKComposition *)initialComposition;
-(void)_updateEntryViewFrameIfNeeded:(BOOL)arg1 ;
-(void)setInitialComposition:(CKComposition *)arg1 ;
-(void)sendComposition:(id)arg1 ;
-(id)keyCommands;
-(void)insertInitialCompositionIfNeeded;
-(void)presentViewController:(id)arg1 ;
-(id)_currentPresentationController;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 selectedItemAtIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 shouldSelectChatItem:(id)arg3 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1 ;
-(double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5 ;
-(void)transcriptCollectionViewController:(id)arg1 willDisplayBalloonForGUID:(id)arg2 ;
-(void)effectPickerViewControllerClose:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapReplyCountStatusButtonForChatItem:(id)arg2 ;
-(BOOL)transcriptCollectionViewShouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)effectPickerViewController:(id)arg1 effectWithIdentifierSelected:(id)arg2 ;
-(void)transcriptCollectionViewDidBeginMultipleSelectionInteractionAtIndexPath:(id)arg1 ;
-(void)unexpectedlyLoggedOutNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_popoverPresentationController:(id)arg1 shouldDetachScene:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
-(UIView *)lockoutView;
-(void)_handleGroupPhotoChanged:(id)arg1 ;
-(void)_handleGroupNameChanged:(id)arg1 ;
-(BOOL)_popoverPresentationControllerShouldConvertToScene:(id)arg1 ;
-(CKMessageEntryView *)entryView;
-(id)createNewContactActionWithNicknameUpdate:(id)arg1 ;
-(id)addToExistingContactActionWithNicknameUpdate:(id)arg1 ;
-(id)contactForNickname:(id)arg1 ;
-(void)createContactWithNicknameUpdate:(id)arg1 ;
-(id)nameAndPhotoForContact:(id)arg1 andNicknameUpdate:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)nameOnlyForContact:(id)arg1 andNicknameUpdate:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)viewControllerToPresentFrom;
-(id)scrollBlock;
-(id)photoOnlyForContact:(id)arg1 andNicknameUpdate:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)updateContact:(id)arg1 withHandle:(id)arg2 ;
-(BOOL)saveContact:(id)arg1 shouldUpdate:(BOOL)arg2 ;
-(void)dismissPickerWithCompletion:(/*^block*/id)arg1 ;
-(void)showUpdatePromptForNicknameUpdate:(id)arg1 sourceView:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)spacePressed:(id)arg1 ;
-(void)updateTyping;
-(CKScheduledUpdater *)typingUpdater;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)smartQuotes:(id)arg1 ;
-(void)keyCommandReply:(id)arg1 withModifier:(BOOL)arg2 ;
-(void)setTypingUpdater:(CKScheduledUpdater *)arg1 ;
-(id)_recipientHandle;
-(void)correctSpellingAutomatically:(id)arg1 ;
-(void)checkSpellingWhileTyping:(id)arg1 ;
-(void)capitalizeSentencesAutomatically:(id)arg1 ;
-(void)smartDashes:(id)arg1 ;
-(void)smartInsertDelete:(id)arg1 ;
-(void)emojiReplacement:(id)arg1 ;
-(void)keyCommandCompose:(id)arg1 ;
-(void)keyCommandPrint:(id)arg1 ;
-(void)keyCommandDeleteConversation:(id)arg1 ;
-(void)keyCommandClearTranscript:(id)arg1 ;
-(void)purgeAttachmentsForChat:(id)arg1 ;
-(CKEffectPickerViewController *)effectPickerViewController;
-(IMScheduledUpdater *)autorotationUpdater;
-(void)setStickerTranscriptScrollDisplayLink:(CADisplayLink *)arg1 ;
-(void)setAutorotationUpdater:(IMScheduledUpdater *)arg1 ;
-(void)hideMediaPickerAnimated:(BOOL)arg1 ;
-(void)keyCommandDelete:(id)arg1 ;
-(CKNavbarCanvasViewController *)navbarCanvasViewController;
-(CKFunCameraViewController *)funCameraViewController;
-(void)_autorotationUpdaterFired;
-(void)setTargetFirstResponder:(long long)arg1 ;
-(void)_updateTranscriptInlineNotification;
-(void)_handleIsUnexpectedlyLoggedOutChanged:(id)arg1 ;
-(void)composeRecipientViewShouldResignFirstResponder;
-(void)keyboardShouldShowPredictions:(id)arg1 ;
-(void)windowDidResignKey:(id)arg1 ;
-(void)keyboardShouldShowCandidates:(id)arg1 ;
-(void)keyboardWillBeginInteractiveDismissal:(id)arg1 ;
-(void)_transferFileTooLarge:(id)arg1 ;
-(void)setEffectPickerIsPresented:(BOOL)arg1 ;
-(void)setDetailsContactsManager:(CKDetailsContactsManager *)arg1 ;
-(CKGroupUpdateBannerView *)groupPhotoUpdateBanner;
-(void)showBannerForGroupUpdate:(id)arg1 ;
-(void)dimsmissCurrentBannerAndShowNewBannerForGroupUpdate:(id)arg1 ;
-(BOOL)shouldUseMacRecipientsView;
-(CKMacRecipientsController *)macRecipientsController;
-(void)setGroupPhotoUpdateBanner:(CKGroupUpdateBannerView *)arg1 ;
-(void)_dismissUpdateBannerView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)showGroupBannerUpdateIfNeeded;
-(void)escButtonPressed:(id)arg1 ;
-(void)scrollTranscriptPageUp;
-(void)scrollTranscriptPageDown;
-(void)scrollTranscriptEnd;
-(void)keyCommandReply:(id)arg1 ;
-(void)keyCommandReplyAlternate:(id)arg1 ;
-(void)keyCommandTapback:(id)arg1 ;
-(BOOL)isShowingAcknowledgmentPicker;
-(void)setEntryView:(CKMessageEntryView *)arg1 ;
-(void)keyCommandSelectTapback:(id)arg1 ;
-(BOOL)isChatAllowedByScreenTime:(id)arg1 ;
-(void)updateScreenTimeShieldIfNeededForChat:(id)arg1 ;
-(void)removeLockoutControllerIfNeeded;
-(void)showScreenTimeShieldIfNeeded;
-(void)chatAllowedByScreenTimeChanged:(id)arg1 ;
-(BOOL)isHandwritingLandscape;
-(void)setLockoutView:(UIView *)arg1 ;
-(void)refreshMacToolbar;
-(BOOL)shouldPresentBlockingDowntimeViewController;
-(void)setConversationContext:(STConversationContext *)arg1 ;
-(STConversationContext *)conversationContext;
-(void)_updateNavigationUI;
-(CKScheduledUpdater *)transcriptInlineNotificationUpdater;
-(CKInlineReplyChatController *)inlineReplyController;
-(BOOL)wantsChromelessAppearance;
-(BOOL)shouldUseNavigationBarCanvasView;
-(void)_initializeNavigationBarCanvasViewIfNecessary;
-(BOOL)_isRunningPPT;
-(BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
-(CKUnexpectedlyLoggedOutNotificationView *)unexpectedlyLoggedOutNotificationView;
-(void)setUnexpectedlyLoggedOutNotificationView:(CKUnexpectedlyLoggedOutNotificationView *)arg1 ;
-(BOOL)showingInStandAloneWindow;
-(void)_invalidateChatItemLayoutIfNecessary:(CGSize)arg1 ;
-(CKMacToolbarController *)macToolbarController;
-(BOOL)needToScrollToBottom;
-(void)setConversation:(id)arg1 ;
-(NSNumber *)transcriptBottomContentOffsetAtSuspend;
-(double)lastLaidOutWidth;
-(void)setNeedToScrollToBottom:(BOOL)arg1 ;
-(BOOL)firstLayoutAfterResume;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)setTranscriptBottomContentOffsetAtSuspend:(NSNumber *)arg1 ;
-(void)setFirstLayoutAfterResume:(BOOL)arg1 ;
-(id)splitViewController;
-(void)setLastLaidOutWidth:(double)arg1 ;
-(long long)targetFirstResponder;
-(void)setScrollBlock:(id)arg1 ;
-(void)_updateProgressBarFrame;
-(CKNicknameBannerView *)nicknameBanner;
-(void)layoutLockoutView;
-(void)_presentDetailsViewController;
-(void)_setupNavbar;
-(void)_editCancelButtonPressed;
-(void)clearCurrentMessageThread;
-(void)_restoreDraftState;
-(BOOL)_showNicknameBannerIfNeeded;
-(CKUnreadBannerView *)unreadBannerView;
-(void)setUnreadBannerView:(CKUnreadBannerView *)arg1 ;
-(void)_updateTranscriptOffsetForBannerView;
-(void)setUnreadBannerHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CKComposition *)composition;
-(void)configureForCurrentTraitCollection;
-(void)updateRaiseGesture;
-(UIWindow *)effectPickerWindow;
-(void)_sizeEffectPickerWindow;
-(id)deferredPresentationBlock;
-(void)setDeferredPresentationBlock:(id)arg1 ;
-(void)checkSuggestionsForBanner;
-(void)_kickPhotoKit;
-(void)setLastKnownDeviceOrientation:(long long)arg1 ;
-(void)_saveDraftState;
-(void)_markMessagesAsReadOnPushIfNeeded;
-(void)_markVisibleMentionsAsRead;
-(double)balloonMaxWidth;
-(void)_retryGroupPhotoUploadIfNecessary;
-(void)setSuppressEntryViewKeyboardNotifications:(BOOL)arg1 ;
-(void)setIsShowingDetailsController:(BOOL)arg1 ;
-(void)setIsShowingCamera:(BOOL)arg1 ;
-(void)parentControllerDidBecomeActive;
-(void)_performResume;
-(void)reloadEntryViewIfNeeded;
-(void)_reloadMentionsData;
-(BOOL)isFunCamPresented;
-(void)dismissVideoMessageRecordingViewController;
-(BOOL)allowContextProvider:(id)arg1 ;
-(void)setPreviewController:(CKQLPreviewController *)arg1 ;
-(void)setEntryPreviewController:(CKQLDetailsPreviewController *)arg1 ;
-(void)setTransitioningSize:(BOOL)arg1 ;
-(long long)lastKnownDeviceOrientation;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(UIImagePickerController *)imagePickerController;
-(void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg1 ;
-(void)_dismissFullScreenBubbleViewControllerAnimated:(BOOL)arg1 withSendAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateStyleForCurrentEffect;
-(BOOL)_canShowBackButtonView;
-(void)performResumeDeferredSetup;
-(id)nextMediaObjectToTrimInComposition:(id)arg1 ;
-(void)startTrimmingMediaObjectsInComposition:(id)arg1 ;
-(void)_updateNavigationButtons;
-(void)_willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)updateAppStripVisibility:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CKRaiseGesture *)raiseGesture;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4 ;
-(void)evaluateSendMetricsForComposition:(id)arg1 ;
-(BOOL)shouldUseThrowAnimationForComposition:(id)arg1 ;
-(void)sendCompositionWithThrow:(id)arg1 inConversation:(id)arg2 ;
-(void)sendCompositionWithoutThrow:(id)arg1 inConversation:(id)arg2 ;
-(void)setThrowAnimationManager:(CKThrowAnimationManager *)arg1 ;
-(void)sendMessage:(id)arg1 forConversation:(id)arg2 newComposition:(BOOL)arg3 ;
-(void)_didSendCompositionInConversation:(id)arg1 ;
-(BOOL)_mediaObjectNeedsTrimming:(id)arg1 ;
-(void)setupStateForLaunchPluginWithBundleID:(id)arg1 pluginPayload:(id)arg2 ;
-(void)setInitialContentInset:(UIEdgeInsets)arg1 ;
-(void)setPrimeTranscriptWithInitialScrollGeometries:(BOOL)arg1 ;
-(CKComposition *)compositionBeingTrimmed;
-(void)setCompositionBeingTrimmed:(CKComposition *)arg1 ;
-(void)presentTrimControllerForMediaObject:(id)arg1 ;
-(void)setRaiseGesture:(CKRaiseGesture *)arg1 ;
-(void)_setConversationDeferredSetup;
-(void)cleanUpDarkEffectStyle;
-(UIEdgeInsets)initialContentInset;
-(BOOL)primeTranscriptWithInitialScrollGeometries;
-(void)raiseGestureRecognized:(id)arg1 ;
-(void)_popoverPresentationController:(id)arg1 didDetachScene:(id)arg2 ;
-(void)setInitialContentOffset:(CGPoint)arg1 ;
-(void)setLastSeenGUID:(NSString *)arg1 ;
-(void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2 ;
-(void)_presentSentWithSiriUI;
-(void)_updateActionsToolbarItems;
-(void)showViewerForMediaObject:(id)arg1 ;
-(void)_handleTranscriptPluginChatItem:(id)arg1 ;
-(void)_showReaderForAggregateChatItem:(id)arg1 balloonView:(id)arg2 ;
-(id)_visibleChatItemsToScreenFrameMap;
-(void)showSMSReportSpamExtensionControllerForMessages:(id)arg1 ;
-(void)setEntryViewWasActiveOnPreview:(BOOL)arg1 ;
-(BOOL)entryViewWasActiveOnPreview;
-(void)scrollTranscriptPageUpDirection:(BOOL)arg1 toBounds:(BOOL)arg2 ;
-(void)_dismissSentWithSiriUI;
-(void)_presentBrowserForPlugin:(id)arg1 ;
-(void)presentAppStoreForURL:(id)arg1 fromSourceApplication:(id)arg2 ;
-(void)_updateForNewPreferredService;
-(void)setExtensionPayloadBeingSent:(IMPluginPayload *)arg1 ;
-(IMPluginPayload *)extensionPayloadBeingSent;
-(BOOL)isSafeToMarkAsRead;
-(void)_markAsReadIfNecessary;
-(BOOL)_shouldShowReadRecieptAlert;
-(void)_askToTurnOnSMSRelayIfNeeded;
-(void)_askToTurnOnReadReceiptsIfNeeded;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_confirmReadReceiptSettings;
-(void)keyboardWillShowOrHide:(id)arg1 ;
-(BOOL)suppressEntryViewKeyboardNotifications;
-(double)topInsetPadding;
-(id)textPasteConfigurationSupporting:(id)arg1 performPasteOfAttributedString:(id)arg2 toRange:(id)arg3 ;
-(BOOL)isTransitioningSize;
-(void)keyboardDidShowOrHide:(id)arg1 ;
-(BOOL)isShowingEmojiKeyboard;
-(UIKeyboardInputMode *)savedKeyboardInputMode;
-(void)updateEntryViewHeightIncludingAppStrip:(BOOL)arg1 ;
-(id)_progressBarHostView;
-(SGFoundInSuggestionPresenter *)suggestionBannerPresenter;
-(double)suggestionBannerHeight;
-(void)_backbuttonPressed;
-(void)setNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(void)_detailsButtonPressed;
-(void)_resizeNavigationBarIfNecessary;
-(void)_callButtonPressedWithVideoEnabled:(BOOL)arg1 ;
-(void)_presentDetailsViewControllerAnimated:(BOOL)arg1 ;
-(id)_navigationControllerToPop;
-(id)virtualView;
-(id)selectedChatItems;
-(void)_raiseToListenSettingChanged:(id)arg1 ;
-(void)_textInputModeDidChange:(id)arg1 ;
-(void)inputLanguageDidChange:(id)arg1 ;
-(void)nicknameStoreDidChange:(id)arg1 ;
-(void)_switchedToEmojiKeyboard:(id)arg1 ;
-(CGPoint)initialContentOffset;
-(void)_switchedAwayFromEmojiKeyboard:(id)arg1 ;
-(void)_dataDetectorsWillPresentNotification:(id)arg1 ;
-(void)_conversationParticipantsChanged:(id)arg1 ;
-(void)_dataDetectorsDidDismissNotification:(id)arg1 ;
-(void)registerNotificationsForConversation:(id)arg1 ;
-(void)_conversationJoinStateDidChange:(id)arg1 ;
-(void)_displayNameUpdatedNotification:(id)arg1 ;
-(BOOL)shouldShowAvatarViewInNavBarCanvas;
-(void)updateQLPreviewControllerIfVisible;
-(BOOL)appModalIsDisplayed;
-(void)addOrRemoveMacCatalystEntryViewIfNeeded;
-(void)setSavedKeyboardInputMode:(UIKeyboardInputMode *)arg1 ;
-(void)setIsShowingEmojiKeyboard:(BOOL)arg1 ;
-(BOOL)effectPickerIsPresented;
-(void)setEffectPickerWindow:(UIWindow *)arg1 ;
-(void)setEffectPickerViewController:(CKEffectPickerViewController *)arg1 ;
-(void)setEntryViewController:(CKMessageEntryViewController *)arg1 ;
-(CKMessageEntryViewController *)entryViewController;
-(BOOL)shouldShowEntryView;
-(BOOL)_shouldDisplayTextEntry;
-(BOOL)appManagerDisplayedInMessages;
-(void)loadChatInputController;
-(UIEdgeInsets)_marginInsetsForEntryView;
-(BOOL)shouldRemoveMacCatalystEntryView;
-(BOOL)shouldInsertMacCatalystEntryView;
-(double)_entryViewTopInsetPadding;
-(double)_maxEntryViewHeight;
-(void)setupScrollingForKeyboardInteraction;
-(void)_setEntryViewFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShowingCamera;
-(CADisplayLink *)stickerTranscriptScrollDisplayLink;
-(id)selectedBalloonForTarget:(id)arg1 ;
-(id)rotatingFooterView;
-(id)stickerInfoDictionaryWithLayoutIntent:(unsigned long long)arg1 parentPreviewWidth:(double)arg2 xScalar:(double)arg3 yScalar:(double)arg4 scale:(double)arg5 rotation:(double)arg6 ;
-(void)addMedia:(id)arg1 ;
-(void)sendStickerWithMediaObject:(id)arg1 parentMessagePartChatItem:(id)arg2 ;
-(void)setScrollDownIsValid:(BOOL)arg1 ;
-(BOOL)scrollDownIsValid;
-(void)setStickerTranscriptScrollDelta:(double)arg1 ;
-(void)_stickerTranscriptScrollDisplayLinkFired;
-(void)setImagePickerController:(UIImagePickerController *)arg1 ;
-(id)getCurrentContext;
-(void)prewarmFunCamera;
-(void)setFunCameraViewController:(CKFunCameraViewController *)arg1 ;
-(void)_validateAndSendComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)createAlertControllerForAccountComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_passKitUIDismissed:(id)arg1 ;
-(void)setDeferredSendAnimationBlock:(id)arg1 ;
-(BOOL)_shouldValidatePayloadBeforeSendingPayload:(id)arg1 ;
-(BOOL)isAnimatingMessageSend;
-(BOOL)entryViewWasActiveOnContextMenuPresentation;
-(id)viewControllerForChatInputModalPresentation;
-(void)selectAccountAndSendComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentActionMenuForAccountSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)lastPopulatedMessageGuidFromMe;
-(void)setOriginalComposition:(CKComposition *)arg1 ;
-(id)_api_dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)setLastPopulatedMessageGuidFromMe:(NSString *)arg1 ;
-(CKComposition *)originalComposition;
-(id)deferredSendAnimationBlock;
-(CGRect)fullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)arg1 ;
-(BOOL)isTesting;
-(id)initWithConversation:(id)arg1 ;
-(BOOL)allowEffectPickerToBePresented;
-(void)_initializeEffectPicker;
-(void)__raiseGestureRecognized:(id)arg1 ;
-(id)_actionsToolbar;
-(void)_deleteSelectedMessages:(id)arg1 ;
-(void)_forwardSelectedMessages:(id)arg1 ;
-(void)_reportSelectedMessages:(id)arg1 ;
-(id)chatInputTranscriptIdentifier;
-(NSString *)shareSheetHostBundleIdentifier;
-(id)_defaultTranscriptNavBarAppearance;
-(void)setUpStyleForDarkEffect;
-(id)_menuTitleForChatItem:(id)arg1 ;
-(void)sendMessage:(id)arg1 forConversation:(id)arg2 onService:(id)arg3 newComposition:(BOOL)arg4 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)_interfaceActionsForChatItem:(id)arg1 ;
-(void)setIsShowingAcknowledgmentPicker:(BOOL)arg1 ;
-(double)_currentScrollDelta;
-(void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(void)beginHoldingAutorotationForKey:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_group>)revealAnimationGroup;
-(void)setRevealAnimationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_setShouldLoadInputAccessoryViewOnAppearance:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg1 ;
-(void)endHoldingAutorotationForKey:(id)arg1 ;
-(void)addSuggestionBanner:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSuggestionsBanner:(id)arg1 animated:(BOOL)arg2 ;
-(NSLayoutConstraint *)suggestionBannerTopConstraint;
-(BOOL)shoudlNotShowBanners;
-(BOOL)presentUpdateBanner;
-(id)createGroupUpdateWithType:(unsigned long long)arg1 ;
-(void)_presentUpdateBannerView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(id)_nicknameBannerUpdatesAndStyle:(unsigned long long*)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(BOOL)accountCanCreateNickname;
-(BOOL)_alwaysShowNicknameBanners;
-(BOOL)_haveUpdateAlready:(id)arg1 forContact:(id)arg2 ;
-(BOOL)_hasExistingBannerMatchingStyle:(unsigned long long)arg1 withNicknames:(id)arg2 ;
-(void)setNicknameBanner:(CKNicknameBannerView *)arg1 ;
-(void)_replaceNicknameBannerView:(id)arg1 withNewBannerView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentNicknameBannerView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearHandlesFromScrutinyForNicknameUpdates:(id)arg1 ;
-(id)addContactOptionsMenuWithNicknameUpdate:(id)arg1 ;
-(void)updateContactQuietlyForNicknameUpdate:(id)arg1 updatePhoto:(BOOL)arg2 updateName:(BOOL)arg3 ;
-(id)updateOptionsMenuForContact:(id)arg1 withNicknameUpdate:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)presentNicknameUpdatesViewControllerFromView:(id)arg1 ;
-(void)nicknameBannerDidInteractWithOnboardingOffer:(id)arg1 ;
-(void)selectContact;
-(BOOL)showNicknameSharingOnboardingWithMemoji:(BOOL)arg1 ;
-(CKOnboardingController *)onboardingController;
-(void)setNicknameUpdateController:(CKNicknameUpdatesViewController *)arg1 ;
-(void)setCurrentNicknameUpdate:(CKNicknameUpdate *)arg1 ;
-(void)macShowUnknownContactPopoverForNicknameUpdate:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3 ;
-(void)updateContact:(id)arg1 withNicknameUpdate:(id)arg2 updatePhoto:(BOOL)arg3 updateName:(BOOL)arg4 addHandleToContact:(BOOL)arg5 presentationMode:(unsigned long long)arg6 ;
-(void)setOnboardingController:(CKOnboardingController *)arg1 ;
-(id)_dragItemsForInteraction:(id)arg1 ;
-(BOOL)_shouldShowNicknameOnboardingFlow;
-(id)_dragItemsFromChatItem:(id)arg1 balloonView:(id)arg2 ;
-(id)_itemProvidersFromDragItems:(id)arg1 ;
-(void)appendCompositionFromItemProviders:(id)arg1 ;
-(id)_threadIdentifierForMessagePart:(id)arg1 ;
-(BOOL)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
-(id)_threadOriginatorForMessagePart:(id)arg1 ;
-(UIToolbar *)actionsToolbar;
-(id)_inlineReplyTransitionContextForThreadOriginatorMessagePart:(id)arg1 threadIdentifier:(id)arg2 presentKeyboard:(BOOL)arg3 ;
-(UIEdgeInsets)bannerInsets;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)setInlineReplyController:(CKInlineReplyChatController *)arg1 ;
-(BOOL)transcriptWasScrolledToBottomBeforeInlinePresentation;
-(void)setTranscriptWasScrolledToBottomBeforeInlinePresentation:(BOOL)arg1 ;
-(void)dismissInlineReplyController:(BOOL)arg1 ;
-(void)chatInputSentComposition:(id)arg1 ;
-(id)presentedControllerDoneButtonItem;
-(NSString *)lastSeenGUID;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UIView *)recipientsVirtualToolbarItem;
-(CKBusinessMacToolbarViewController *)businessMacToolbarController;
-(void)avatarViewPressed:(id)arg1 ;
-(void)cancelBarButtonItemPressed:(id)arg1 ;
-(void)sendCurrentLocation;
-(void)deleteAllBarButtonItemPressed:(id)arg1 ;
-(void)readerViewControllerWillDismiss:(id)arg1 ;
-(void)trimControllerDidCancel:(id)arg1 ;
-(UIView *)previewSourceView;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3 ;
-(id)viewForDragAndChatInputDropTarget;
-(void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg1 ;
-(void)sendSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(void)chatInputDidChangeSize;
-(id)dragControllerTranscriptDelegate;
-(BOOL)keyboardIsVisibleForChatInputController:(id)arg1 ;
-(BOOL)chatInputControllerCanSend:(id)arg1 ;
-(void)chatInputWillUpdateInputViewShowingBrowser;
-(void)chatInputController:(id)arg1 presentShelfModal:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)chatInputDidUpdateInputViewShowingBrowser:(BOOL)arg1 entryFieldCollapsed:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)chatInputDidSelectPhotoPicker;
-(void)chatInputDidUpdateWithNewInputViewController:(id)arg1 ;
-(void)chatInputWillChangeHeightForCompactPresentation:(double)arg1 ;
-(void)setLocalUserIsComposing:(BOOL)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3 ;
-(void)chatInputDidSelectEffectPicker;
-(void)chatInputControllerDidShowHandwriting:(id)arg1 ;
-(void)chatInputControllerWillHideHandwriting:(id)arg1 ;
-(void)showContactForHandle:(id)arg1 ;
-(void)chatInputControllerWillPresentModalBrowserViewController:(id)arg1 ;
-(void)chatInputControllerWillTransitionExpanded:(id)arg1 ;
-(void)chatInputControllerDidPresentModalBrowserViewController:(id)arg1 ;
-(void)chatInputControllerWillTransitionCollapsed:(id)arg1 ;
-(void)chatInputControllerWillDismissModalBrowserViewController:(id)arg1 ;
-(void)chatInputControllerDidTransitionExpanded:(id)arg1 ;
-(void)chatInputControllerDidDismissModalBrowserViewController:(id)arg1 ;
-(void)chatInputControllerDidTransitionCollapsed:(id)arg1 ;
-(void)chatInputControllerDidDismissCompactBrowserViewController:(id)arg1 ;
-(void)chatInputControllerCancelSelectFunCamera:(id)arg1 ;
-(void)chatInputControllerWillDismissCompactBrowserViewController:(id)arg1 ;
-(void)chatInputControllerWillSelectFunCamera:(id)arg1 ;
-(void)chatInputControllerDidSelectFunCamera:(id)arg1 ;
-(BOOL)chatInputControllerShouldShowHandwriting:(id)arg1 ;
-(id)dragManagerTargetView:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3 ;
-(void)dragManagerDidBeginDragging:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(double)minimumBottomInset;
-(void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2 ;
-(int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2 ;
-(void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg1 replyButtonPressedForChatItem:(id)arg2 ;
-(void)dragManagerDidEndDragging:(id)arg1 ;
-(void)presentPhotosApp;
-(BOOL)shouldAutorotate;
-(void)suggestionPresenterWantsToShowBanner:(id)arg1 ;
-(void)suggestionPresenterWantsToHideBanner:(id)arg1 ;
-(void)detailsControllerWillDismiss:(id)arg1 ;
-(id)viewControllerForPresentingFromBannerByPresenter:(id)arg1 ;
-(BOOL)reparentToolbarItem:(id)arg1 ;
-(void)detailsControllerDidDismiss:(id)arg1 ;
-(id)detailsControllerBusinessPrivacyInfoPresentingViewController:(id)arg1 ;
-(id)consumingBundleIdentifiers;
-(void)didReceiveMemoryWarning;
-(void)startDeferredEditingPayload:(id)arg1 forConversation:(id)arg2 ;
-(void)startCommitPayload:(id)arg1 forConversation:(id)arg2 ;
-(void)willDismissFunCamera:(id)arg1 ;
-(void)controller:(id)arg1 didCompleteClassificationRequest:(id)arg2 withResponse:(id)arg3 ;
-(id)presentingViewControllerForOnboardingController:(id)arg1 ;
-(void)onboardingControllerDidFinish:(id)arg1 ;
-(id)nicknameUpdatesForController:(id)arg1 ;
-(void)dismissNicknameUpdateController:(id)arg1 ;
-(id)textDroppableView:(id)arg1 proposalForDrop:(id)arg2 ;
-(void)nicknameUpdatesViewController:(id)arg1 selectedAction:(unsigned long long)arg2 forNicknameUpdate:(id)arg3 sourceView:(id)arg4 ;
-(id)toolbarItemForIdentifier:(id)arg1 ;
-(void)inlineReplyControllerRequestsDismissal:(id)arg1 presentKeyboard:(BOOL)arg2 ;
-(void)inlineReplyController:(id)arg1 visibleGUIDsDidChange:(id)arg2 ;
-(CGRect)inlineReplyController:(id)arg1 gradientFrameWithInsets:(UIEdgeInsets)arg2 ;
-(void)inlineReplyControllerWillAnimateIn:(id)arg1 ;
-(void)unreadBannerViewTapped:(id)arg1 ;
-(UIEdgeInsets)_avoidanceInsets;
-(void)inlineReplyControllerWillAnimateOut:(id)arg1 ;
-(void)inlineReplyControllerIsAnimatingIn:(id)arg1 ;
-(BOOL)prefersBottomDividerHidden;
-(void)inlineReplyControllerIsAnimatingOut:(id)arg1 ;
-(void)inlineReplyControllerDidAnimateIn:(id)arg1 ;
-(double)virtualToolbarPreferredHeight;
-(void)inlineReplyControllerDidAnimateOut:(id)arg1 ;
-(id)inlineReplyControllerUpdatedFrameMap:(id)arg1 ;
-(UIEdgeInsets)virtualToolbarContentInsets;
-(void)_showPhotoPickerWithSourceType:(long long)arg1 ;
-(BOOL)inlineReplyControllerBecomeFirstResponder:(id)arg1 ;
-(void)inlineReplyControllerRequestsReloadInputViews:(id)arg1 ;
-(UIEdgeInsets)macToolbarInsets;
-(void)inlineReplyController:(id)arg1 setTargetFirstResponder:(long long)arg2 ;
-(long long)inlineReplyControllerTargetFirstResponder:(id)arg1 ;
-(id)inlineReplyControllerChatInputController:(id)arg1 ;
-(BOOL)inlineReplyController:(id)arg1 containerWidth:(double*)arg2 offset:(double*)arg3 ;
-(id)_meContact;
-(void)inlineReplyControllerDidSendComposition:(id)arg1 ;
-(void)inlineReplyController:(id)arg1 setIsShowingPreview:(BOOL)arg2 ;
-(void)updateBannerViewDismissButtonTapped:(id)arg1 updateType:(unsigned long long)arg2 ;
-(void)macRecipientsControllerDidUpdateToFieldSizing:(id)arg1 ;
-(void)navbarCanvasViewController:(id)arg1 didTapView:(id)arg2 ;
-(void)navbarCanvasViewController:(id)arg1 facetimeAudioButtonTapped:(id)arg2 ;
-(void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3 ;
-(void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)navbarCanvasViewController:(id)arg1 facetimeVideoButtonTapped:(id)arg2 ;
-(void)navbarCanvasViewController:(id)arg1 infoButtonTapped:(id)arg2 ;
-(void)navbarCanvasViewControllerWantsNavbarResize:(id)arg1 ;
-(NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForViewController:(id)arg1 ;
-(void)registerNotifications;
-(long long)unreadCountForCurrentFilterModeForNavbarCanvasViewController:(id)arg1 ;
-(void)lockoutViewControllerDidFinishDismissing:(id)arg1 ;
-(void)providerWillBeRemovedFromToolbarController:(id)arg1 ;
-(BOOL)itemProviderDisablesTouches;
-(void)prepareToDismissForSecondInstance;
-(void)forciblyUnloadChatInputController;
-(void)setupStateForLaunchURL:(id)arg1 ;
-(void)makeEntryViewActiveAfterSend;
-(CKMacToolbarItem *)detailsToolbarItem;
-(void)showKeyboardForReply;
-(void)primeTranscriptWithInitialOffset:(CGPoint)arg1 inset:(UIEdgeInsets)arg2 ;
-(double)gradientBottomPlaceholderHeight;
-(id)outgoingComposeViewForSendAnimation;
-(void)restoreInputAfterSearchPresentation;
-(BOOL)keyboardIsQuickPathing;
-(void)beginFacetimeCallWithVideo:(BOOL)arg1 ;
-(void)dismissDetailsController:(id)arg1 ;
-(BOOL)shouldListParticipantsInTitle;
-(void)_presentEffectPicker;
-(id)textPasteConfigurationSupporting:(id)arg1 combineItemAttributedStrings:(id)arg2 forRange:(id)arg3 ;
-(void)_transferFinishedNotification:(id)arg1 ;
-(void)_transferRestoredNotification:(id)arg1 ;
-(void)invalidateEntryViewForNewCompose;
-(void)setEntryViewOverrideForNewCompose:(id)arg1 ;
-(void)cleanupPostComposeTransitionWithKBFrame:(CGRect)arg1 ;
-(void)setIsAnimatingMessageSend:(BOOL)arg1 ;
-(void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(BOOL)arg5 ;
-(void)setActionsToolbar:(UIToolbar *)arg1 ;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(CKDetailsContactsManager *)detailsContactsManager;
-(void)setDetailsToolbarItem:(CKMacToolbarItem *)arg1 ;
-(void)setSuggestionBannerPresenter:(SGFoundInSuggestionPresenter *)arg1 ;
-(void)setSuggestionBannerHeight:(double)arg1 ;
-(void)setSuggestionBannerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)entryViewWasActiveBeforePresentingDataDetector;
-(void)setEntryViewWasActiveBeforePresentingDataDetector:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMacToolbarController:(CKMacToolbarController *)arg1 ;
-(void)setRecipientsVirtualToolbarItem:(UIView *)arg1 ;
-(BOOL)shouldDisableEntryView;
-(CKAudioTrimViewController *)audioTrimController;
-(BOOL)inputAccessoryViewControllerEnabled;
-(void)setShouldDisableEntryView:(BOOL)arg1 ;
-(void)setAudioTrimController:(CKAudioTrimViewController *)arg1 ;
-(CKVideoTrimController *)videoTrimController;
-(void)setVideoTrimController:(CKVideoTrimController *)arg1 ;
-(CKThrowAnimationManager *)throwAnimationManager;
-(CKVideoMessageRecordingViewController *)videoMessageRecordingViewController;
-(void)setVideoMessageRecordingViewController:(CKVideoMessageRecordingViewController *)arg1 ;
-(BOOL)isShowingVideoMessageRecordingView;
-(void)setShowingVideoMessageRecordingView:(BOOL)arg1 ;
-(CKQLDetailsPreviewController *)entryPreviewController;
-(void)setPreviewSourceView:(UIView *)arg1 ;
-(CKInvisibleInkEffectController *)previewInvisibleInkEffectController;
-(void)setPreviewInvisibleInkEffectController:(CKInvisibleInkEffectController *)arg1 ;
-(UIView *)previewRevealView;
-(void)setPreviewRevealView:(UIView *)arg1 ;
-(void)setTranscriptInlineNotificationUpdater:(CKScheduledUpdater *)arg1 ;
-(BOOL)isShowingDetailsController;
-(void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1 ;
-(double)stickerTranscriptScrollDelta;
-(CKNicknameUpdatesViewController *)nicknameUpdateController;
-(CKNicknameUpdate *)currentNicknameUpdate;
-(CKNavigationBarTitleController *)navigationBarTitleController;
-(BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1 ;
-(void)setNavigationBarTitleController:(CKNavigationBarTitleController *)arg1 ;
-(void)setMacRecipientsController:(CKMacRecipientsController *)arg1 ;
-(void)setBusinessMacToolbarController:(CKBusinessMacToolbarViewController *)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1 ;
-(void)setShareSheetHostBundleIdentifier:(NSString *)arg1 ;
-(void)_api_dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)_api_dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)prewarmCamera:(id)arg1 ;
-(void)hideMediaPickerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)showMediaPicker:(id)arg1 animated:(BOOL)arg2 ;
-(void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidLoad;
-(CNContactPickerViewController *)contactPicker;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)setContactPicker:(CNContactPickerViewController *)arg1 ;
-(id)previewActionsForPreviewController:(id)arg1 ;
-(void)previewControllerDidCancelDismiss:(id)arg1 ;
-(id)invisibleInkEffectControllerForPreviewController:(id)arg1 ;
-(BOOL)previewController:(id)arg1 canShareItem:(id)arg2 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(CGRect*)arg3 realSize:(CGSize*)arg4 ;
-(BOOL)_clickyOrbEnabled;
-(id)_parentChatItemForIndexPath:(id)arg1 ;
-(id)_parentIndexPathForCellAtIndexPath:(id)arg1 ;
-(id)_balloonViewForCellAtIndexPath:(id)arg1 ;
-(void)hideStickersAssociatedWithChatItem:(id)arg1 ;
-(id)_menuForChatItem:(id)arg1 ;
-(CKQLPreviewController *)previewController;
-(id)_previewingViewControllerForHitView:(id)arg1 indexPath:(id)arg2 ;
-(void)setEntryViewWasActiveOnContextMenuPresentation:(BOOL)arg1 ;
-(void)showFullScreenAcknowledgmentPickerIfNeededForBalloonAtIndexPath:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(void)setIsShowingPreview:(BOOL)arg1 ;
-(void)restoreEntryViewAfterPreview;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldShowAcknowledgmentPickerForBalloon;
-(id)transcriptCollectionViewController:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2 ;
-(BOOL)wantsInlineOverlay;
-(BOOL)_shouldShowVotingViewForChatItem:(id)arg1 ;
-(BOOL)_smsEnabled;
-(long long)acknowledgmentToSend;
-(void)setAcknowledgmentToSend:(long long)arg1 ;
-(void)_doneButtonPressed;
-(BOOL)wasKeyboardShowingWithApp;
-(void)setWasKeyboardShowingWithApp:(BOOL)arg1 ;
-(void)restoreContentOffsetChanges;
-(void)setWantsInlineOverlay:(BOOL)arg1 ;
-(BOOL)wantsStickerDetails;
-(void)showInlineReplyControllerForChatItem:(id)arg1 presentKeyboard:(BOOL)arg2 ;
-(void)setWantsStickerDetails:(BOOL)arg1 ;
-(void)presentStickerDetailControllerWithChatItem:(id)arg1 ;
-(void)showStickersAssociatedWithChatItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)restoreInputAfterPreviewPresentation;
-(void)prepareInputForPreviewPresentation;
-(void)_deleteStickerWithTransferGUID:(id)arg1 ;
-(void)_presentAppStoreForAdamID:(id)arg1 ;
-(id)_showTimestampsAction;
-(id)_exportMenuForChatItem:(id)arg1 ;
-(id)_exportActionForChatItem:(id)arg1 ;
-(id)_tapbackAndInlineReplyMenuForChatItem:(id)arg1 ;
-(id)_inlineReplyActionForChatItem:(id)arg1 ;
-(id)_forwardAndCopyMenuForChatItem:(id)arg1 ;
-(id)_forwardAndCopyActionsForChatItem:(id)arg1 ;
-(id)_deleteMenuForChatItem:(id)arg1 ;
-(id)_downgradeMessageActionForChatItem:(id)arg1 ;
-(id)_stickerDetailsActionForChatItem:(id)arg1 ;
-(id)_mediaAttributionActionForChatItem:(id)arg1 ;
-(id)_moreActionForChatItem:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)_forwardActionForChatItem:(id)arg1 ;
-(id)_copyActionForChatItem:(id)arg1 ;
-(id)selectedBalloonViews;
-(id)_exportActionsForChatItem:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)_presentBrowserOrAppStoreForAdamID:(id)arg1 url:(id)arg2 identifier:(id)arg3 ;
-(void)actionMoreIsTappedForChatItem:(id)arg1 ;
-(BOOL)_balloonViewOfCell:(id)arg1 containsPoint:(CGPoint)arg2 fromView:(id)arg3 ;
-(UIContextMenuInteraction *)transcriptContextMenuInteraction;
-(BOOL)_point:(CGPoint)arg1 visuallyIntersectsBalloonViewInCollectionView:(id)arg2 ;
-(void)setTranscriptContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)stickerDetailViewController:(id)arg1 deletedStickerWithTransferGUID:(id)arg2 ;
-(id)transcriptCollectionViewController:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 interaction:(id)arg4 ;
-(void)transcriptCollectionViewController:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)transcriptCollectionViewController:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2 ;
-(id)transcriptCollectionViewController:(id)arg1 accessoriesForContextMenuWithConfiguration:(id)arg2 layoutAnchor:(SCD_Struct_CK6)arg3 ;
-(id)transcriptCollectionViewController:(id)arg1 styleForContextMenuWithConfiguration:(id)arg2 ;
-(void)setupClickyOrbForConversation:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)stickerDetailViewController:(id)arg1 selectedStickerPackWithAdamID:(id)arg2 ;
-(void)messageAcknowledgmentPickerViewController:(id)arg1 didPickAcknowledgment:(long long)arg2 ;
-(BOOL)_hasPreviewViewControllerForChatItem:(id)arg1 ;
-(void)_dealloc;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(id)nicknameBannerViewActionButtonMenu:(id)arg1 ;
-(void)nicknameBannerViewActionButtonTapped:(id)arg1 ;
-(void)nicknameBannerViewDismissButtonTapped:(id)arg1 ;
-(id)progressBar;
-(void)setShouldShowDoneButton:(BOOL)arg1 ;
-(void)configureWithToolbarController:(id)arg1 ;
-(void)prepareForSuspend;
-(void)setShowingInStandAloneWindow:(BOOL)arg1 ;
-(void)presentDetailsViewController;
-(void)keyCommandToggleDetails;
-(void)dismissDetailsNavigationController;
-(BOOL)isDetailsNavigationControllerDetached;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(BOOL)allowsMentions;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isShowingPreview;
-(long long)preferredStatusBarStyle;
-(void)tapGestureRecognized:(id)arg1 ;
-(double)preferredMacToolbarHeight;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(BOOL)_shouldHideNavigationBarForSendAnimationContext:(id)arg1 ;
-(id)_fullscreenEffectsManager;
-(void)_finishSendAnimation;
-(CGRect)_convertedNavigationBarFrameInSendAnimationContainerView:(id)arg1 ;
-(id)chatForSendAnimationManager:(id)arg1 ;
-(id)throwAnimationManagerEntryView:(id)arg1 ;
-(id)collectionViewControllerForImpactEffectManager:(id)arg1 ;
-(void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2 ;
-(void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2 ;
-(void)throwAnimationManager:(id)arg1 canNowSendMessages:(id)arg2 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)throwAnimationManagerAccessoryViewHeight:(id)arg1 ;
-(CGRect)throwAnimationKeyboardFrame:(id)arg1 ;
-(CGRect)throwAnimationWindowFrame:(id)arg1 ;
-(void)throwAnimationManagerPrepareForThrowAnimation:(id)arg1 context:(id)arg2 ;
-(BOOL)wantsOverKeyboardAnimationForSendAnimationContext:(id)arg1 ;
-(id)throwBalloonsForSendAnimationContext:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(void)contactsManagerViewModelsDidChange:(id)arg1 ;
-(id<UIDragSession>)dragSession;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)alertTitleForDelete;
-(id)alertMessageForDelete;
-(void)_cancelDeletion:(/*^block*/id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(void)_handleChatItemDidChange:(id)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(double)messageEntryViewMaxHeight:(id)arg1 ;
-(void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2 ;
-(void)setSendingMessage:(BOOL)arg1 ;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(id)inputAccessoryViewController;
-(UIEdgeInsets)_contentInsetForSendAnimation;
-(double)throwAnimationFinalFrameOffset:(id)arg1 ;
-(double)throwAnimationManagerTopHeaderHeight:(id)arg1 ;
-(void)showEffectPicker;
-(void)messageEntryViewPopulatePreviousSentMessage:(id)arg1 ;
-(void)messageEntryViewPopulateNextSentMessage:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)messageEntryViewWantsEffectPicker:(id)arg1 ;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)messageEntryView:(id)arg1 didInsertPluginPayload:(id)arg2 ;
-(void)messageEntryView:(id)arg1 shouldShowAppStrip:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1 ;
-(CGSize)messageEntryViewMaxShelfPluginViewSize:(id)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidEndEditing:(id)arg1 ;
-(void)setInputController:(CKChatInputController *)arg1 ;
-(BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(void)messageEntryViewRecordingDidChange:(id)arg1 ;
-(BOOL)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1 ;
-(BOOL)pluginButtonsEnabled;
-(void)viewDidLayoutSubviews;
-(id)inputViewController;
-(id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(long long*)arg2 containsRestoring:(BOOL*)arg3 ;
-(BOOL)_displayMediaObjectFullscreen:(id)arg1 ;
-(BOOL)_displayPreviewItemForMediaObject:(id)arg1 ;
-(void)_showMapViewerForMediaObject:(id)arg1 ;
-(void)_showVCardViewerForMediaObject:(id)arg1 ;
-(void)messageEntryViewSwipeDownGestureRecognized:(id)arg1 ;
-(void)sendCurrentLocationMessage:(id)arg1 ;
-(void)_showPassbookCardViewForMediaObject:(id)arg1 ;
-(id)_previewingViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dismissPresentedViewController:(id)arg1 ;
-(BOOL)_canReloadEntryView;
-(void)_dismissPresentedViewController:(id)arg1 ;
-(void)showAlternateViewerForMediaObject:(id)arg1 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(void)_showVCalViewerForMediaObject:(id)arg1 ;
-(void)previewController:(id)arg1 willTransitionToState:(long long)arg2 ;
-(void)previewController:(id)arg1 didTransitionToState:(long long)arg2 ;
-(void)showKeyboard;
-(void)setComposition:(CKComposition *)arg1 ;
-(CKChatInputController *)inputController;
-(void)dealloc;
@end

