/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationCustomContentDelegate.h>
#import <libobjc.A.dylib/NCNotificationTextInputViewDelegate.h>
#import <libobjc.A.dylib/NCNotificationCustomContent.h>

@protocol NCNotificationCustomContentDelegate, NCNotificationCustomContent;
@class NSString, NCNotificationRequest, UIViewController, NCNotificationTextInputView;

@interface NCNotificationContentContainerViewController : UIViewController <NCNotificationCustomContentDelegate, NCNotificationTextInputViewDelegate, NCNotificationCustomContent> {

	id<NCNotificationCustomContentDelegate> _delegate;
	NCNotificationRequest* _notificationRequest;
	UIViewController*<NCNotificationCustomContent> _contentViewController;
	NCNotificationTextInputView* _inputAccessoryView;

}

@property (nonatomic,retain) UIViewController*<NCNotificationCustomContent> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) NCNotificationTextInputView * inputAccessoryView;                                  //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,readonly) NCNotificationRequest * notificationRequest;                                     //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
-(NCNotificationTextInputView *)inputAccessoryView;
-(BOOL)becomeFirstResponder;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<NCNotificationCustomContentDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContentViewController:(UIViewController*<NCNotificationCustomContent>)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(UIViewController*<NCNotificationCustomContent>)contentViewController;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<NCNotificationCustomContentDelegate>)arg1 ;
-(BOOL)userInteractionEnabled;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)cancelTouches;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setInputAccessoryView:(NCNotificationTextInputView *)arg1 ;
-(NSString *)title;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(BOOL)didReceiveNotificationRequest:(id)arg1 ;
-(void)preserveInputViews;
-(BOOL)restoreInputViews;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 ;
-(void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 ;
-(void)customContentRequestsDefaultAction:(id)arg1 ;
-(void)customContentRequestsDismiss:(id)arg1 ;
-(void)customContentDidLoadExtension:(id)arg1 ;
-(void)customContentDidUpdateTitle:(id)arg1 ;
-(void)customContent:(id)arg1 didUpdateUserNotificationActions:(id)arg2 ;
-(unsigned long long)customContentLocation;
-(void)_loadContentViewControllerForNotificationRequest:(id)arg1 ;
-(void)_setupQuickReplyForNotificationRequest:(id)arg1 ;
-(void)_setupContentViewController:(id)arg1 ;
-(void)_setupQuickReplyForNotificationAction:(id)arg1 ;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 ;
-(BOOL)defaultContentHidden;
-(BOOL)overridesDefaultTitle;
-(NSString *)contentExtensionIdentifier;
-(void)playMedia;
-(id)_textInputActionInNotification:(id)arg1 ;
-(void)_removeInputAccessoryView:(id)arg1 ;
-(void)notificationTextInputView:(id)arg1 didConfirmText:(id)arg2 forAction:(id)arg3 ;
-(BOOL)allowManualDismiss;
@end

