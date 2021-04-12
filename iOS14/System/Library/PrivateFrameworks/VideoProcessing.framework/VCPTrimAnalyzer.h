/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPActionAnalyzer, NSMutableArray, VCPSegment;

@interface VCPTrimAnalyzer : NSObject {

	VCPActionAnalyzer* _actionAnalyzer;
	NSMutableArray* _internalResults;
	SCD_Struct_VC7 _bestTrimTimeRange;
	float _curationThreshold;
	BOOL _verbose;
	SCD_Struct_VC6 _inTrimStart;
	SCD_Struct_VC6 _inTrimEnd;
	BOOL _firstFrame;
	VCPSegment* _activeSegment;
	SCD_Struct_VC6 _captureTime;
	BOOL _ready;

}
-(id)init;
-(BOOL)isReady;
-(void)generateCurationSegment;
-(int)generateInterestingTrimBasedOnCaptureTime:(SCD_Struct_VC6)arg1 ;
-(BOOL)isCurated:(float)arg1 ;
-(void)printSegments:(id)arg1 ;
-(int)prepareTrimmingWithTrimStart:(SCD_Struct_VC6)arg1 andTrimEnd:(SCD_Struct_VC6)arg2 ;
-(void)updateCurationThreshold;
-(float)calculateCandidateScoreWithRangeAdjust:(int)arg1 endIdx:(int)arg2 candidateTimeRange:(SCD_Struct_VC7*)arg3 captureTime:(SCD_Struct_VC6)arg4 ;
-(BOOL)isTimestampSkipable:(SCD_Struct_VC6)arg1 ;
-(BOOL)checkTrimAt:(SCD_Struct_VC6)arg1 captureTime:(SCD_Struct_VC6)arg2 ;
-(int)finalizeWithDestructiveTrimStart:(SCD_Struct_VC6)arg1 trimEnd:(SCD_Struct_VC6)arg2 andCaptureTime:(SCD_Struct_VC6)arg3 ;
-(SCD_Struct_VC7)bestTrimTimeRange;
-(int)analyzeFrameWithTimeRange:(SCD_Struct_VC7)arg1 analysisData:(id)arg2 ;
-(BOOL)shouldCutAt:(SCD_Struct_VC6)arg1 stillPTS:(SCD_Struct_VC6)arg2 withCut:(BOOL)arg3 ;
@end

