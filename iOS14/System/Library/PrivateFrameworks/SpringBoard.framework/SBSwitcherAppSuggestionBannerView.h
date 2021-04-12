/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <PlatterKit/PLPlatterView.h>

@class SBBestAppSuggestion, UIImageView, UILabel, UIView;

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView {

	SBBestAppSuggestion* _suggestion;
	UIImageView* _iconView;
	UILabel* _appLabel;
	UILabel* _descriptionLabel;
	unsigned long long _style;
	BOOL _highlighted;
	UIView* _highlightDarkeningView;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) SBBestAppSuggestion * representedAppSuggestion; 
@property (nonatomic,readonly) unsigned long long style;                                    //@synthesize style=_style - In the implementation block
-(id)_titleFont;
-(id)_descriptionFont;
-(id)initWithRecipe:(long long)arg1 ;
-(BOOL)isHighlighted;
-(id)_textStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)style;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_configureConstraints;
-(id)initWithFrame:(CGRect)arg1 appSuggestion:(id)arg2 style:(unsigned long long)arg3 ;
-(void)_createAppLabelForSuggestion:(id)arg1 ;
-(void)_createIconViewForSuggestion:(id)arg1 ;
-(void)_createDescriptionLabelForSuggestion:(id)arg1 ;
-(void)_createDarkeningView;
-(void)_updateAppearanceForCurrentUserInterfaceStyle;
-(BOOL)_isSingleLine;
-(id)_appTitleForSuggestion:(id)arg1 ;
-(id)_firstWakeGreetingString;
-(id)_descriptionStringForSuggestion:(id)arg1 ;
-(id)_iconImageFromAppWithBundleIdentifier:(id)arg1 withIconImageCache:(id)arg2 ;
-(SBBestAppSuggestion *)representedAppSuggestion;
-(id)_meCardShortName;
@end

