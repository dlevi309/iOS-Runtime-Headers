/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)shouldQueryInternalFields;
+(id)databaseForPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(void)closeDatabase;
-(int)openDatabase;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2 ;
-(int)parseHeader:(sqlite3_stmtRef)arg1 startColumn:(int)arg2 analysis:(id)arg3 ;
-(int)parseResults:(sqlite3_stmtRef)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4 ;
-(int)executeDatabaseBlock:(/*^block*/id)arg1 ;
-(int)queryHeaderForAsset:(id)arg1 analysis:(id*)arg2 assetId:(long long*)arg3 ;
-(int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2 ;
-(int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3 ;
-(int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3 ;
-(int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3 ;
-(id)blacklistedLocalIdentifiersFromAssets:(id)arg1 ;
-(id)queryBlacklistedLocalIdentifiers;
-(id)queryAnalysisPropertiesForAsset:(id)arg1 ;
-(id)queryFailedProcessingStatusFromAssets:(id)arg1 forTaskID:(unsigned long long)arg2 ;
-(id)queryAnalysisPropertiesForAssets:(id)arg1 ;
-(BOOL)isAssetBlacklisted:(id)arg1 blacklistDate:(id*)arg2 ;
-(id)queryAnalysisForAsset:(id)arg1 ;
-(id)queryAssetsAnalyzedSince:(id)arg1 ;
-(id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2 ;
@end

