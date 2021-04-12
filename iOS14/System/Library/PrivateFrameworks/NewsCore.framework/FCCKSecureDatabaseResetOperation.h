/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation {

	BOOL _deleteZones;
	BOOL _restoreSecureSentinel;
	BOOL _restoreZoneContents;
	FCCKPrivateDatabase* _database;
	/*^block*/id _resetCompletionHandler;

}

@property (nonatomic,retain) FCCKPrivateDatabase * database;              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) BOOL deleteZones;                            //@synthesize deleteZones=_deleteZones - In the implementation block
@property (assign,nonatomic) BOOL restoreSecureSentinel;                  //@synthesize restoreSecureSentinel=_restoreSecureSentinel - In the implementation block
@property (assign,nonatomic) BOOL restoreZoneContents;                    //@synthesize restoreZoneContents=_restoreZoneContents - In the implementation block
@property (nonatomic,copy) id resetCompletionHandler;                     //@synthesize resetCompletionHandler=_resetCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(id)init;
-(id)_deleteZones;
-(id)_recreateZones;
-(id)_restoreSecureSentinel;
-(id)_restoreZoneContents;
-(BOOL)deleteZones;
-(id)resetCompletionHandler;
-(id)_rawZoneIDsToDelete;
-(id)_rawZonesToRecreate;
-(BOOL)restoreSecureSentinel;
-(BOOL)restoreZoneContents;
-(id)_rawRecordsToSave;
-(void)setDeleteZones:(BOOL)arg1 ;
-(void)setRestoreSecureSentinel:(BOOL)arg1 ;
-(void)setRestoreZoneContents:(BOOL)arg1 ;
-(void)setResetCompletionHandler:(id)arg1 ;
-(FCCKPrivateDatabase *)database;
@end

