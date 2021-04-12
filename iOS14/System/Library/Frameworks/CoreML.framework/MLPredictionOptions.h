/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usesCPUOnly;
	unsigned long long _classifyTopK;
	NSDictionary* _outputBackings;
	NSDictionary* _automaticOutputBackingMode;
	unsigned long long _maxComputationBatchSize;

}

@property (assign) unsigned long long classifyTopK;                                //@synthesize classifyTopK=_classifyTopK - In the implementation block
@property (assign) BOOL useCPUOnly; 
@property (nonatomic,copy) NSDictionary * outputBackings;                          //@synthesize outputBackings=_outputBackings - In the implementation block
@property (nonatomic,copy) NSDictionary * automaticOutputBackingMode;              //@synthesize automaticOutputBackingMode=_automaticOutputBackingMode - In the implementation block
@property (assign) unsigned long long maxComputationBatchSize;                     //@synthesize maxComputationBatchSize=_maxComputationBatchSize - In the implementation block
@property (assign,nonatomic) BOOL usesCPUOnly;                                     //@synthesize usesCPUOnly=_usesCPUOnly - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(void)setOutputBackings:(NSDictionary *)arg1 ;
-(void)setMaxComputationBatchSize:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithUseCPUOnly:(BOOL)arg1 ;
-(void)setUseCPUOnly:(BOOL)arg1 ;
-(void)setAutomaticOutputBackingMode:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)automaticOutputBackingMode;
-(id)initWithUsesCPUOnly:(BOOL)arg1 ;
-(unsigned long long)classifyTopK;
-(unsigned long long)maxComputationBatchSize;
-(void)setClassifyTopK:(unsigned long long)arg1 ;
-(void)setUsesCPUOnly:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)usesCPUOnly;
-(BOOL)useCPUOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)outputBackings;
@end

