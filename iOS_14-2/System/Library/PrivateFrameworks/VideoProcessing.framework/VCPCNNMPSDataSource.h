/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class MPSCNNConvolutionDescriptor, NSString;

@interface VCPCNNMPSDataSource : NSObject <MPSCNNConvolutionDataSource> {

	unsigned _dataType;
	MPSCNNConvolutionDescriptor* _descriptor;
	void* _kernelWeights;
	float* _biasTerms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)dataType;
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)descriptor;
-(id)initWith:(unsigned)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(void*)arg3 biasTerm:(float*)arg4 ;
-(void*)weights;
-(float*)biasTerms;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
@end

