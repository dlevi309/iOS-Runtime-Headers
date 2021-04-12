/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLPlatterHeaderContentView.h>

@interface PLExpandedPlatterHeaderContentView : PLPlatterHeaderContentView
-(void)setDate:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setDateFormatStyle:(long long)arg1 ;
-(void)_layoutUtilityButtonWithScale:(double)arg1 ;
-(double)_iconDimension;
-(double)_iconLeadingPadding;
-(void)setDateAllDay:(BOOL)arg1 ;
-(double)_headerHeightForWidth:(double)arg1 ;
-(id)_newIconButton;
-(void)_configureIconButton:(id)arg1 withIcon:(id)arg2 ;
-(double)_iconTrailingPadding;
-(void)_configureDateLabel;
-(void)_layoutDateLabelWithScale:(double)arg1 ;
-(void)_layoutTitleLabelWithScale:(double)arg1 ;
-(void)_updateStylingForTitleLabel:(id)arg1 ;
-(void)_updateUtilityButtonFont;
-(void)_configureUtilityButton;
-(double)_largeTextLabelBaselineOffsetFromBottom;
-(CGRect)_titleLabelBoundsForSize:(CGSize)arg1 ;
-(id)_ellipsisHighlightedBackgroundImage;
-(void)_updateUtilityButtonVibrantStyling;
-(double)_largeTextTitleLabelBaselineOffset;
-(double)_titleFirstLineCenterY;
@end

