/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@interface TSDGLTextureParameter : NSObject {

	unsigned _pname;
	unsigned long long _paramCount;
	int* _intData;
	float* _floatData;

}
+(id)stringWithCurrentTextureParameters;
+(id)textureParameterWithPName:(unsigned)arg1 integerParameter:(int)arg2 ;
+(id)textureParameterWithPName:(unsigned)arg1 integerParameters:(int*)arg2 count:(unsigned long long)arg3 ;
+(id)textureParameterWithPName:(unsigned)arg1 floatParameter:(float)arg2 ;
+(id)textureParameterWithPName:(unsigned)arg1 floatParameters:(float*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)initWithPName:(unsigned)arg1 paramCount:(unsigned long long)arg2 intData:(int*)arg3 floatData:(float*)arg4 ;
-(void)setGLTextureParameter;
@end

