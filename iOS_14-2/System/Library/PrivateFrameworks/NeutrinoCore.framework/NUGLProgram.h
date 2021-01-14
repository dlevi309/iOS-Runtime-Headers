/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)delete;
-(id)init;
-(NUGLShader *)shader;
-(NSDictionary *)attributes;
-(void)generate:(id)arg1 ;
-(void)_build:(id)arg1 ;
-(NSDictionary *)uniforms;
-(id)initWithShader:(id)arg1 ;
-(BOOL)build:(id)arg1 error:(out id*)arg2 ;
@end

