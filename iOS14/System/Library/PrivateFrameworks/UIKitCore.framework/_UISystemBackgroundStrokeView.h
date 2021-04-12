/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UISystemBackgroundStrokeView : UIView {

	BOOL _useContinuousCurve;
	double _strokeWidth;
	double _strokeCornerRadius;
	UIColor* _strokeColor;
	unsigned long long _maskedCorners;

}

@property (assign,nonatomic) double strokeWidth;                            //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign,nonatomic) double strokeCornerRadius;                     //@synthesize strokeCornerRadius=_strokeCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                         //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;              //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,nonatomic) BOOL useContinuousCurve;                       //@synthesize useContinuousCurve=_useContinuousCurve - In the implementation block
-(UIColor *)strokeColor;
-(unsigned long long)maskedCorners;
-(void)drawRect:(CGRect)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(double)strokeWidth;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(double)strokeCornerRadius;
-(void)updateLayerOrRedraw;
-(BOOL)drawsStrokeManually;
-(void)setStrokeCornerRadius:(double)arg1 ;
-(void)setUseContinuousCurve:(BOOL)arg1 ;
-(BOOL)useContinuousCurve;
-(void)setStrokeWidth:(double)arg1 ;
@end

