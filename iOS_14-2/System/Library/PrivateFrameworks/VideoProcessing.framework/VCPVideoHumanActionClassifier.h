/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class VCPCNNModelEspresso, NSString, VCPHumanPoseImageRequest, NSMutableArray;

@interface VCPVideoHumanActionClassifier : VCPVideoAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;
	NSString* _resConfig;
	int _inputWidth;
	int _inputHeight;
	int _inputChannels;
	int _inputSize;
	NSString* _action;
	float _confidence;
	VCPHumanPoseImageRequest* _poseRequest;
	NSMutableArray* _bodyArray;
	BOOL _valid;
	NSMutableArray* _results;
	NSMutableArray* _keyPersonResults;

}
-(id)results;
-(id)init;
-(int)detect;
-(int)createModel;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC7)arg1 ;
-(id)privateResults;
-(int)prepareData:(id)arg1 ;
-(id)keypointsFromObservations:(id)arg1 ;
-(id)analyzeBodyArray:(id)arg1 ;
-(void)dealloc;
@end

