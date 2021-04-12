/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@interface WFFloatingViewConfiguration : NSObject {

	BOOL _usePillCornerRadius;
	BOOL _colorizesShadow;
	float _shadowOpacity;
	long long _gradientDirection;
	double _cornerRadius;
	double _shadowRadius;
	double _scalingFactor;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) long long gradientDirection;              //@synthesize gradientDirection=_gradientDirection - In the implementation block
@property (assign,nonatomic) BOOL usePillCornerRadius;                 //@synthesize usePillCornerRadius=_usePillCornerRadius - In the implementation block
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) float shadowOpacity;                      //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                      //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowRadius;                      //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) BOOL colorizesShadow;                     //@synthesize colorizesShadow=_colorizesShadow - In the implementation block
@property (assign,nonatomic) double scalingFactor;                     //@synthesize scalingFactor=_scalingFactor - In the implementation block
+(id)lightMaterialWorkflowConfiguration;
+(id)darkMaterialWorkflowConfiguration;
+(id)widgetWorkflowConfiguration;
+(id)bannerImageConfiguration;
+(id)paletteColorConfiguration;
-(id)init;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setShadowOpacity:(float)arg1 ;
-(double)cornerRadius;
-(float)shadowOpacity;
-(long long)gradientDirection;
-(void)setGradientDirection:(long long)arg1 ;
-(double)scalingFactor;
-(void)setScalingFactor:(double)arg1 ;
-(BOOL)colorizesShadow;
-(void)setColorizesShadow:(BOOL)arg1 ;
-(BOOL)usePillCornerRadius;
-(void)setUsePillCornerRadius:(BOOL)arg1 ;
@end

