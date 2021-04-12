/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ClockKitUI/CLKUIQuad.h>

@protocol MTLBuffer, MTLRenderPipelineState;
@class NTKKaleidoscopeResourceManager, CLKUITexture;

@interface NTKKaleidoscopeQuad : CLKUIQuad {

	NTKKaleidoscopeResourceManager* _loader;
	id<MTLBuffer> _geomBuffer;
	id<MTLRenderPipelineState> _mtlPipelineOpaque;
	id<MTLRenderPipelineState> _mtlPipelineBlend;
	 _aspect;
	float _alpha;
	float _rotation;
	float _dialRadius;
	CLKUITexture* _primaryLumaTexture;
	CLKUITexture* _primaryChromaTexture;
	CLKUITexture* _secondaryTexture;
	unsigned long long _shaderType;
	 _sampleCenter;
	 _sampleRadius;

}

@property (nonatomic,retain) CLKUITexture * primaryLumaTexture;                //@synthesize primaryLumaTexture=_primaryLumaTexture - In the implementation block
@property (nonatomic,retain) CLKUITexture * primaryChromaTexture;              //@synthesize primaryChromaTexture=_primaryChromaTexture - In the implementation block
@property (nonatomic,retain) CLKUITexture * secondaryTexture;                  //@synthesize secondaryTexture=_secondaryTexture - In the implementation block
@property (nonatomic,readonly) unsigned long long shaderType;                  //@synthesize shaderType=_shaderType - In the implementation block
@property (assign,nonatomic) float alpha;                                      //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic)  sampleCenter;                                    //@synthesize sampleCenter=_sampleCenter - In the implementation block
@property (assign,nonatomic)  sampleRadius;                                    //@synthesize sampleRadius=_sampleRadius - In the implementation block
@property (assign,nonatomic) float rotation;                                   //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) float dialRadius;                                 //@synthesize dialRadius=_dialRadius - In the implementation block
+(id)quadWithShaderType:(unsigned long long)arg1 ;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(float)alpha;
-(CLKUITexture *)secondaryTexture;
-(void)setSecondaryTexture:(CLKUITexture *)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)purge;
-(void)dealloc;
-()sampleRadius;
-(void)setSampleRadius:;
-(void)setupForQuadView:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)setSampleCenter:;
-(void)setPrimaryLumaTexture:(CLKUITexture *)arg1 ;
-(void)setPrimaryChromaTexture:(CLKUITexture *)arg1 ;
-(void)setDialRadius:(float)arg1 ;
-(id)initWithShaderType:(unsigned long long)arg1 ;
-(id)mtlPipelineOpaque;
-(id)mtlPipelineBlend;
-(id)geomBuffer;
-(CLKUITexture *)primaryLumaTexture;
-()sampleCenter;
-(float)dialRadius;
-(CLKUITexture *)primaryChromaTexture;
-(unsigned long long)shaderType;
@end

