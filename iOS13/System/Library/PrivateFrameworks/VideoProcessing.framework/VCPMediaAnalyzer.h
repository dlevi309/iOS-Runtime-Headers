/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, NSXPCConnection, NSMutableDictionary;

@interface VCPMediaAnalyzer : NSObject {

	NSObject*<OS_dispatch_queue> _analysisQueue;
	NSObject*<OS_dispatch_queue> _storageQueue;
	NSObject*<OS_dispatch_group> _storageGroup;
	BOOL _standalone;
	BOOL _noResultStrip;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _sandboxQueue;
	NSMutableDictionary* _sandboxHandles;

}
+(id)sharedMediaAnalyzer;
+(Class)_getDistanceDescriptorClass;
-(id)init;
-(void)dealloc;
-(id)connection;
-(id)_addClassificationResults:(id)arg1 analysis:(id)arg2 ;
-(unsigned long long)_metaAnalysisTypesForAsset:(id)arg1 ;
-(id)_analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 withExistingAnalysis:(id)arg3 storeAnalysis:(BOOL)arg4 ;
-(id)_databaseForPhotoLibrary:(id)arg1 ;
-(id)requestAnalysisForAsset:(id)arg1 withExistingAnalysis:(id)arg2 andDatabase:(id)arg3 analysisTypes:(unsigned long long)arg4 allowOndemand:(BOOL)arg5 ;
-(void)assetsFromPhotoLibrary:(id)arg1 analyzedSinceDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_getSceneDescriptors:(id)arg1 asDescriptorClass:(Class)arg2 withSceneRange:(SCD_Struct_VC28)arg3 andAnalysisResults:(id)arg4 ;
-(void)_checkDuplicate:(id)arg1 withAsset:(id)arg2 duplicate:(long long*)arg3 ;
-(id)_queryDistanceDescriptor:(Class)arg1 ofAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 timeRange:(SCD_Struct_VC28)arg5 lastFeature:(BOOL)arg6 isDegraded:(BOOL*)arg7 ;
-(unsigned long long)_typesToRemove:(unsigned long long)arg1 requested:(unsigned long long)arg2 ;
-(int)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 allowOndemand:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 analyses:(id)arg5 ;
-(long long)_getDatabaseSandboxExtensionForPhotoLibraryURL:(id)arg1 ;
-(int)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)cancelAnalysisWithRequestID:(int)arg1 ;
-(void)assetsAnalyzedSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)distanceFromAsset:(id)arg1 toAsset:(id)arg2 duplicate:(long long*)arg3 distance:(float*)arg4 ;
-(void)distanceFromAsset:(id)arg1 timeRange:(SCD_Struct_VC28)arg2 toAsset:(id)arg3 timeRange:(SCD_Struct_VC28)arg4 duplicate:(long long*)arg5 distance:(float*)arg6 ;
-(int)requestAnalysesForAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 allowOndemand:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)curateMovieAssetsForCollection:(id)arg1 withAlreadyCuratedAssets:(id)arg2 andDesiredCount:(unsigned long long)arg3 allowOnDemand:(BOOL)arg4 ;
-(id)requestCallerIdentificationForFaces:(id)arg1 ;
-(id)requestMovieHighlightsForAssets:(id)arg1 ;
-(id)requestLivePhotoEffectsForAssets:(id)arg1 allowOnDemand:(BOOL)arg2 flags:(unsigned long long)arg3 ;
-(void)completeStorage;
@end

