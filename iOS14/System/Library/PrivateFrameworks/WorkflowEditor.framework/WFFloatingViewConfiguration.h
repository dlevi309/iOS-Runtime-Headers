/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(void)setShadowOffset:(CGSize)arg1 ;
-(double)shadowRadius;
-(id)init;
-(float)shadowOpacity;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOpacity:(float)arg1 ;
-(double)scalingFactor;
-(long long)gradientDirection;
-(void)setGradientDirection:(long long)arg1 ;
-(double)cornerRadius;
-(void)setScalingFactor:(double)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setUsePillCornerRadius:(BOOL)arg1 ;
-(BOOL)colorizesShadow;
-(void)setColorizesShadow:(BOOL)arg1 ;
-(BOOL)usePillCornerRadius;
@end

