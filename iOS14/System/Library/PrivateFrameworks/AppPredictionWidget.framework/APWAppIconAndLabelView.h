/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(CGSize)sizeForTraitCollection:(id)arg1 ;
+(id)labelFontForTraitCollection:(id)arg1 ;
+(double)baselineOffsetMultipleForTraitCollection:(id)arg1 ;
+(id)_attributedStringForAppName:(id)arg1 font:(id)arg2 bounds:(CGRect)arg3 minimumLetterSpacing:(double)arg4 ;
+(double)fontSizeForTraitCollection:(id)arg1 ;
+(void)_applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3 ;
+(double)caption2BodyLeadingForTraitCollection:(id)arg1 ;
+(double)heightToLabelBaselineForTraitCollection:(id)arg1 ;
-(id)accessibilityLabel;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(BOOL)isAccessibilityElement;
-(void)_iconButtonTapped:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)_iconButtonView;
-(UITraitCollection *)iconLabelTraitCollection;
-(unsigned long long)accessibilityTraits;
-(UIView *)iconView;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithTraitCollection:(id)arg1 ;
@end

