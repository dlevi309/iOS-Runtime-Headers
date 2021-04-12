/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCLegibilitySettingsAdjusting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class NSString, SBUILegibilityLabel, _UILegibilitySettings, BSUIFontProvider;

@interface NCNotificationListHeaderTitleView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {

	BOOL _adjustsFontForContentSizeCategory;
	BOOL _primary;
	NSString* _preferredContentSizeCategory;
	NSString* _title;
	SBUILegibilityLabel* _titleLabel;
	_UILegibilitySettings* _legibilitySettings;
	BSUIFontProvider* _fontProvider;

}

@property (nonatomic,retain) SBUILegibilityLabel * titleLabel;                                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (setter=_setFontProvider:,getter=_fontProvider,nonatomic,retain) BSUIFontProvider * fontProvider;              //@synthesize fontProvider=_fontProvider - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                             //@synthesize title=_title - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                                              //@synthesize primary=_primary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                     //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                      //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(SBUILegibilityLabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_labelFont;
-(void)setTitleLabel:(SBUILegibilityLabel *)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(BOOL)isPrimary;
-(void)setPrimary:(BOOL)arg1 ;
-(void)_invalidateTitleLabel;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)_configureTitleLabelIfNecessary;
-(void)_layoutTitleLabel;
-(id)_fontProvider;
-(void)_setFontProvider:(id)arg1 ;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
@end

