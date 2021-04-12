/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNModelEspresso, NSArray, NSString, NSMutableArray;

@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	NSArray* _inputNames;
	vector<float *, std::__1::allocator<float *> >* _inputsData;
	NSString* _resConfig;
	NSMutableArray* _results;

}
-(id)init;
-(void)dealloc;
-(int)createModel;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChannels:(int)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)analyzeImages:(CVBufferRef)arg1 secondImage:(CVBufferRef)arg2 moflow:(float*)arg3 cancel:(/*^block*/id)arg4 ;
@end

