/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)results;
-(id)init;
-(void)addResult:(id)arg1 start:(SCD_Struct_VC6)arg2 duration:(SCD_Struct_VC6)arg3 keyIsName:(BOOL)arg4 ;
-(BOOL)compareObjectsOfInterest:(id)arg1 withScenes:(id)arg2 ;
-(void)addAggregatedScenes:(id)arg1 timerange:(SCD_Struct_VC7)arg2 ;
-(NSDictionary *)frameScenes;
-(NSArray *)sceneResults;
-(void)setSceneResults:(NSArray *)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC7)arg1 ;
-(void)dealloc;
@end

