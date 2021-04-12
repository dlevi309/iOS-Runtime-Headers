/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNFastGestureRecognition;

@interface VCPPriorityAnalysis : NSObject {

	BOOL _buttonPressed;
	BOOL _light;
	float _accumulateScore;
	int _frameInd;
	int _rotationAngle;
	int _sendStopSignalKTimes;
	Rotator* _rotator;
	EncodeStats* _stats;
	VCPCNNFastGestureRecognition* _fastGestureDetector;

}
+(id)priorityAnalysis;
-(id)init;
-(void)dealloc;
-(int)fastSignLanguageDetection:(float*)arg1 ofPixelBuffer:(CVBufferRef)arg2 withMetadata:(id)arg3 ;
-(int)calculatePriorityScore:(float*)arg1 ofPixelBuffer:(CVBufferRef)arg2 withMetadata:(id)arg3 ;
@end

