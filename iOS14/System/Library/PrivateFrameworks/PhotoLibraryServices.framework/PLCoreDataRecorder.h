/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLCoreDataRecorder : NSObject
+(BOOL)stopRecording;
+(BOOL)isRecording;
+(BOOL)_isCorrectDB:(sqlite3Ref)arg1 ;
+(BOOL)_installRecorder;
+(id)_queryPlanFromSQL:(const char*)arg1 usingDb:(sqlite3Ref)arg2 ;
+(sqlite3Ref)_dbHandleFromConnection:(id)arg1 ;
+(BOOL)_installConnectionSwizzle;
+(void)_bindVariablesSubEntryForStatement:(id)arg1 outBindVariables:(id*)arg2 outBindIntArrays:(id*)arg3 ;
+(id)_recordedStatementsAndReset:(BOOL)arg1 ;
+(id)recordedEntries;
+(void)_recordExecutedStatementSQL:(id)arg1 queryPlan:(id)arg2 bindVariables:(id)arg3 bindIntArrays:(id)arg4 db:(sqlite3Ref)arg5 pageHitCountBeforeExecution:(int)arg6 pageMissCountBeforeExecution:(int)arg7 ;
+(id)recordedEntriesDescription;
+(BOOL)startRecordingForDbWithFilename:(id)arg1 limitToMarkedThreads:(BOOL)arg2 includeBindVariables:(BOOL)arg3 includeIOMetrics:(BOOL)arg4 entryDecorator:(/*^block*/id)arg5 entriesAvailableHandler:(/*^block*/id)arg6 ;
+(id)recordedEntriesAndReset;
+(void)reset;
@end

