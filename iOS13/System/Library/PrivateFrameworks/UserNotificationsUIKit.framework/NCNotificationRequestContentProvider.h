/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,readonly) NSArray * interfaceActions; 
@property (getter=isNumberOfLinesInfinite,nonatomic,readonly) BOOL numberOfLinesInfinite; 
@property (nonatomic,readonly) BOOL showsTextInputOnAppearance; 
@property (nonatomic,readonly) unsigned long long coalesceCount; 
@property (nonatomic,copy) NSArray * overriddenActions;                                                     //@synthesize overriddenActions=_overriddenActions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentActions; 
-(id)init;
-(id<NCNotificationStaticContentProvidingDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationStaticContentProvidingDelegate>)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(NSArray *)icons;
-(NSString *)title;
-(id)defaultAction;
-(id)cancelAction;
-(UIImage *)thumbnail;
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(NSArray *)interfaceActions;
-(NSString *)summaryText;
-(id)clearAction;
-(NSArray *)currentActions;
-(NSString *)primarySubtitleText;
-(BOOL)isDateAllDay;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(id)closeAction;
-(BOOL)isNumberOfLinesInfinite;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(BOOL)showsTextInputOnAppearance;
-(NSArray *)overriddenActions;
-(/*^block*/id)_actionForNotificationAction:(id)arg1 ;
-(unsigned long long)coalesceCount;
-(void)setOverriddenActions:(NSArray *)arg1 ;
-(id)_appBundleIdentifer;
@end

