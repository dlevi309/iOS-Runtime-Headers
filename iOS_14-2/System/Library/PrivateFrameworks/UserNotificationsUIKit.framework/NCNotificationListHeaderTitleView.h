/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                                      //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                     //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
-(BOOL)isPrimary;
-(SBUILegibilityLabel *)titleLabel;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setTitleLabel:(SBUILegibilityLabel *)arg1 ;
-(id)_fontProvider;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)_layoutTitleLabel;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)_configureTitleLabelIfNecessary;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)layoutSubviews;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_invalidateTitleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(id)_labelFont;
-(NSString *)title;
-(void)_setFontProvider:(id)arg1 ;
@end

