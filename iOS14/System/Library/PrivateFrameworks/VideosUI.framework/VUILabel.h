/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/_TVLabel.h>
#import <libobjc.A.dylib/VUILabelBaselineProtocol.h>

@class VUITextLayout, NSString, UIColor;

@interface VUILabel : _TVLabel <VUILabelBaselineProtocol> {

	BOOL _selected;
	BOOL _lastSelectedOrHighlighted;
	VUITextLayout* _textLayout;
	NSString* _labelName;
	UIColor* _adjustmentModeNormalTintColor;

}

@property (nonatomic,retain) VUITextLayout * textLayout;                           //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) UIColor * adjustmentModeNormalTintColor;              //@synthesize adjustmentModeNormalTintColor=_adjustmentModeNormalTintColor - In the implementation block
@property (nonatomic,copy) NSString * labelName;                                   //@synthesize labelName=_labelName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labelWithString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 ;
+(id)labelWithAttributedString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tintColorDidChange;
-(void)_updateTextColor;
-(double)baselineOffsetFromBottom;
-(void)setLabelName:(NSString *)arg1 ;
-(VUITextLayout *)textLayout;
-(NSString *)labelName;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(double)baselineHeight;
-(void)_updateCompositingFilter;
-(unsigned long long)numberOfLinesRequiredForTextWidth:(double)arg1 ;
-(double)topMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(id)arg2 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(id)arg2 ;
-(void)setAdjustmentModeNormalTintColor:(UIColor *)arg1 ;
-(void)_updateTextColor:(BOOL)arg1 ;
-(BOOL)requiresMoreThanOneLineForTextWidth:(double)arg1 ;
-(void)revertTintColor;
-(UIColor *)adjustmentModeNormalTintColor;
-(BOOL)vui_showOnHighlight;
-(BOOL)vui_marqueeOnHighlight;
@end

