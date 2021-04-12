/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
*/

#import <AppleCVA/AppleCVA-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class MPSCNNConvolutionDescriptor, NSString;

@interface MPSConvWeights : NSObject <MPSCNNConvolutionDataSource> {

	unsigned _dataType;
	MPSCNNConvolutionDescriptor* _descriptor;
	void* _weights;
	float* _biasTerms;
	NSString* _label;

}

@property (assign) unsigned dataType;                                               //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,retain) MPSCNNConvolutionDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) void* weights;                                         //@synthesize weights=_weights - In the implementation block
@property (assign,nonatomic) float* biasTerms;                                      //@synthesize biasTerms=_biasTerms - In the implementation block
@property (nonatomic,retain) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned)dataType;
-(void*)weights;
-(void)setWeights:(void*)arg1 ;
-(MPSCNNConvolutionDescriptor *)descriptor;
-(float*)biasTerms;
-(void)purge;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setDescriptor:(MPSCNNConvolutionDescriptor *)arg1 ;
-(void)setDataType:(unsigned)arg1 ;
-(void)setBiasTerms:(float*)arg1 ;
@end

