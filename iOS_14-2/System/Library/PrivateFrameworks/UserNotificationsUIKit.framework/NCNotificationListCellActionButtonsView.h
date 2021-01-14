/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@class NSString, UIView, UIStackView, NCNotificationListCellActionButton, _UIStatesFeedbackGenerator;

@interface NCNotificationListCellActionButtonsView : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping> {

	BOOL _adjustsFontForContentSizeCategory;
	BOOL _highlightDefaultActionButton;
	BOOL _didPlayHaptic;
	NSString* _materialGroupNameBase;
	double _stretchedWidth;
	double _defaultWidth;
	long long _backgroundMaterialRecipe;
	UIView* _clippingView;
	UIStackView* _buttonsStackView;
	NCNotificationListCellActionButton* _defaultActionButton;
	_UIStatesFeedbackGenerator* _defaultActionFeedbackGenerator;

}

@property (nonatomic,retain) UIView * clippingView;                                                    //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UIStackView * buttonsStackView;                                           //@synthesize buttonsStackView=_buttonsStackView - In the implementation block
@property (nonatomic,retain) NCNotificationListCellActionButton * defaultActionButton;                 //@synthesize defaultActionButton=_defaultActionButton - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * defaultActionFeedbackGenerator;              //@synthesize defaultActionFeedbackGenerator=_defaultActionFeedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL didPlayHaptic;                                                       //@synthesize didPlayHaptic=_didPlayHaptic - In the implementation block
@property (assign,nonatomic) BOOL highlightDefaultActionButton;                                        //@synthesize highlightDefaultActionButton=_highlightDefaultActionButton - In the implementation block
@property (assign,nonatomic) double stretchedWidth;                                                    //@synthesize stretchedWidth=_stretchedWidth - In the implementation block
@property (nonatomic,readonly) double defaultWidth;                                                    //@synthesize defaultWidth=_defaultWidth - In the implementation block
@property (assign,nonatomic) long long backgroundMaterialRecipe;                                       //@synthesize backgroundMaterialRecipe=_backgroundMaterialRecipe - In the implementation block
@property (nonatomic,readonly) BOOL shouldPerformDefaultAction; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                   //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * materialGroupNameBase;                                           //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
+(id)_actionButtonDescriptionsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3 ;
+(id)_openButtonDescriptionForNotificationRequest:(id)arg1 cell:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSString *)materialGroupNameBase;
-(UIView *)clippingView;
-(void)layoutSubviews;
-(BOOL)shouldPerformDefaultAction;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)defaultWidth;
-(void)setClippingView:(UIView *)arg1 ;
-(long long)backgroundMaterialRecipe;
-(void)setBackgroundMaterialRecipe:(long long)arg1 ;
-(void)setHighlightDefaultActionButton:(BOOL)arg1 ;
-(void)configureOpenActionButtonForNotificationRequest:(id)arg1 cell:(id)arg2 ;
-(void)configureCellActionButtonsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3 ;
-(void)setStretchedWidth:(double)arg1 ;
-(void)_configureClippingViewIfNecessary;
-(void)_configureButtonsStackViewIfNecessary;
-(void)_layoutButtonsStackView;
-(void)_layoutClippingView;
-(void)_configureActionButtonsForActionButtonDescriptions:(id)arg1 cell:(id)arg2 ;
-(double)_maxAllowedButtonWidth;
-(BOOL)_shouldVerticallyStackButtons;
-(unsigned long long)_widthMultipleForVerticallyStackedButtonsWithCount:(unsigned long long)arg1 ;
-(void)setDefaultActionButton:(NCNotificationListCellActionButton *)arg1 ;
-(UIStackView *)buttonsStackView;
-(void)_configureDefaultWidth;
-(NCNotificationListCellActionButton *)defaultActionButton;
-(void)_hideNonDefaultActionButtons;
-(void)_revealNonDefaultActionButtons;
-(double)stretchedWidth;
-(void)_performNonDefaultActionButtonsHideRevealAnimation:(/*^block*/id)arg1 ;
-(void)_actuateFeedbackForDefaultActionLockedIfNecessary;
-(void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
-(_UIStatesFeedbackGenerator *)defaultActionFeedbackGenerator;
-(void)_configureDefaultActionFeedbackIfNecessary;
-(BOOL)didPlayHaptic;
-(void)setDidPlayHaptic:(BOOL)arg1 ;
-(BOOL)highlightDefaultActionButton;
-(void)setButtonsStackView:(UIStackView *)arg1 ;
-(void)setDefaultActionFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
@end

