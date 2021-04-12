/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                  //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
+(double)minimumViewHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_labelFont;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)_updateAlpha;
-(BOOL)adjustsFontForContentSizeCategory;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(void)setForceRevealed:(BOOL)arg1 ;
-(void)setRevealPercentage:(double)arg1 ;
-(double)revealPercentage;
-(BOOL)isForceRevealed;
-(void)setHintingAlpha:(double)arg1 ;
-(void)_configureRevealHintTitleIfNecessary;
-(void)_layoutRevealHintTitle;
-(SBUILegibilityLabel *)revealHintTitle;
-(double)_alphaValueBasedOnRevealPercentage;
-(double)_hintTitleDisplacementForRevealPercentage:(double)arg1 ;
-(double)hintingAlpha;
-(void)setRevealHintTitle:(SBUILegibilityLabel *)arg1 ;
@end

