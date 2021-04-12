/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usesCPUOnly;
	unsigned long long _classifyTopK;
	unsigned long long _maxComputationBatchSize;

}

@property (assign) unsigned long long classifyTopK;                         //@synthesize classifyTopK=_classifyTopK - In the implementation block
@property (assign) BOOL useCPUOnly; 
@property (assign) unsigned long long maxComputationBatchSize;              //@synthesize maxComputationBatchSize=_maxComputationBatchSize - In the implementation block
@property (assign,nonatomic) BOOL usesCPUOnly;                              //@synthesize usesCPUOnly=_usesCPUOnly - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUsesCPUOnly:(BOOL)arg1 ;
-(id)initWithUseCPUOnly:(BOOL)arg1 ;
-(BOOL)useCPUOnly;
-(void)setUseCPUOnly:(BOOL)arg1 ;
-(BOOL)usesCPUOnly;
-(void)setUsesCPUOnly:(BOOL)arg1 ;
-(unsigned long long)classifyTopK;
-(void)setClassifyTopK:(unsigned long long)arg1 ;
-(unsigned long long)maxComputationBatchSize;
-(void)setMaxComputationBatchSize:(unsigned long long)arg1 ;
@end

