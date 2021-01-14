/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol SFSQLiteDelegate;
#import <Security/Security-Structs.h>
@class NSString, NSMutableDictionary, NSDateFormatter;

@interface SFSQLite : NSObject {

	id<SFSQLiteDelegate> _delegate;
	NSString* _path;
	NSString* _schema;
	NSString* _schemaVersion;
	NSMutableDictionary* _statementsBySQL;
	NSString* _objectClassPrefix;
	long long _synchronousMode;
	int _userVersion;
	sqlite3Ref _db;
	unsigned long long _openCount;
	NSDateFormatter* _dateFormatter;
	BOOL _hasMigrated;
	BOOL _corrupt;
	BOOL _traced;
	NSDateFormatter* _oldDateFormatter;

}

@property (assign,nonatomic) sqlite3Ref db;                                        //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) unsigned long long openCount;                         //@synthesize openCount=_openCount - In the implementation block
@property (assign,nonatomic) BOOL corrupt;                                         //@synthesize corrupt=_corrupt - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * statementsBySQL;              //@synthesize statementsBySQL=_statementsBySQL - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * oldDateFormatter;                   //@synthesize oldDateFormatter=_oldDateFormatter - In the implementation block
@property (nonatomic,readonly) NSString * path;                                    //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * schema;                                  //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) NSString * schemaVersion;                           //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,retain) NSString * objectClassPrefix;                         //@synthesize objectClassPrefix=_objectClassPrefix - In the implementation block
@property (assign,nonatomic) int userVersion;                                      //@synthesize userVersion=_userVersion - In the implementation block
@property (assign,nonatomic) long long synchronousMode;                            //@synthesize synchronousMode=_synchronousMode - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) BOOL hasMigrated;                                   //@synthesize hasMigrated=_hasMigrated - In the implementation block
@property (assign,nonatomic) BOOL traced;                                          //@synthesize traced=_traced - In the implementation block
@property (nonatomic,retain) id<SFSQLiteDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
-(int)changes;
-(NSString *)schemaVersion;
-(void)vacuum;
-(void)remove;
-(sqlite3Ref)db;
-(NSString *)schema;
-(void)end;
-(void)begin;
-(void)open;
-(void)setTraced:(BOOL)arg1 ;
-(id<SFSQLiteDelegate>)delegate;
-(BOOL)traced;
-(BOOL)isOpen;
-(long long)lastInsertRowID;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(BOOL)openWithError:(id*)arg1 ;
-(int)autoVacuumSetting;
-(BOOL)hasMigrated;
-(void)attemptProperDatabasePermissions;
-(NSDateFormatter *)oldDateFormatter;
-(void)setOldDateFormatter:(NSDateFormatter *)arg1 ;
-(BOOL)executeSQL:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(NSString *)path;
-(void)analyze;
-(BOOL)corrupt;
-(void)setDelegate:(id<SFSQLiteDelegate>)arg1 ;
-(long long)synchronousMode;
-(id)creationDate;
-(void)setDb:(sqlite3Ref)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(id)statementForSQL:(id)arg1 ;
-(int)userVersion;
-(void)setCorrupt:(BOOL)arg1 ;
-(unsigned long long)openCount;
-(void)setUserVersion:(int)arg1 ;
-(id)allTableNames;
-(int)dbUserVersion;
-(id)_createSchemaHash;
-(id)_synchronousModeString;
-(void)removeAllStatements;
-(id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 ;
-(id)select:(id)arg1 from:(id)arg2 ;
-(BOOL)executeSQL:(id)arg1 arguments:(char*)arg2 ;
-(id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4 ;
-(void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)_tableNameForClass:(Class)arg1 ;
-(long long)insertOrReplaceInto:(id)arg1 values:(id)arg2 ;
-(void)deleteFrom:(id)arg1 matchingValues:(id)arg2 ;
-(void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(/*^block*/id)arg6 ;
-(void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5 ;
-(id)initWithPath:(id)arg1 schema:(id)arg2 ;
-(id)datePropertyForKey:(id)arg1 ;
-(void)setDateProperty:(id)arg1 forKey:(id)arg2 ;
-(id)columnNamesForTable:(id)arg1 ;
-(void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(/*^block*/id)arg7 ;
-(id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(NSMutableDictionary *)statementsBySQL;
-(unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(NSString *)objectClassPrefix;
-(void)setOpenCount:(unsigned long long)arg1 ;
-(void)setObjectClassPrefix:(NSString *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)dropAllTables;
-(void)rollback;
-(void)setSynchronousMode:(long long)arg1 ;
-(void)dealloc;
@end

