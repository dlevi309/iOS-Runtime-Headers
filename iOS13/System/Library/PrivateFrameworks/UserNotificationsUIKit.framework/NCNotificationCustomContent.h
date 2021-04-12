/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class NSString;


@protocol NCNotificationCustomContent <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate; 
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
@optional
-(void)preserveInputViews;
-(BOOL)restoreInputViews;
-(NSString *)contentExtensionIdentifier;
-(void)playMedia;
-(id)cancelTouches;

@required
-(id<NCNotificationCustomContentDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)title;
-(BOOL)userInteractionEnabled;
-(BOOL)didReceiveNotificationRequest:(id)arg1;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
-(BOOL)defaultContentHidden;
-(BOOL)overridesDefaultTitle;
-(BOOL)allowManualDismiss;

@end

