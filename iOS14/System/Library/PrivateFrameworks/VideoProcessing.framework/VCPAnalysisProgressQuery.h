/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPAnalysisProgressQuery : NSObject
+(unsigned long long)_countMediaAnalysisWithAssetBatch:(id)arg1 andDatabase:(id)arg2 ;
+(unsigned long long)_countFaceAnalysisWithAssetBatch:(id)arg1 ;
+(unsigned long long)_countSceneAnalysisWithAssetBatch:(id)arg1 ;
+(unsigned long long)_countAnalysisWithAssetBatch:(id)arg1 andDatabase:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(unsigned long long)_countFailuresWithAssetBatch:(id)arg1 andDatabase:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(id)_processedPredicateForTaskID:(unsigned long long)arg1 ;
+(BOOL)_screenProgress;
+(int)_queryProgressDetailExpress:(id*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(int)_scanPhotoLibrary:(id)arg1 withTaskID:(unsigned long long)arg2 andStatistics:(id*)arg3 ;
+(int)queryProgress:(float*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(int)queryProgressDetail:(id*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 ;
@end

