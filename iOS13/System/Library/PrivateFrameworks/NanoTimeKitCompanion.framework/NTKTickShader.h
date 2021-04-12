/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <SpriteKit/SKShader.h>

@class SKUniform, UIColor;

@interface NTKTickShader : SKShader {

	SKUniform* _filterUniform;
	SKUniform* _backgroundColorUniform;
	double _tickWidth;
	double _filterWidth;
	UIColor* _backgroundColor;

}

@property (nonatomic,readonly) double tickWidth;                     //@synthesize tickWidth=_tickWidth - In the implementation block
@property (nonatomic,readonly) double filterWidth;                   //@synthesize filterWidth=_filterWidth - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)shaderWithTickWidth:(float)arg1 filterWidth:(float)arg2 ;
-(id)init;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithTickWidth:(float)arg1 filterWidth:(float)arg2 ;
-(double)tickWidth;
-(double)filterWidth;
@end

