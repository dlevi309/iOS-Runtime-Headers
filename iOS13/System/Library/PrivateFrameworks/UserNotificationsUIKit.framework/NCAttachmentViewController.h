/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationCustomContent.h>

@protocol NCNotificationCustomContentDelegate;
@class NCNotificationRequest, UNNotificationAttachment, NSString;

@interface NCAttachmentViewController : UIViewController <NCNotificationCustomContent> {

	id<NCNotificationCustomContentDelegate> _delegate;
	NCNotificationRequest* _notificationRequest;
	UNNotificationAttachment* _attachment;

}

@property (nonatomic,retain) UNNotificationAttachment * attachment;                                //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * notificationRequest;                          //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (nonatomic,readonly) CGSize contentSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
+(id)attachmentViewControllerForAttachment:(id)arg1 notificationRequest:(id)arg2 ;
-(id<NCNotificationCustomContentDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationCustomContentDelegate>)arg1 ;
-(CGSize)contentSize;
-(UNNotificationAttachment *)attachment;
-(void)setAttachment:(UNNotificationAttachment *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)userInteractionEnabled;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)updatePreferredContentSize;
-(NCNotificationRequest *)notificationRequest;
-(BOOL)didReceiveNotificationRequest:(id)arg1 ;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 ;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 ;
-(BOOL)defaultContentHidden;
-(BOOL)overridesDefaultTitle;
-(BOOL)allowManualDismiss;
-(id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2 ;
-(CGSize)_preferredContentSizeForContainerSize:(CGSize)arg1 contentSize:(CGSize)arg2 ;
@end

