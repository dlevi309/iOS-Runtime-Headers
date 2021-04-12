/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

