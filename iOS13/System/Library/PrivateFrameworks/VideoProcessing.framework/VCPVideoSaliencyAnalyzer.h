/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray, VCPImageSaliencyAnalyzer, NSMutableDictionary, NSArray;

@interface VCPVideoSaliencyAnalyzer : VCPVideoAnalyzer {

	NSMutableArray* _detections;
	NSMutableArray* _latestRegions;
	SCD_Struct_VC6 _timeLastDetection;
	SCD_Struct_VC6 _timeLastTracking;
	SCD_Struct_VC6 _start;
	VCPImageSaliencyAnalyzer* _saliencyAnalyer;
	NSMutableDictionary* _trackers;
	NSMutableDictionary* _confidences;
	NSArray* _activeRegions;

}
-(id)results;
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC28)arg1 ;
-(BOOL)isOutOfBoundary:(CGRect)arg1 ;
-(float)updateConfidence:(float)arg1 prevBound:(CGRect)arg2 newBound:(CGRect)arg3 width:(int)arg4 height:(int)arg5 ;
-(id)pruneRegions:(id)arg1 withOverlapRatio:(float)arg2 ;
-(float)boundDistance:(CGRect)arg1 relativeTo:(CGRect)arg2 landscape:(BOOL)arg3 ;
@end

