/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSDictionary, NUGLShader;

@interface NUGLProgram : NUGLObject {

	long long _buildStatus;
	NSError* _buildError;
	NSDictionary* _uniforms;
	NSDictionary* _attributes;
	NUGLShader* _shader;

}

@property (readonly) NUGLShader * shader;                    //@synthesize shader=_shader - In the implementation block
@property (readonly) NSDictionary * uniforms;                //@synthesize uniforms=_uniforms - In the implementation block
@property (readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)init;
-(NSDictionary *)attributes;
-(void)delete;
-(void)generate:(id)arg1 ;
-(NUGLShader *)shader;
-(NSDictionary *)uniforms;
-(id)initWithShader:(id)arg1 ;
-(BOOL)build:(id)arg1 error:(out id*)arg2 ;
-(void)_build:(id)arg1 ;
@end

