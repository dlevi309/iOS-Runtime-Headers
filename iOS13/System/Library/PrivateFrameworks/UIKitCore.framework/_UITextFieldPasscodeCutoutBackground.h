/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextFieldBackgroundView.h>

@class CAShapeLayer, UIBezierPath;

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {

	BOOL _customStrokeColor;
	BOOL _customFillColor;
	CAShapeLayer* _lighteningOutline;
	double _outlineAlpha;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIBezierPath * customPath; 
@property (assign,nonatomic) double outlineAlpha; 
+(Class)layerClass;
+(id)_strokeColor:(BOOL)arg1 ;
+(id)_fillColor:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)fillColor;
-(double)cornerRadius;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_fillColor:(BOOL)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(id)_shapeLayer;
-(id)strokeColor;
-(void)_updatePath;
-(void)setLineWidth:(double)arg1 updatePath:(BOOL)arg2 ;
-(double)_pathInset;
-(void)_updateLightingOutlinePath;
-(UIBezierPath *)customPath;
-(void)setOutlineAlpha:(double)arg1 ;
-(double)outlineAlpha;
@end

