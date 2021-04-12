/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned)dataType;
-(void*)weights;
-(id)descriptor;
-(float*)biasTerms;
-(void)purge;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWith:(unsigned)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(void*)arg3 biasTerm:(float*)arg4 ;
@end

