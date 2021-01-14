/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, NSString;

@interface VCPDatabaseReader : NSObject {

	NSObject*<OS_dispatch_queue> _sqlSerialQueue;
	NSString* _filepath;
	sqlite3Ref _database;

}
+(id)databaseForPhotoLibrary:(id)arg1 ;
+(BOOL)shouldQueryInternalFields;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(BOOL)isAssetBlacklisted:(id)arg1 blacklistDate:(id*)arg2 ;
-(id)queryAssetsAnalyzedSince:(id)arg1 ;
-(id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2 ;
-(id)queryAnalysisPropertiesForAssets:(id)arg1 ;
-(id)blacklistedLocalIdentifiersFromAssets:(id)arg1 ;
-(id)queryFailedProcessingStatusFromAssets:(id)arg1 forTaskID:(unsigned long long)arg2 ;
-(unsigned long long)countForTaskID:(unsigned long long)arg1 withProcessingStatus:(unsigned long long)arg2 ;
-(id)queryAnalysisForAsset:(id)arg1 ;
-(int)openDatabase;
-(id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2 ;
-(int)parseHeader:(sqlite3_stmtRef)arg1 startColumn:(int)arg2 analysis:(id)arg3 ;
-(int)parseResults:(sqlite3_stmtRef)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4 ;
-(int)executeDatabaseBlock:(/*^block*/id)arg1 ;
-(int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2 ;
-(int)queryHeaderForAsset:(id)arg1 analysis:(id*)arg2 assetId:(long long*)arg3 ;
-(int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3 ;
-(int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3 ;
-(int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3 ;
-(id)queryBlacklistedLocalIdentifiers;
-(id)queryAnalysisPropertiesForAsset:(id)arg1 ;
-(id)queryLocalIdentifiersForTaskID:(unsigned long long)arg1 withStatus:(unsigned long long)arg2 ;
-(void)closeDatabase;
-(void)dealloc;
@end

