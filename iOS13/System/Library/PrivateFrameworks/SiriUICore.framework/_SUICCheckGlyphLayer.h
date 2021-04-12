/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CAShapeLayer, CAGradientLayer, UIColor;

@interface _SUICCheckGlyphLayer : CALayer {

	CAShapeLayer* _checkPackageLayer;
	CAGradientLayer* _maskLayer;
	BOOL _covered;
	CATransform3D _uncoveredTransform;
	CATransform3D _coveredTransform;
	UIColor* _primaryColor;

}

@property (nonatomic,copy) UIColor * primaryColor;              //@synthesize primaryColor=_primaryColor - In the implementation block
@property (assign,nonatomic) BOOL revealed; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(void)layoutSublayers;
-(void)setRevealed:(BOOL)arg1 ;
-(void)_createMask;
-(double)_updateCovered:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)_pointScaleToMatchBoundsSize:(CGSize)arg1 ;
-(void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)setCovered:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)revealed;
@end

