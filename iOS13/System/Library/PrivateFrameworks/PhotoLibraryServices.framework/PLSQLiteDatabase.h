/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLSQLiteDatabase : NSObject {

	sqlite3Ref _database;

}
+(id)openDatabaseAtPath:(id)arg1 ;
+(sqlite3Ref)_openSQLiteDatabaseAtPath:(const char*)arg1 ;
-(BOOL)close;
-(BOOL)commitTransaction;
-(BOOL)rollbackTransaction;
-(id)initWithOpenedSQLite3Database:(sqlite3Ref)arg1 ;
-(BOOL)beginDeferredTransaction;
-(BOOL)beginExclusiveTransaction;
-(BOOL)prepareAndEvaluateStatement:(id)arg1 ;
-(BOOL)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(/*^block*/id)arg2 ;
-(sqlite3_stmtRef)_prepareStatement:(id)arg1 ;
-(BOOL)_execute:(id)arg1 ;
@end

