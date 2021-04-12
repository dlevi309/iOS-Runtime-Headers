/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSArray, NSMutableDictionary;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {

	BOOL _allowDefaultZoneSave;
	BOOL _markZonesAsUserPurged;
	BOOL _dontFetchFromServer;
	BOOL _didSynchronizeUserKeyRegistry;
	int _numZoneSaveAttempts;
	/*^block*/id _saveCompletionBlock;
	/*^block*/id _deleteCompletionBlock;
	NSMutableArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	NSMutableDictionary* _recordZonesByZoneID;
	NSMutableDictionary* _retryableErrorsByZoneID;
	long long _maxZoneSaveAttempts;
	NSMutableArray* _zonesWaitingOnKeyRegistrySync;

}

@property (nonatomic,retain) NSMutableArray * recordZonesToSave;                          //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;                             //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneID;                   //@synthesize recordZonesByZoneID=_recordZonesByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryableErrorsByZoneID;               //@synthesize retryableErrorsByZoneID=_retryableErrorsByZoneID - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultZoneSave;                                   //@synthesize allowDefaultZoneSave=_allowDefaultZoneSave - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                                  //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (assign,nonatomic) int numZoneSaveAttempts;                                     //@synthesize numZoneSaveAttempts=_numZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                               //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) BOOL dontFetchFromServer;                                    //@synthesize dontFetchFromServer=_dontFetchFromServer - In the implementation block
@property (assign,nonatomic) BOOL didSynchronizeUserKeyRegistry;                          //@synthesize didSynchronizeUserKeyRegistry=_didSynchronizeUserKeyRegistry - In the implementation block
@property (nonatomic,retain) NSMutableArray * zonesWaitingOnKeyRegistrySync;              //@synthesize zonesWaitingOnKeyRegistrySync=_zonesWaitingOnKeyRegistrySync - In the implementation block
@property (nonatomic,copy) id saveCompletionBlock;                                        //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                      //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(void)main;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSMutableArray *)recordZonesToSave;
-(void)setRecordZonesToSave:(NSMutableArray *)arg1 ;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(long long)maxZoneSaveAttempts;
-(BOOL)dontFetchFromServer;
-(BOOL)allowDefaultZoneSave;
-(void)setAllowDefaultZoneSave:(BOOL)arg1 ;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(void)setDontFetchFromServer:(BOOL)arg1 ;
-(NSMutableDictionary *)recordZonesByZoneID;
-(void)setRecordZonesByZoneID:(NSMutableDictionary *)arg1 ;
-(id)saveCompletionBlock;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(void)_fetchPCSDataForZonesFromServer:(BOOL)arg1 ;
-(int)numZoneSaveAttempts;
-(void)setNumZoneSaveAttempts:(int)arg1 ;
-(BOOL)_saveZonesToServer;
-(void)_sychronizeUserKeyRegistryIfNeeded;
-(NSMutableArray *)zonesWaitingOnKeyRegistrySync;
-(void)_sendErrorForFailedZones;
-(void)setDidSynchronizeUserKeyRegistry:(BOOL)arg1 ;
-(NSMutableDictionary *)retryableErrorsByZoneID;
-(BOOL)didSynchronizeUserKeyRegistry;
-(id)deleteCompletionBlock;
-(void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2 serverCapabilities:(unsigned long long)arg3 ;
-(void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2 ;
-(void)_createNewPCSForZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchPCSDataForZone:(id)arg1 fromServer:(BOOL)arg2 ;
-(void)_checkAndPrepareZones;
-(void)setRetryableErrorsByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setZonesWaitingOnKeyRegistrySync:(NSMutableArray *)arg1 ;
@end

