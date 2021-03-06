/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamZoomOutFX : TDreamProgramWrapper {

	int aspectRatioUniform;
	int radiusUniform;
	int centerUniform;
	int scaleUniform;
	int rotacionUniform;
	int _rotacion;
	double _aspectRatio;
	double _radius;
	double _scale;
	CGPoint _center;

}

@property (assign,nonatomic) double aspectRatio;              //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) CGPoint center;                  //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) int rotacion;                    //@synthesize rotacion=_rotacion - In the implementation block
@property (assign,nonatomic) double radius;                   //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double scale;                    //@synthesize scale=_scale - In the implementation block
-(void)setRadius:(double)arg1 ;
-(CGPoint)center;
-(id)init;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(double)aspectRatio;
-(double)radius;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setAspectRatio:(double)arg1 ;
-(void)setUniforms;
-(void)setRotacion:(int)arg1 ;
-(void)adjustAspectRatio;
-(int)rotacion;
@end

