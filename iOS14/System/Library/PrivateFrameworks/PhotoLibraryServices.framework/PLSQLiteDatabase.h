/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLSQLiteDatabase : NSObject {

	sqlite3Ref _database;

}
+(id)openDatabaseAtPath:(id)arg1 ;
+(sqlite3Ref)_openSQLiteDatabaseAtPath:(const char*)arg1 ;
-(BOOL)beginExclusiveTransaction;
-(BOOL)close;
-(BOOL)rollbackTransaction;
-(BOOL)_execute:(id)arg1 ;
-(BOOL)commitTransaction;
-(sqlite3_stmtRef)_prepareStatement:(id)arg1 ;
-(id)initWithOpenedSQLite3Database:(sqlite3Ref)arg1 ;
-(BOOL)beginDeferredTransaction;
-(BOOL)prepareAndEvaluateStatement:(id)arg1 ;
-(BOOL)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(/*^block*/id)arg2 ;
@end

