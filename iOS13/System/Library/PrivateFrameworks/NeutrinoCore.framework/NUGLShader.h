/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(long long)type;
-(NSString *)source;
-(void)delete;
-(void)generate:(id)arg1 ;
-(id)initWithType:(long long)arg1 source:(id)arg2 ;
-(unsigned)glType;
-(unsigned)glStage;
-(BOOL)compile:(id)arg1 error:(out id*)arg2 ;
-(void)_compile:(id)arg1 ;
@end

