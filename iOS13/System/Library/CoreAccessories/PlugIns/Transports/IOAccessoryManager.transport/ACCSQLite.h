/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


@protocol ACCSQLiteDelegate;
#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
@class NSString, NSMutableDictionary, NSDateFormatter;

@interface ACCSQLite : NSObject {

	id<ACCSQLiteDelegate> _delegate;
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
	BOOL _shouldVacuum;
	BOOL _corrupt;
	BOOL _traced;

}

@property (assign,nonatomic) sqlite3Ref db;                                        //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) unsigned long long openCount;                         //@synthesize openCount=_openCount - In the implementation block
@property (assign,nonatomic) BOOL corrupt;                                         //@synthesize corrupt=_corrupt - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * statementsBySQL;              //@synthesize statementsBySQL=_statementsBySQL - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,readonly) NSString * path;                                    //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * schema;                                  //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) NSString * schemaVersion;                           //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,retain) NSString * objectClassPrefix;                         //@synthesize objectClassPrefix=_objectClassPrefix - In the implementation block
@property (assign,nonatomic) int userVersion;                                      //@synthesize userVersion=_userVersion - In the implementation block
@property (assign,nonatomic) long long synchronousMode;                            //@synthesize synchronousMode=_synchronousMode - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) BOOL hasMigrated;                                   //@synthesize hasMigrated=_hasMigrated - In the implementation block
@property (assign,nonatomic) BOOL shouldVacuum;                                    //@synthesize shouldVacuum=_shouldVacuum - In the implementation block
@property (assign,nonatomic) BOOL traced;                                          //@synthesize traced=_traced - In the implementation block
@property (nonatomic,retain) id<ACCSQLiteDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)open;
-(void)close;
-(id<ACCSQLiteDelegate>)delegate;
-(void)setDelegate:(id<ACCSQLiteDelegate>)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)path;
-(void)remove;
-(int)changes;
-(NSString *)schema;
-(void)end;
-(id)initWithPath:(id)arg1 schema:(id)arg2 ;
-(int)userVersion;
-(id)_synchronousModeString;
-(id)_createSchemaHash;
-(BOOL)isOpen;
-(BOOL)openWithError:(id*)arg1 ;
-(void)begin;
-(void)rollback;
-(void)analyze;
-(void)vacuum;
-(long long)lastInsertRowID;
-(BOOL)executeSQL:(id)arg1 ;
-(BOOL)executeSQL:(id)arg1 arguments:(char*)arg2 ;
-(id)statementForSQL:(id)arg1 ;
-(void)removeAllStatements;
-(id)allTableNames;
-(void)dropAllTables;
-(NSDateFormatter *)dateFormatter;
-(id)datePropertyForKey:(id)arg1 ;
-(void)setDateProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removePropertyForKey:(id)arg1 ;
-(id)creationDate;
-(id)columnNamesForTable:(id)arg1 ;
-(id)select:(id)arg1 from:(id)arg2 ;
-(id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 ;
-(void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(/*^block*/id)arg7 ;
-(void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(/*^block*/id)arg6 ;
-(id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4 ;
-(void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5 ;
-(id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(long long)insertOrReplaceInto:(id)arg1 values:(id)arg2 ;
-(void)deleteFrom:(id)arg1 matchingValues:(id)arg2 ;
-(void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)_tableNameForClass:(Class)arg1 ;
-(int)dbUserVersion;
-(NSString *)schemaVersion;
-(NSString *)objectClassPrefix;
-(void)setObjectClassPrefix:(NSString *)arg1 ;
-(void)setUserVersion:(int)arg1 ;
-(long long)synchronousMode;
-(void)setSynchronousMode:(long long)arg1 ;
-(BOOL)hasMigrated;
-(BOOL)traced;
-(void)setTraced:(BOOL)arg1 ;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(unsigned long long)openCount;
-(void)setOpenCount:(unsigned long long)arg1 ;
-(BOOL)corrupt;
-(void)setCorrupt:(BOOL)arg1 ;
-(NSMutableDictionary *)statementsBySQL;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(BOOL)shouldVacuum;
-(void)_periodicVacuum;
-(void)setShouldVacuum:(BOOL)arg1 ;
@end

