/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCNotificationStaticContentProviding.h>

@protocol NCNotificationStaticContentProvidingDelegate;
@class NSArray, NSString, NSDate, NSTimeZone, UIImage, NCNotificationRequest;

@interface NCNotificationRequestContentProvider : NSObject <NCNotificationStaticContentProviding> {

	id<NCNotificationStaticContentProvidingDelegate> _delegate;
	NSArray* _overriddenActions;
	NCNotificationRequest* _notificationRequest;

}

@property (nonatomic,retain) NCNotificationRequest * notificationRequest;                                   //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationStaticContentProvidingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (getter=isDateAllDay,nonatomic,readonly) BOOL dateAllDay; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSString * primaryText; 
@property (nonatomic,copy,readonly) NSString * primarySubtitleText; 
@property (nonatomic,copy,readonly) NSString * secondaryText; 
@property (nonatomic,copy,readonly) NSString * summaryText; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,copy,readonly) id cancelAction; 
@property (nonatomic,copy,readonly) id clearAction; 
@property (nonatomic,copy,readonly) id closeAction; 
@property (nonatomic,copy,readonly) id defaultAction; 
@property (nonatomic,copy,readonly) id nilAction; 
@property (nonatomic,readonly) NSArray * interfaceActions; 
@property (getter=isNumberOfLinesInfinite,nonatomic,readonly) BOOL numberOfLinesInfinite; 
@property (nonatomic,readonly) BOOL showsTextInputOnAppearance; 
@property (nonatomic,readonly) unsigned long long coalesceCount; 
@property (nonatomic,copy) NSArray * overriddenActions;                                                     //@synthesize overriddenActions=_overriddenActions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimeZone *)timeZone;
-(id)init;
-(NSArray *)icons;
-(UIImage *)thumbnail;
-(id<NCNotificationStaticContentProvidingDelegate>)delegate;
-(NSArray *)interfaceActions;
-(void)setDelegate:(id<NCNotificationStaticContentProvidingDelegate>)arg1 ;
-(NSString *)summaryText;
-(NSArray *)currentActions;
-(id)cancelAction;
-(NSString *)primaryText;
-(id)defaultAction;
-(NSDate *)date;
-(NSString *)secondaryText;
-(NSString *)title;
-(id)clearAction;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(BOOL)isDateAllDay;
-(NSString *)primarySubtitleText;
-(id)closeAction;
-(id)nilAction;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(BOOL)showsTextInputOnAppearance;
-(BOOL)isNumberOfLinesInfinite;
-(NSArray *)overriddenActions;
-(/*^block*/id)_actionForNotificationAction:(id)arg1 ;
-(unsigned long long)coalesceCount;
-(void)setOverriddenActions:(NSArray *)arg1 ;
-(id)_appBundleIdentifer;
@end

