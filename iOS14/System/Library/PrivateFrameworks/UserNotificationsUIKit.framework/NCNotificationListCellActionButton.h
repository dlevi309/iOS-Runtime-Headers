/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                      //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                     //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * materialGroupNameBase;                                                             //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
-(UILabel *)titleLabel;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)_updateTitleLabelFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_fontProvider;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutTitleLabel;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(MTMaterialView *)backgroundView;
-(void)setTitle:(NSString *)arg1 ;
-(void)_configureTitleLabelIfNecessary;
-(NSString *)materialGroupNameBase;
-(void)_configureBackgroundViewIfNecessary;
-(void)layoutSubviews;
-(NSString *)preferredContentSizeCategory;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_handleHoverGestureRecognizerEvent:(id)arg1 ;
-(void)_setFontProvider:(id)arg1 ;
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

