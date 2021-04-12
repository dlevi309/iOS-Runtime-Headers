/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface CEKEdgeGradientView : UIView {

	long long _edgeGradientStyle;
	UIColor* _customEdgeGradientColor;
	long long _gradientDirection;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _gradientDimensions;

}

@property (nonatomic,readonly) long long edgeGradientStyle;                    //@synthesize edgeGradientStyle=_edgeGradientStyle - In the implementation block
@property (nonatomic,readonly) UIColor * customEdgeGradientColor;              //@synthesize customEdgeGradientColor=_customEdgeGradientColor - In the implementation block
@property (assign,nonatomic) long long gradientDirection;                      //@synthesize gradientDirection=_gradientDirection - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double outerColorLength; 
@property (assign,nonatomic) double innerFadeLength; 
@property (assign,nonatomic) UIEdgeInsets gradientDimensions;                  //@synthesize gradientDimensions=_gradientDimensions - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(long long)gradientDirection;
-(void)setGradientDirection:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setGradientDimensions:(UIEdgeInsets)arg1 ;
-(void)setEdgeGradientStyleMask;
-(void)setCustomEdgeGradientStyleWithColor:(id)arg1 ;
-(long long)edgeGradientStyle;
-(UIColor *)customEdgeGradientColor;
-(UIEdgeInsets)gradientDimensions;
-(double)outerColorLength;
-(void)setOuterColorLength:(double)arg1 ;
-(double)innerFadeLength;
-(void)setInnerFadeLength:(double)arg1 ;
-(void)setEdgeGradientStyleBlack;
@end

