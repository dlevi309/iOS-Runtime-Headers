/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)color;
-(double)alpha;
-(void)setBounds:(CGRect)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(UIView *)imageView;
-(id)font;
-(void)sizeToFit;
-(long long)numberOfLines;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(id)textColor;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(void)setTracking:(double)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(void)setImagePadding:(double)arg1 ;
-(double)imagePadding;
-(void)invalidateCachedSize;
-(void)setInterior:(BOOL)arg1 ;
-(void)setCircleRadius:(double)arg1 ;
-(void)setCenterAngle:(double)arg1 ;
-(void)setMaxAngularWidth:(double)arg1 ;
-(CGRect)textBoundingRect;
-(double)circleRadius;
-(BOOL)interior;
-(double)centerAngle;
-(double)maxAngularWidth;
-(unsigned long long)imagePlacement;
-(BOOL)isTextTruncated;
-(void)setImagePlacement:(unsigned long long)arg1 ;
-(void)setImageView:(id)arg1 placement:(unsigned long long)arg2 padding:(double)arg3 ;
-(void)getTextCenter:(CGPoint*)arg1 startAngle:(double*)arg2 endAngle:(double*)arg3 ;
-(void)setUsesTextProviderTintColoring:(BOOL)arg1 ;
-(void)setTextProviderFont:(id)arg1 ;
-(void)_setAnimationAlpha:(double)arg1 ;
-(void)_setUpSnapshot;
-(id)textProviderFont;
@end

