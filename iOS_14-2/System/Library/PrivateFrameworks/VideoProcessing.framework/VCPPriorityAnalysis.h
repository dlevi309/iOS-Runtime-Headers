/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNHandsDetector, VCPCNNHandKeypointsDetector, VCPCNNFastGestureRecognition, NSArray, NSDate, NSMutableArray;

@interface VCPPriorityAnalysis : NSObject {

	float _prevComputedScore;
	int _rotationAngle;
	int _inputHeight;
	int _inputWidth;
	int _frameCounter;
	BOOL _handDetectedInPreviousFrame;
	Rotator* _rotator;
	VCPCNNHandsDetector* _handsDetector;
	VCPCNNHandKeypointsDetector* _handsKeypointsDetector;
	VCPCNNFastGestureRecognition* _fastGestureDetector;
	NSArray* _prevFrameHandKeypoint;
	NSDate* _prevTimeStampHandDetected;
	NSDate* _prevTimeSignLanguageDetected;
	NSMutableArray* _classIndexTracker;
	NSMutableArray* _gestureScoreTracker;
	NSMutableArray* _motionScoreTracker;
	NSMutableArray* _iouTracker;
	NSMutableArray* _handKeypointTracker;
	CGPoint _prevHandCenter;

}
+(id)priorityAnalysis;
-(id)init;
-(float)computeIOU:(CGRect*)arg1 boxB:(CGRect*)arg2 handToFaceRatio:(float*)arg3 ;
-(int)normalizeKeypoints:(CGPoint*)arg1 handCenter:(CGPoint*)arg2 ;
-(float)computeMaxMinDistance:(id)arg1 prevFrameKeypoints:(id)arg2 ;
-(float)avgPooling:(id)arg1 ;
-(float)minPooling:(id)arg1 ;
-(float)maxPooling:(id)arg1 ;
-(int)fastSignLanguageDetection:(float*)arg1 ofPixelBuffer:(CVBufferRef)arg2 withMetadata:(id)arg3 ;
-(int)majorityVoting:(id)arg1 numClass:(int)arg2 ;
-(int)calculatePriorityScore:(float*)arg1 ofPixelBuffer:(CVBufferRef)arg2 withMetadata:(id)arg3 ;
-(void)dealloc;
@end

