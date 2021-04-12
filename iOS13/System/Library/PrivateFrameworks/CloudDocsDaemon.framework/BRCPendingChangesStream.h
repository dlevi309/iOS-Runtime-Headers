/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSURL, NSError, BRCPQLConnection, CKServerChangeToken, BRCClientZone;

@interface BRCPendingChangesStream : NSObject {

	NSURL* _databaseURL;
	NSError* _error;
	BRCPQLConnection* _db;
	CKServerChangeToken* _startingChangeToken;
	BRCClientZone* _clientZone;

}
-(void)dealloc;
-(void)_openDB;
-(id)saveError;
-(id)initWithServerZone:(id)arg1 ;
-(BOOL)enumerateRecordsOfType:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)destroyDatabase;
-(void)fetchTokenState:(/*^block*/id)arg1 ;
-(BOOL)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6 ;
-(void)destroyDatabaseOnQueue:(BOOL)arg1 ;
-(void)_dbBecameCorrupted;
-(void)_createSchemaIfNecessary;
-(long long)_recordTypeFromRecordID:(id)arg1 isShare:(BOOL)arg2 isDelete:(BOOL)arg3 ;
-(void)_destroyDatabase;
@end

