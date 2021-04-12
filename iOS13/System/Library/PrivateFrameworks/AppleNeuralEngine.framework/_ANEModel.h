/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/

#import <AppleNeuralEngine/AppleNeuralEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, _ANEProgramForEvaluation;

@interface _ANEModel : NSObject <NSCopying, NSSecureCoding> {

	char _queueDepth;
	os_unfair_lock_s _l;
	NSURL* _modelURL;
	NSString* _key;
	unsigned long long _string_id;
	unsigned long long _programHandle;
	unsigned long long _intermediateBufferHandle;
	NSDictionary* _modelAttributes;
	_ANEProgramForEvaluation* _program;

}

@property (nonatomic,retain) NSDictionary * modelAttributes;                           //@synthesize modelAttributes=_modelAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long programHandle;                         //@synthesize programHandle=_programHandle - In the implementation block
@property (assign,nonatomic) char queueDepth;                                          //@synthesize queueDepth=_queueDepth - In the implementation block
@property (assign,nonatomic) unsigned long long intermediateBufferHandle;              //@synthesize intermediateBufferHandle=_intermediateBufferHandle - In the implementation block
@property (assign,l,nonatomic) os_unfair_lock_s l;                                     //@synthesize l=_l - In the implementation block
@property (nonatomic,retain) _ANEProgramForEvaluation * program;                       //@synthesize program=_program - In the implementation block
@property (nonatomic,readonly) NSURL * modelURL;                                       //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long string_id;                           //@synthesize string_id=_string_id - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)modelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3 ;
+(id)modelAtURL:(id)arg1 key:(id)arg2 ;
+(id)sandboxExtensionPathsForModelURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(NSURL *)modelURL;
-(_ANEProgramForEvaluation *)program;
-(void)setProgram:(_ANEProgramForEvaluation *)arg1 ;
-(void)setL:(os_unfair_lock_s)arg1 ;
-(unsigned long long)programHandle;
-(unsigned long long)intermediateBufferHandle;
-(char)queueDepth;
-(void)setProgramHandle:(unsigned long long)arg1 ;
-(void)setIntermediateBufferHandle:(unsigned long long)arg1 ;
-(id)initWithModelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3 ;
-(void)setModelAttributes:(NSDictionary *)arg1 ;
-(void)setQueueDepth:(char)arg1 ;
-(NSDictionary *)modelAttributes;
-(void)updateModelAttributes:(id)arg1 ;
-(void)updateModelAttributes:(id)arg1 programHandle:(unsigned long long)arg2 intermediateBufferHandle:(unsigned long long)arg3 queueDepth:(char)arg4 ;
-(id)keyForBundleID:(id)arg1 ;
-(unsigned long long)string_id;
-(os_unfair_lock_s)l;
@end

