/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoMetaMotionSegment, NSMutableArray, NSArray;

@interface VCPVideoMetaMotionAnalyzer : NSObject {

	HinkleyDetector _hinkleyDetector;
	VCPVideoMetaMotionSegment* _activeSegment;
	NSMutableArray* _mutableResults;
	NSMutableArray* _internalResults;
	SCD_Struct_VC28 _frameTimeRange;

}

@property (nonatomic,retain,readonly) NSArray * results; 
-(id)init;
-(NSArray *)results;
-(int)finalizeAnalysis;
-(void)mergeSimilarSegments;
-(int)processFrameMetadata:(id)arg1 ;
-(BOOL)decideSegmentPointBasedOn:(float)arg1 ;
@end

