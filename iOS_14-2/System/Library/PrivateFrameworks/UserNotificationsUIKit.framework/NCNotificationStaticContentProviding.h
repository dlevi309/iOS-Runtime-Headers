/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class NSArray, NSString, NSDate, NSTimeZone, UIImage;


@protocol NCNotificationStaticContentProviding <NSObject>
@property (assign,nonatomic,__weak) id<NCNotificationStaticContentProvidingDelegate> delegate; 
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
@property (nonatomic,copy) NSArray * overriddenActions; 
@property (nonatomic,copy,readonly) NSArray * currentActions; 
@required
-(NSTimeZone *)timeZone;
-(NSArray *)icons;
-(UIImage *)thumbnail;
-(id<NCNotificationStaticContentProvidingDelegate>)delegate;
-(NSArray *)interfaceActions;
-(void)setDelegate:(id)arg1;
-(NSString *)summaryText;
-(NSArray *)currentActions;
-(id)cancelAction;
-(NSString *)primaryText;
-(id)defaultAction;
-(NSDate *)date;
-(NSString *)secondaryText;
-(NSString *)title;
-(id)clearAction;
-(BOOL)isDateAllDay;
-(NSString *)primarySubtitleText;
-(id)closeAction;
-(id)nilAction;
-(BOOL)showsTextInputOnAppearance;
-(BOOL)isNumberOfLinesInfinite;
-(NSArray *)overriddenActions;
-(unsigned long long)coalesceCount;
-(void)setOverriddenActions:(id)arg1;

@end

