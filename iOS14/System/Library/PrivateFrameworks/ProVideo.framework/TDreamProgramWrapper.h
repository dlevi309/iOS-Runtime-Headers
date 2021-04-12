/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class TDreamGLProgramHelper;

@interface TDreamProgramWrapper : NSObject {

	int sizeUniform;
	CGRect outputRect;
	TDreamGLProgramHelper* filterProgram;
	int filterPositionAttribute;
	int filterTextureCoordinateAttribute;
	int filterInputTextureUniform;
	float texCoord0[8];

}
-(id)init;
-(void)setSize:(CGSize)arg1 ;
-(void)initializeAttributes;
-(id)initWithFragmentShaderFromString:(id)arg1 ;
-(void)setUniforms;
-(void)setInputTexture0Rect:(CGRect)arg1 withinRect:(CGRect)arg2 ;
-(void)renderTo:(unsigned)arg1 from:(unsigned)arg2 ;
-(void)setOutputRect:(CGRect)arg1 ;
-(id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2 ;
-(void)initializeTexCoord0;
-(id)initWithProgram:(id)arg1 ;
-(id)getProgram;
@end

