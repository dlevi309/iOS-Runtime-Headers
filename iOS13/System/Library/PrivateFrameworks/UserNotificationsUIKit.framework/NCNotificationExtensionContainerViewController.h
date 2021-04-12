/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UNNotificationExtensionHostDelegate.h>
#import <libobjc.A.dylib/NCNotificationCustomContent.h>

@protocol NCNotificationCustomContentDelegate;
@class NSString, NCNotificationRequest, _UNNotificationExtensionHostViewController, UIView, NCMediaPlayPauseButton, NSMutableArray;

@interface NCNotificationExtensionContainerViewController : UIViewController <_UNNotificationExtensionHostDelegate, NCNotificationCustomContent> {

	BOOL _allowManualDismiss;
	BOOL _defaultContentHidden;
	BOOL _overridesDefaultTitle;
	BOOL _userInteractionEnabled;
	BOOL _shouldPlayMediaAfterExpanded;
	id<NCNotificationCustomContentDelegate> _delegate;
	NSString* _extensionIdentifier;
	double _contentSizeRatio;
	NCNotificationRequest* _notificationRequest;
	_UNNotificationExtensionHostViewController* _extensionViewController;
	UIView* _blockingView;
	NCMediaPlayPauseButton* _mediaPlayPauseButton;
	NSMutableArray* _queuedRequests;
	NSMutableArray* _updatedActions;

}

@property (nonatomic,retain) NSString * extensionIdentifier;                                                    //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (assign,nonatomic) double contentSizeRatio;                                                           //@synthesize contentSizeRatio=_contentSizeRatio - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * notificationRequest;                                       //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (nonatomic,retain) _UNNotificationExtensionHostViewController * extensionViewController;              //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (nonatomic,retain) UIView * blockingView;                                                             //@synthesize blockingView=_blockingView - In the implementation block
@property (nonatomic,retain) NCMediaPlayPauseButton * mediaPlayPauseButton;                                     //@synthesize mediaPlayPauseButton=_mediaPlayPauseButton - In the implementation block
@property (assign,nonatomic) BOOL allowManualDismiss;                                                           //@synthesize allowManualDismiss=_allowManualDismiss - In the implementation block
@property (assign,nonatomic) BOOL defaultContentHidden;                                                         //@synthesize defaultContentHidden=_defaultContentHidden - In the implementation block
@property (assign,nonatomic) BOOL overridesDefaultTitle;                                                        //@synthesize overridesDefaultTitle=_overridesDefaultTitle - In the implementation block
@property (assign,nonatomic) BOOL userInteractionEnabled;                                                       //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedRequests;                                                   //@synthesize queuedRequests=_queuedRequests - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayMediaAfterExpanded;                                                 //@synthesize shouldPlayMediaAfterExpanded=_shouldPlayMediaAfterExpanded - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedActions;                                                   //@synthesize updatedActions=_updatedActions - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
-(void)dealloc;
-(id<NCNotificationCustomContentDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationCustomContentDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)resignFirstResponder;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)userInteractionEnabled;
-(BOOL)canResignFirstResponder;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(_UNNotificationExtensionHostViewController *)extensionViewController;
-(void)setExtensionViewController:(_UNNotificationExtensionHostViewController *)arg1 ;
-(id)remoteService;
-(NSMutableArray *)queuedRequests;
-(void)setQueuedRequests:(NSMutableArray *)arg1 ;
-(NCNotificationRequest *)notificationRequest;
-(BOOL)didReceiveNotificationRequest:(id)arg1 ;
-(void)preserveInputViews;
-(BOOL)restoreInputViews;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 ;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 ;
-(BOOL)defaultContentHidden;
-(BOOL)overridesDefaultTitle;
-(NSString *)contentExtensionIdentifier;
-(void)playMedia;
-(id)cancelTouches;
-(id)initWithExtension:(id)arg1 forNotificationRequest:(id)arg2 ;
-(BOOL)allowManualDismiss;
-(void)_teardownExtension;
-(UIView *)blockingView;
-(void)_loadExtensionViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(double)_contentHeightForWidth:(double)arg1 ;
-(void)_flushQueuedRequests;
-(id)_responseForAction:(id)arg1 notification:(id)arg2 response:(id)arg3 ;
-(void)setShouldPlayMediaAfterExpanded:(BOOL)arg1 ;
-(void)_playMediaAfterExpanded;
-(void)_setupMediaButton;
-(id)_requestActionForActionIdentifier:(id)arg1 ;
-(NCMediaPlayPauseButton *)mediaPlayPauseButton;
-(NSMutableArray *)updatedActions;
-(BOOL)shouldPlayMediaAfterExpanded;
-(void)_mediaPlayPauseButtonTapped:(id)arg1 ;
-(void)setMediaPlayPauseButton:(NCMediaPlayPauseButton *)arg1 ;
-(void)_addExtensionViewFromViewController:(id)arg1 ;
-(void)_setupRemoteServiceInterface:(id)arg1 ;
-(void)_setupExtensionViewController:(id)arg1 ;
-(void)notificationHostExtensionDidUpdateControls:(id)arg1 ;
-(void)notificationHost:(id)arg1 extensionDidCompleteResponse:(id)arg2 withOption:(unsigned long long)arg3 ;
-(void)notificationHostExtension:(id)arg1 setTitle:(id)arg2 ;
-(void)notificationHostExtensionMediaPlayingDidStart:(id)arg1 ;
-(void)notificationHostExtensionMediaPlayingDidPause:(id)arg1 ;
-(void)notificationHostExtensionRequestsDefaultAction:(id)arg1 ;
-(void)notificationHostExtensionRequestsDismiss:(id)arg1 ;
-(void)notificationHostExtension:(id)arg1 setUserNotificationActions:(id)arg2 ;
-(double)contentSizeRatio;
-(void)setContentSizeRatio:(double)arg1 ;
-(void)setBlockingView:(UIView *)arg1 ;
-(void)setAllowManualDismiss:(BOOL)arg1 ;
-(void)setDefaultContentHidden:(BOOL)arg1 ;
-(void)setOverridesDefaultTitle:(BOOL)arg1 ;
-(void)setUpdatedActions:(NSMutableArray *)arg1 ;
@end

