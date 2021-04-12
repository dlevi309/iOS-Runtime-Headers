/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNHandsDetector.h>

@class NSString, NSArray, VCPCNNModelEspresso;

@interface VCPCNNHandsDetectorEspresso : VCPCNNHandsDetector {

	int _maxNumRegions;
	float* _inputData;
	NSString* _resConfig;
	NSArray* _outputNames;
	vector<float *, std::__1::allocator<float *> >* _outputsData;
	VCPCNNModelEspresso* _modelEspresso;

}
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)generateHandsBoxes:(id)arg1 ;
@end

