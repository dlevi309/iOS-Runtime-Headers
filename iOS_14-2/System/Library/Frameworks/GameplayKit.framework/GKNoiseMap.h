/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


@class NSDictionary;

@interface GKNoiseMap : NSObject {

	float* _map;
	BOOL _seamless;
	 _sampleCount;
	NSDictionary* _gradientColors;
	 _size;
	 _origin;

}

@property (nonatomic,copy) NSDictionary * gradientColors;                    //@synthesize gradientColors=_gradientColors - In the implementation block
@property (nonatomic,readonly)  size;                                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly)  origin;                                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly)  sampleCount;                                 //@synthesize sampleCount=_sampleCount - In the implementation block
@property (getter=isSeamless,nonatomic,readonly) BOOL seamless;              //@synthesize seamless=_seamless - In the implementation block
+(id)noiseMapWithNoise:(id)arg1 ;
+(id)noiseMapWithNoise:(id)arg1 size:(BOOL)arg2 ;
-()origin;
-(id)init;
-()size;
-()sampleCount;
-(NSDictionary *)gradientColors;
-(void)setGradientColors:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)initWithNoise:(id)arg1 ;
-(id)initWithNoise:(id)arg1 size:(BOOL)arg2 ;
-(int)mapIndexX:(int)arg1 y:(int)arg2 ;
-(id)__colorData;
-(float)valueAtPosition:;
-(float)interpolatedValueAtPosition:;
-(void)setValue:(float)arg1 ;
-(BOOL)isSeamless;
@end

