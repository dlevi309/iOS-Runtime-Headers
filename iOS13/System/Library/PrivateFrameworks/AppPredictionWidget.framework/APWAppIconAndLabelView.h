/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
*/

#import <AppPredictionWidget/AppPredictionWidget-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIButton, UILabel, UITraitCollection, NSString, UIView;

@interface APWAppIconAndLabelView : UIControl {

	UIButton* _iconButton;
	UILabel* _label;
	UITraitCollection* _iconLabelTraitCollection;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) UIView * iconView; 
@property (nonatomic,readonly) UITraitCollection * iconLabelTraitCollection;              //@synthesize iconLabelTraitCollection=_iconLabelTraitCollection - In the implementation block
+(id)_attributedStringForAppName:(id)arg1 font:(id)arg2 bounds:(CGRect)arg3 minimumLetterSpacing:(double)arg4 ;
+(id)labelFontForTraitCollection:(id)arg1 ;
+(double)caption2BodyLeadingForTraitCollection:(id)arg1 ;
+(double)baselineOffsetMultipleForTraitCollection:(id)arg1 ;
+(double)fontSizeForTraitCollection:(id)arg1 ;
+(CGSize)sizeForTraitCollection:(id)arg1 ;
+(double)heightToLabelBaselineForTraitCollection:(id)arg1 ;
+(void)_applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(UIView *)iconView;
-(id)initWithTraitCollection:(id)arg1 ;
-(void)_iconButtonTapped:(id)arg1 ;
-(id)_iconButtonView;
-(UITraitCollection *)iconLabelTraitCollection;
@end

