/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class VCPImageHumanPoseAnalyzer, NSMutableArray, VCPFrameAnalysisStats, VCPVideoObjectTracker;

@interface VCPVideoHumanActionAnalyzer : VCPVideoAnalyzer {

	VCPImageHumanPoseAnalyzer* _poseAnalyzer;
	SCD_Struct_VC6 _timeLastProcess;
	SCD_Struct_VC6 _timeLastProcessFullFrame;
	NSMutableArray* _bodyArray;
	float _maxScore;
	SCD_Struct_VC6 _endTime;
	SCD_Struct_VC6 _startTime;
	NSMutableArray* _actionResults;
	NSMutableArray* _keyPersonResults;
	NSMutableArray* _poseResults;
	NSMutableArray* _activePoseResults;
	CGRect _crop;
	CGRect _humanRect;
	float _actionScoreAbsolute;
	float _actionScoreRelative;
	float _scoreAbsoluteMax;
	float _scoreRelativeMax;
	float _humanPoseScore;
	SCD_Struct_VC6 _lastHumanTimestamp;
	VCPFrameAnalysisStats* _frameStats;
	VCPVideoObjectTracker* _tracker;
	BOOL _tracking;

}
-(id)results;
-(void)computeVar:(int)arg1 index2:(int)arg2 interVar:(float*)arg3 intraVar:(float*)arg4 ;
-(CGRect)scaleRect:(CGRect)arg1 scaleX:(float)arg2 scaleY:(float)arg3 ;
-(void)computeActionScore;
-(float)intersectionOverUnion:(CGRect)arg1 rect:(CGRect)arg2 ;
-(void)addActiveResults:(SCD_Struct_VC6)arg1 ;
-(int)processPersons:(id)arg1 humanBounds:(id)arg2 dominantPersonIdx:(int)arg3 frame:(CVBufferRef)arg4 timestamp:(SCD_Struct_VC6)arg5 duration:(SCD_Struct_VC6)arg6 ;
-(float)normDistance:(id)arg1 point2:(id)arg2 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC7)arg1 ;
-(id)privateResults;
-(id)initWithFrameStats:(id)arg1 ;
@end

