/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoMetaMotionSegment, NSMutableArray, NSArray;

@interface VCPVideoMetaMotionAnalyzer : NSObject {

	HinkleyDetector _hinkleyDetector;
	VCPVideoMetaMotionSegment* _activeSegment;
	NSMutableArray* _mutableResults;
	NSMutableArray* _internalResults;
	SCD_Struct_VC7 _frameTimeRange;

}

@property (nonatomic,retain,readonly) NSArray * results; 
-(NSArray *)results;
-(id)init;
-(void)mergeSimilarSegments;
-(int)processFrameMetadata:(id)arg1 ;
-(BOOL)decideSegmentPointBasedOn:(float)arg1 ;
-(int)finalizeAnalysis;
@end

