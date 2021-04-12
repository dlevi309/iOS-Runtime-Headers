/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@class NSString, NCNotificationAction, BSUIFontProvider, UILabel, MTMaterialView;

@interface NCNotificationListCellActionButton : UIControl <PLContentSizeCategoryAdjusting, MTMaterialGrouping> {

	BOOL _adjustsFontForContentSizeCategory;
	NSString* _preferredContentSizeCategory;
	NSString* _materialGroupNameBase;
	NCNotificationAction* _notificationAction;
	NSString* _title;
	long long _backgroundMaterialRecipe;
	BSUIFontProvider* _fontProvider;
	UILabel* _titleLabel;
	MTMaterialView* _backgroundView;

}

@property (setter=_setFontProvider:,getter=_fontProvider,nonatomic,retain) BSUIFontProvider * fontProvider;              //@synthesize fontProvider=_fontProvider - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;                                                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NCNotificationAction * notificationAction;                                                  //@synthesize notificationAction=_notificationAction - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long backgroundMaterialRecipe;                                                         //@synthesize backgroundMaterialRecipe=_backgroundMaterialRecipe - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                     //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                      //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase;                                                             //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(MTMaterialView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)_updateTitleLabelFont;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureTitleLabelIfNecessary;
-(void)_layoutTitleLabel;
-(id)_fontProvider;
-(void)_setFontProvider:(id)arg1 ;
-(void)_handleHoverGestureRecognizerEvent:(id)arg1 ;
-(void)_highlightButton:(id)arg1 ;
-(void)_unHighlightButton:(id)arg1 ;
-(void)_layoutBackgroundView;
-(long long)_wordCountForText:(id)arg1 ;
-(void)_configureTitleLabelEffects;
-(NCNotificationAction *)notificationAction;
-(void)setNotificationAction:(NCNotificationAction *)arg1 ;
-(long long)backgroundMaterialRecipe;
-(void)setBackgroundMaterialRecipe:(long long)arg1 ;
@end

