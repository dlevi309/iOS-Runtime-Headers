/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNModelEspresso, NSArray, NSString, NSMutableArray;

@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	NSArray* _inputNames;
	vector<float *, std::__1::allocator<float *> >* _inputsData;
	int _srcWidth;
	int _srcHeight;
	int _cnnOutputWidth;
	int _cnnOutputHeight;
	NSString* _resConfig;
	NSMutableArray* _results;
	float* _flow;
	BOOL _flushModel;

}
+(id)sharedModel:(id)arg1 inputNames:(id)arg2 ;
-(id)init;
-(int)analyzeImages:(CVBufferRef)arg1 secondImage:(CVBufferRef)arg2 cancel:(/*^block*/id)arg3 ;
-(float*)getFlowWithHeight:(int*)arg1 andWidth:(int*)arg2 ;
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(int)creatModel;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChannels:(int)arg3 ;
-(int)prepareModelWithAspectRatio:(float)arg1 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(void)dealloc;
@end

