/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSString;

@interface NUGLShader : NUGLObject {

	long long _compilationStatus;
	NSError* _compilationError;
	long long _type;
	NSString* _source;

}

@property (readonly) unsigned glType; 
@property (readonly) unsigned glStage; 
@property (readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (readonly) NSString * source;              //@synthesize source=_source - In the implementation block
-(void)delete;
-(id)init;
-(unsigned)glType;
-(void)generate:(id)arg1 ;
-(long long)type;
-(unsigned)glStage;
-(NSString *)source;
-(id)initWithType:(long long)arg1 source:(id)arg2 ;
-(BOOL)compile:(id)arg1 error:(out id*)arg2 ;
-(void)_compile:(id)arg1 ;
@end

