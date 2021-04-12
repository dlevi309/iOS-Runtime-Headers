/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PQLBindable.h>

@class NSMutableDictionary, NSDate, BRCServerChangeState, NSString;

@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable> {

	NSMutableDictionary* _pendingMigrations;
	long long _nextRank;
	NSDate* _lastSyncDownDate;
	BRCServerChangeState* _sharedDatabaseChangeState;
	unsigned long long _minLastUsedTime;

}

@property (nonatomic,retain) NSDate * lastSyncDownDate;                           //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (assign,nonatomic) long long nextRank;                                  //@synthesize nextRank=_nextRank - In the implementation block
@property (retain) BRCServerChangeState * sharedDatabaseChangeState;              //@synthesize sharedDatabaseChangeState=_sharedDatabaseChangeState - In the implementation block
@property (assign,nonatomic) unsigned long long minLastUsedTime;                  //@synthesize minLastUsedTime=_minLastUsedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithState:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(long long)nextRank;
-(void)saveToDB:(id)arg1 ;
-(NSDate *)lastSyncDownDate;
-(BRCServerChangeState *)sharedDatabaseChangeState;
-(void)setLastSyncDownDate:(NSDate *)arg1 ;
-(void)setNextRank:(long long)arg1 ;
-(void)initiateMigrationQueryForMangledIDs:(id)arg1 key:(id)arg2 ;
-(id)migrationQueryKeyForMangledID:(id)arg1 continuationCursor:(id*)arg2 ;
-(id)dumpMigrationQueriesForMangledID:(id)arg1 ;
-(void)migrationQueryForMangledID:(id)arg1 key:(id)arg2 didUpdateWithCursor:(id)arg3 ;
-(BOOL)mangledIDIsPendingMigration:(id)arg1 ;
-(void)setSharedDatabaseChangeState:(BRCServerChangeState *)arg1 ;
-(unsigned long long)minLastUsedTime;
-(void)setMinLastUsedTime:(unsigned long long)arg1 ;
@end

