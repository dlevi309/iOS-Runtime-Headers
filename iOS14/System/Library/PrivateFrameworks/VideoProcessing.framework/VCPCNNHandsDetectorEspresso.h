/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNHandsDetector.h>

@class NSArray, VCPCNNModelEspresso;

@interface VCPCNNHandsDetectorEspresso : VCPCNNHandsDetector {

	int _maxNumRegions;
	float* _inputData;
	NSArray* _outputNames;
	VCPCNNModelEspresso* _modelEspresso;

}
-(int)updateModelWithResConfig:(id)arg1 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)createModelWithResConfig:(id)arg1 ;
-(id)initWithMaxNumRegions:(int)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 inputConfig:(id)arg4 ;
-(int)generateHandsBoxes:(id)arg1 ;
-(void)dealloc;
@end

