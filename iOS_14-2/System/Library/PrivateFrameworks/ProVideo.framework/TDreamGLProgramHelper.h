/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)link;
-(void)use;
-(BOOL)initialized;
-(void)addAttribute:(id)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned)uniformIndex:(id)arg1 ;
-(BOOL)compileShader:(unsigned*)arg1 type:(unsigned)arg2 string:(id)arg3 ;
-(id)logForOpenGLObject:(unsigned)arg1 infoCallback:(/*function pointer*/void*)arg2 logFunc:(/*function pointer*/void*)arg3 ;
-(id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2 ;
-(unsigned)attributeIndex:(id)arg1 ;
-(id)vertexShaderLog;
-(id)fragmentShaderLog;
-(id)programLog;
@end

