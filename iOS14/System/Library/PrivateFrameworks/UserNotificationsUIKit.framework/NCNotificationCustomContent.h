/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class NSString;


@protocol NCNotificationCustomContent <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate; 
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
@optional
-(id)cancelTouches;
-(void)preserveInputViews;
-(BOOL)restoreInputViews;
-(NSString *)contentExtensionIdentifier;
-(void)playMedia;

@required
-(id<NCNotificationCustomContentDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)userInteractionEnabled;
-(NSString *)title;
-(BOOL)didReceiveNotificationRequest:(id)arg1;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
-(BOOL)defaultContentHidden;
-(BOOL)overridesDefaultTitle;
-(BOOL)allowManualDismiss;

@end

