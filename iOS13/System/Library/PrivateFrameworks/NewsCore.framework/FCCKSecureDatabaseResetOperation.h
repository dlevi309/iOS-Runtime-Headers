/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setDeleteZones:(BOOL)arg1 ;
-(void)setRestoreSecureSentinel:(BOOL)arg1 ;
-(void)setRestoreZoneContents:(BOOL)arg1 ;
-(void)setResetCompletionHandler:(id)arg1 ;
-(id)_deleteZones;
-(id)_recreateZones;
-(id)_restoreSecureSentinel;
-(id)_restoreZoneContents;
-(id)resetCompletionHandler;
-(BOOL)deleteZones;
-(id)_rawZoneIDsToDelete;
-(id)_rawZonesToRecreate;
-(BOOL)restoreSecureSentinel;
-(BOOL)restoreZoneContents;
-(id)_rawRecordsToSave;
@end

