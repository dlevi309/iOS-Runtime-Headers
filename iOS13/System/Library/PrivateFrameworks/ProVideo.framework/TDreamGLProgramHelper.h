/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSMutableArray;

@interface TDreamGLProgramHelper : NSObject {

	NSMutableArray* attributes;
	NSMutableArray* uniforms;
	unsigned program;
	unsigned vertShader;
	unsigned fragShader;
	BOOL _initialized;

}

@property (assign,nonatomic) BOOL initialized;              //@synthesize initialized=_initialized - In the implementation block
-(void)dealloc;
-(BOOL)initialized;
-(void)use;
-(BOOL)link;
-(void)addAttribute:(id)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(unsigned)uniformIndex:(id)arg1 ;
-(BOOL)compileShader:(unsigned*)arg1 type:(unsigned)arg2 string:(id)arg3 ;
-(id)logForOpenGLObject:(unsigned)arg1 infoCallback:(/*function pointer*/void*)arg2 logFunc:(/*function pointer*/void*)arg3 ;
-(id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2 ;
-(unsigned)attributeIndex:(id)arg1 ;
-(id)vertexShaderLog;
-(id)fragmentShaderLog;
-(id)programLog;
@end

