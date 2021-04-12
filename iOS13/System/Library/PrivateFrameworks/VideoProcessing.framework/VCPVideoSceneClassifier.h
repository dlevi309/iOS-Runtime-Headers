/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray, NSMutableDictionary, VCPSceneTaxonomy, NSArray, NSDictionary;

@interface VCPVideoSceneClassifier : VCPVideoAnalyzer {

	SCD_Struct_VC6 _timeLastProcess;
	SCD_Struct_VC6 _start;
	NSMutableArray* _results;
	NSMutableDictionary* _existingScenes;
	VCPSceneTaxonomy* _sceneTaxomy;
	NSMutableDictionary* _internalFrameScenes;
	NSArray* _sceneResults;

}

@property (readonly) NSDictionary * frameScenes; 
@property (retain) NSArray * sceneResults;                    //@synthesize sceneResults=_sceneResults - In the implementation block
-(id)init;
-(void)dealloc;
-(id)results;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC28)arg1 ;
-(void)addResult:(id)arg1 start:(SCD_Struct_VC6)arg2 duration:(SCD_Struct_VC6)arg3 keyIsName:(BOOL)arg4 ;
-(BOOL)compareObjectsOfInterest:(id)arg1 withScenes:(id)arg2 ;
-(void)addAggregatedScenes:(id)arg1 timerange:(SCD_Struct_VC28)arg2 ;
-(NSDictionary *)frameScenes;
-(NSArray *)sceneResults;
-(void)setSceneResults:(NSArray *)arg1 ;
@end

