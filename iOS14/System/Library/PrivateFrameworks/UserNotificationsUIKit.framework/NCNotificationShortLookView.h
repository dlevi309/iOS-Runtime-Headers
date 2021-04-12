/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <PlatterKit/PLTitledPlatterView.h>
#import <libobjc.A.dylib/NCNotificationStaticContentAccepting.h>
#import <libobjc.A.dylib/NCAuxiliaryOptionsSupporting.h>

@class BSUIFontProvider, NCNotificationContentView, NCNotificationGrabberView, NCAuxiliaryOptionsView, NSString, NSArray, UIImage, UIView, NSDate, NSTimeZone, UIButton;

@interface NCNotificationShortLookView : PLTitledPlatterView <NCNotificationStaticContentAccepting, NCAuxiliaryOptionsSupporting> {

	BSUIFontProvider* _fontProvider;
	NCNotificationContentView* _notificationContentView;
	NCNotificationGrabberView* _grabberView;
	NCAuxiliaryOptionsView* _auxiliaryOptionsView;
	BOOL _notificationContentViewHidden;
	BOOL _banner;
	BOOL _grabberVisible;

}

@property (assign,setter=_setGrabberVisible:,getter=_isGrabberVisible,nonatomic) BOOL grabberVisible; 
@property (setter=_setFontProvider:,getter=_fontProvider,nonatomic,retain) BSUIFontProvider * fontProvider; 
@property (getter=_notificationContentView,nonatomic,readonly) NCNotificationContentView * notificationContentView; 
@property (assign,setter=_setBanner:,getter=_isBanner,nonatomic) BOOL banner;                                                    //@synthesize banner=_banner - In the implementation block
@property (assign,setter=_setGrabberVisible:,getter=_isGrabberVisible,nonatomic) BOOL grabberVisible;                            //@synthesize grabberVisible=_grabberVisible - In the implementation block
@property (assign,getter=isNotificationContentViewHidden,nonatomic) BOOL notificationContentViewHidden;                          //@synthesize notificationContentViewHidden=_notificationContentViewHidden - In the implementation block
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * primarySubtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,retain) NSArray * interfaceActions; 
@property (nonatomic,copy) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,copy) NSString * optionsSummaryText; 
@property (assign,nonatomic) unsigned long long numberOfOptionButtons; 
@property (nonatomic,readonly) NSArray * optionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)_fontProvider;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(UIImage *)thumbnail;
-(void)setInterfaceActions:(NSArray *)arg1 ;
-(NSArray *)interfaceActions;
-(void)setBackgroundView:(id)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(void)setSummaryText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)summaryText;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)_setBanner:(BOOL)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setThumbnail:(UIImage *)arg1 ;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(NSString *)arg1 ;
-(void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfPrimaryLargeTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfSecondaryLargeTextLines:(unsigned long long)arg1 ;
-(BOOL)isNotificationContentViewHidden;
-(void)setNotificationContentViewHidden:(BOOL)arg1 ;
-(void)_configureNotificationContentViewIfNecessary;
-(void)_configureCustomContentView;
-(void)_layoutNotificationContentView;
-(unsigned long long)maximumNumberOfPrimaryTextLines;
-(unsigned long long)maximumNumberOfPrimaryLargeTextLines;
-(unsigned long long)maximumNumberOfSecondaryTextLines;
-(unsigned long long)maximumNumberOfSecondaryLargeTextLines;
-(id)_notificationContentView;
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)setOptionsSummaryText:(NSString *)arg1 ;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1 ;
-(NSArray *)optionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1 ;
-(void)_setFontProvider:(id)arg1 ;
-(void)_layoutAuxiliaryOptionsView;
-(void)_layoutGrabber;
-(CGSize)_sizeThatFitsContentWithSize:(CGSize)arg1 withAuxiliaryOptionsViewVisible:(BOOL)arg2 ;
-(void)_configureAuxiliaryOptionsViewIfNecessary;
-(void)_configureHeaderContentView;
-(id)_newNotificationContentView;
-(BOOL)_isGrabberVisible;
-(BOOL)_isBanner;
-(void)_setGrabberVisible:(BOOL)arg1 ;
@end

