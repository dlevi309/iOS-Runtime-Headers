/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSString;

@interface TSDGLShaderQualifier : NSObject {

	int _uniformLocation;
	BOOL _needsUpdate;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL needsUpdate;               //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) int uniformLocation;              //@synthesize uniformLocation=_uniformLocation - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)needsUpdate;
-(void)setGLUniformWithShader:(id)arg1 ;
-(void)setGLUniformCheckWithShader:(id)arg1 ;
-(void)updateUniformLocationWithShaderProgramObject:(int)arg1 ;
-(int)uniformLocation;
-(void)setUniformLocation:(int)arg1 ;
@end

