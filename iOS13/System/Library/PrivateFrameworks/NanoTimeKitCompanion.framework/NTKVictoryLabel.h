/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringLabel.h>

@class UIColor;

@interface NTKVictoryLabel : NTKColoringLabel {

	BOOL _requiresDrawingRectAdjustments;
	double _additionalPaddingInsets;
	UIColor* _outlineColor;
	double _outlineAlpha;
	NTKVictoryLabel* _outlineLabel;
	CGVector _drawingRectOffset;

}

@property (nonatomic,retain) NTKVictoryLabel * outlineLabel;                   //@synthesize outlineLabel=_outlineLabel - In the implementation block
@property (assign,nonatomic) BOOL requiresDrawingRectAdjustments;              //@synthesize requiresDrawingRectAdjustments=_requiresDrawingRectAdjustments - In the implementation block
@property (assign,nonatomic) double additionalPaddingInsets;                   //@synthesize additionalPaddingInsets=_additionalPaddingInsets - In the implementation block
@property (assign,nonatomic) CGVector drawingRectOffset;                       //@synthesize drawingRectOffset=_drawingRectOffset - In the implementation block
@property (nonatomic,retain) UIColor * outlineColor;                           //@synthesize outlineColor=_outlineColor - In the implementation block
@property (assign,nonatomic) double outlineAlpha;                              //@synthesize outlineAlpha=_outlineAlpha - In the implementation block
+(id)victoryFontWithSize:(double)arg1 style:(unsigned long long)arg2 monospacedNumbers:(BOOL)arg3 ;
+(id)victoryFontWithSize:(double)arg1 style:(unsigned long long)arg2 ;
+(id)loadFonts:(double)arg1 style:(unsigned long long)arg2 monospacedNumbers:(BOOL)arg3 ;
+(id)fontDescriptorWithVictoryStyle:(unsigned long long)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setAttributedText:(id)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setOutlineAlpha:(double)arg1 ;
-(double)outlineAlpha;
-(UIColor *)outlineColor;
-(void)setOutlineColor:(UIColor *)arg1 ;
-(void)setAdditionalPaddingInsets:(double)arg1 ;
-(void)setDrawingRectOffset:(CGVector)arg1 ;
-(double)additionalPaddingInsets;
-(void)setFillColor:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_layoutOutlineLabelIfNeeded;
-(id)outlinedLabelAttributedStringFromAttributedString:(id)arg1 ;
-(void)_applyDrawingOffsetForTextIfNeeded:(id)arg1 ;
-(void)setOutlineColor:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)_shouldHideOutlineLabel;
-(NTKVictoryLabel *)outlineLabel;
-(CGVector)drawingRectOffset;
-(void)setOutlineLabel:(NTKVictoryLabel *)arg1 ;
-(BOOL)requiresDrawingRectAdjustments;
-(void)setRequiresDrawingRectAdjustments:(BOOL)arg1 ;
@end

