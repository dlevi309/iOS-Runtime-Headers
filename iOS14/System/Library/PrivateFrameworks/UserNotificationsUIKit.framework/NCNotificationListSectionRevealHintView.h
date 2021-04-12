/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCLegibilitySettingsAdjusting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class SBUILegibilityLabel, _UILegibilitySettings, NSString;

@interface NCNotificationListSectionRevealHintView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {

	BOOL _adjustsFontForContentSizeCategory;
	BOOL _forceRevealed;
	double _revealPercentage;
	SBUILegibilityLabel* _revealHintTitle;
	double _hintingAlpha;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) SBUILegibilityLabel * revealHintTitle;                   //@synthesize revealHintTitle=_revealHintTitle - In the implementation block
@property (assign,nonatomic) double hintingAlpha;                                     //@synthesize hintingAlpha=_hintingAlpha - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double revealPercentage;                                 //@synthesize revealPercentage=_revealPercentage - In the implementation block
@property (assign,getter=isForceRevealed,nonatomic) BOOL forceRevealed;               //@synthesize forceRevealed=_forceRevealed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                  //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(double)minimumViewHeight;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setRevealPercentage:(double)arg1 ;
-(double)revealPercentage;
-(BOOL)adjustsFontForContentSizeCategory;
-(double)_alphaValueBasedOnRevealPercentage;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(double)hintingAlpha;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(double)_hintTitleDisplacementForRevealPercentage:(double)arg1 ;
-(void)_updateAlpha;
-(void)setRevealHintTitle:(SBUILegibilityLabel *)arg1 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)isForceRevealed;
-(void)setHintingAlpha:(double)arg1 ;
-(void)_layoutRevealHintTitle;
-(SBUILegibilityLabel *)revealHintTitle;
-(id)_labelFont;
-(void)setForceRevealed:(BOOL)arg1 ;
-(void)_configureRevealHintTitleIfNecessary;
@end

