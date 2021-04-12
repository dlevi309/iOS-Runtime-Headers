/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringLabel.h>

@class CLKUICurvedLabel, UIView;

@interface NTKCurvedColoringLabel : NTKColoringLabel {

	CLKUICurvedLabel* _curvedLabel;

}

@property (assign,nonatomic) double circleRadius; 
@property (assign,nonatomic) BOOL interior; 
@property (assign,nonatomic) double centerAngle; 
@property (assign,nonatomic) double maxAngularWidth; 
@property (nonatomic,readonly) CGRect textBoundingRect; 
@property (assign,nonatomic) unsigned long long imagePlacement; 
@property (assign,nonatomic) double imagePadding; 
@property (assign,nonatomic,__weak) UIView * imageView; 
-(void)setTracking:(double)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(id)attributedText;
-(id)textColor;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(UIView *)imageView;
-(void)setFont:(id)arg1 ;
-(double)maxWidth;
-(double)alpha;
-(id)color;
-(void)setText:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)interior;
-(void)setFrame:(CGRect)arg1 ;
-(void)setColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(void)invalidateCachedSize;
-(void)setInterior:(BOOL)arg1 ;
-(void)setCircleRadius:(double)arg1 ;
-(void)setCenterAngle:(double)arg1 ;
-(void)setMaxAngularWidth:(double)arg1 ;
-(CGRect)textBoundingRect;
-(double)circleRadius;
-(double)centerAngle;
-(double)maxAngularWidth;
-(void)sizeToFit;
-(void)setAlpha:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMaxWidth:(double)arg1 ;
-(long long)numberOfLines;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(id)font;
-(void)setImagePadding:(double)arg1 ;
-(double)imagePadding;
-(void)setTextProviderFont:(id)arg1 ;
-(void)setUsesTextProviderTintColoring:(BOOL)arg1 ;
-(void)_setAnimationAlpha:(double)arg1 ;
-(void)_setUpSnapshot;
-(id)textProviderFont;
-(BOOL)isTextTruncated;
-(void)setImagePlacement:(unsigned long long)arg1 ;
-(unsigned long long)imagePlacement;
-(void)setImageView:(id)arg1 placement:(unsigned long long)arg2 padding:(double)arg3 ;
-(void)getTextCenter:(CGPoint*)arg1 startAngle:(double*)arg2 endAngle:(double*)arg3 ;
@end

