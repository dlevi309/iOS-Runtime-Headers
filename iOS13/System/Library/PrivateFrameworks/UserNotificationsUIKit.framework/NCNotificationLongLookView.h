/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <PlatterKit/PLExpandedPlatterView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NCNotificationContentViewDelegate.h>
#import <libobjc.A.dylib/NCNotificationStaticContentAccepting.h>
#import <libobjc.A.dylib/NCCustomContentContainingLookView.h>

@class NSString, NSArray, UIImage, UIView, UITapGestureRecognizer, NCNotificationContentView, NSDate, NSTimeZone, UIButton, UIScrollView, UIControl;

@interface NCNotificationLongLookView : PLExpandedPlatterView <UIGestureRecognizerDelegate, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, NCCustomContentContainingLookView> {

	NCNotificationContentView* _notificationContentView;
	UITapGestureRecognizer* _lookViewTapGestureRecognizer;
	BOOL _hidesNotificationContent;
	unsigned long long _customContentLocation;

}

@property (assign,nonatomic,__weak) id<NCNotificationLongLookViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
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
@property (nonatomic,readonly) UIView * customContentView; 
@property (assign,nonatomic) BOOL hasShadow; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) CGSize customContentSize; 
@property (assign,getter=isActionsHidden,nonatomic) BOOL actionsHidden; 
@property (nonatomic,readonly) UIControl * dismissControl; 
@property (nonatomic,readonly) UIEdgeInsets dismissControlInsets; 
@property (assign,nonatomic) long long dismissControlPosition; 
@property (assign,nonatomic) BOOL clipsVisibleContentToBounds; 
@property (assign,nonatomic) double contentBottomInset; 
@property (assign,nonatomic) unsigned long long customContentLocation;                               //@synthesize customContentLocation=_customContentLocation - In the implementation block
@property (assign,nonatomic) BOOL hidesNotificationContent;                                          //@synthesize hidesNotificationContent=_hidesNotificationContent - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * lookViewTapGestureRecognizer; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(CGSize)_contentViewSize;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(NSString *)arg1 ;
-(void)setCustomContentSize:(CGSize)arg1 ;
-(void)_layoutCustomContentView;
-(CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(CGSize)arg1 ;
-(void)_configureCustomContentView;
-(CGRect)_actionsViewFrame;
-(CGRect)_mainContentViewFrame;
-(void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfPrimaryLargeTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfSecondaryLargeTextLines:(unsigned long long)arg1 ;
-(void)_configureLookViewTapGestureRecognizerIfNecessary;
-(void)_updateTopMargin;
-(void)_configureNotificationContentViewIfNecessary;
-(long long)lookStyle;
-(void)_layoutNotificationContentView;
-(void)_layoutCustomContentViewInRelationToContentView;
-(unsigned long long)maximumNumberOfPrimaryTextLines;
-(unsigned long long)maximumNumberOfPrimaryLargeTextLines;
-(unsigned long long)maximumNumberOfSecondaryTextLines;
-(unsigned long long)maximumNumberOfSecondaryLargeTextLines;
-(BOOL)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1 ;
-(void)notificationContentView:(id)arg1 willInteractWithURL:(id)arg2 ;
-(unsigned long long)customContentLocation;
-(void)setCustomContentLocation:(unsigned long long)arg1 ;
-(BOOL)hidesNotificationContent;
-(void)setHidesNotificationContent:(BOOL)arg1 ;
-(UITapGestureRecognizer *)lookViewTapGestureRecognizer;
@end

