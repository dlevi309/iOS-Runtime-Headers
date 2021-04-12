/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <libobjc.A.dylib/_PASDatabaseMigrationProtocol.h>

@class _PASSqliteDatabase, NSString;

@interface SGQuickResponsesDatabase : NSObject <_PASDatabaseMigrationProtocol> {

	_PASSqliteDatabase* _db;

}

@property (nonatomic,readonly) _PASSqliteDatabase * db;              //@synthesize db=_db - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_openFreshHandleForPath:(id)arg1 inMemory:(BOOL)arg2 ;
+(id)_openAnotherHandleForPath:(id)arg1 ;
-(_PASSqliteDatabase *)db;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
-(id)databaseHandle;
-(id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3 ;
-(id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3 forTools:(BOOL)arg4 ;
-(BOOL)_handleCorruptionWithCheck:(BOOL)arg1 path:(id)arg2 inMemory:(BOOL)arg3 ;
-(BOOL)_performMigrationsWithPath:(id)arg1 inMemory:(BOOL)arg2 attemptIteration:(int)arg3 ;
@end

