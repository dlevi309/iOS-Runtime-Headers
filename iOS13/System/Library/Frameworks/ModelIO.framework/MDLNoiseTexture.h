/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/MDLTexture.h>

@interface MDLNoiseTexture : MDLTexture {

	BOOL _vectorNoise;
	float _smoothness;
	BOOL _grayScale;
	float _frequency;
	int _noiseMode;

}
-(id)generateDataAtLevel:(long long)arg1 ;
-(id)_generateCellularNoiseAtLevel:(long long)arg1 ;
-(id)initVectorNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 ;
-(id)initScalarNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(BOOL)arg5 ;
-(id)initCellularNoiseWithFrequency:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 ;
@end

