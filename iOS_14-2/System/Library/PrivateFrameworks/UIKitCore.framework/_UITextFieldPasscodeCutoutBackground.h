/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextFieldBackgroundView.h>

@class CAShapeLayer, UIBezierPath;

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {

	BOOL _hasCustomStrokeColor;
	BOOL _hasCustomFillColor;
	CAShapeLayer* _lighteningOutline;
	double _outlineAlpha;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIBezierPath * customPath; 
@property (assign,nonatomic) double outlineAlpha; 
+(id)_fillColor:(BOOL)arg1 ;
+(Class)layerClass;
+(id)_strokeColor:(BOOL)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(id)strokeColor;
-(double)lineWidth;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(id)_fillColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)fillColor;
-(void)setBounds:(CGRect)arg1 ;
-(double)cornerRadius;
-(id)_shapeLayer;
-(void)setFrame:(CGRect)arg1 ;
-(double)_pathInset;
-(void)setLineWidth:(double)arg1 updatePath:(BOOL)arg2 ;
-(double)outlineAlpha;
-(void)_updateLightingOutlinePath;
-(void)setOutlineAlpha:(double)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStrokeColor:(id)arg1 ;
-(UIBezierPath *)customPath;
-(void)setCornerRadius:(double)arg1 ;
-(void)_updatePath;
-(id)_strokeColor:(BOOL)arg1 ;
@end

