/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSArray, NSMutableDictionary, CKDPCSKeySyncCoreAnalytics;

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
	CKDPCSKeySyncCoreAnalytics* _keySyncAnalytics;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSMutableArray * recordZonesToSave;                                                  //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;                                                     //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneID;                                           //@synthesize recordZonesByZoneID=_recordZonesByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryableErrorsByZoneID;                                       //@synthesize retryableErrorsByZoneID=_retryableErrorsByZoneID - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultZoneSave;                                                           //@synthesize allowDefaultZoneSave=_allowDefaultZoneSave - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                                                          //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (assign,nonatomic) int numZoneSaveAttempts;                                                             //@synthesize numZoneSaveAttempts=_numZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                                                       //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) BOOL dontFetchFromServer;                                                            //@synthesize dontFetchFromServer=_dontFetchFromServer - In the implementation block
@property (assign,nonatomic) BOOL didSynchronizeUserKeyRegistry;                                                  //@synthesize didSynchronizeUserKeyRegistry=_didSynchronizeUserKeyRegistry - In the implementation block
@property (nonatomic,retain) NSMutableArray * zonesWaitingOnKeyRegistrySync;                                      //@synthesize zonesWaitingOnKeyRegistrySync=_zonesWaitingOnKeyRegistrySync - In the implementation block
@property (nonatomic,retain) CKDPCSKeySyncCoreAnalytics * keySyncAnalytics;                                       //@synthesize keySyncAnalytics=_keySyncAnalytics - In the implementation block
@property (nonatomic,retain) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id saveCompletionBlock;                                                                //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                                              //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(NSArray *)recordZoneIDsToDelete;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setAllowDefaultZoneSave:(BOOL)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(int)operationType;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(id)activityCreate;
-(BOOL)dontFetchFromServer;
-(void)setRecordZonesToSave:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)recordZonesByZoneID;
-(id)nameForState:(unsigned long long)arg1 ;
-(NSMutableDictionary *)retryableErrorsByZoneID;
-(BOOL)allowDefaultZoneSave;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setKeySyncAnalytics:(CKDPCSKeySyncCoreAnalytics *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_fetchPCSDataForZonesFromServer:(BOOL)arg1 ;
-(id)saveCompletionBlock;
-(CKDPCSKeySyncCoreAnalytics *)keySyncAnalytics;
-(void)_sendErrorForFailedZones;
-(void)setNumZoneSaveAttempts:(int)arg1 ;
-(void)_createNewPCSForZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2 serverCapabilities:(unsigned long long)arg3 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(void)_sendCoreAnalyticsEventForKeySync;
-(int)numZoneSaveAttempts;
-(void)_fetchPCSDataForZone:(id)arg1 fromServer:(BOOL)arg2 ;
-(void)main;
-(NSMutableArray *)recordZonesToSave;
-(BOOL)didSynchronizeUserKeyRegistry;
-(void)setRetryableErrorsByZoneID:(NSMutableDictionary *)arg1 ;
-(id)relevantZoneIDs;
-(void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2 ;
-(BOOL)makeStateTransition;
-(void)setRecordZonesByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setDidSynchronizeUserKeyRegistry:(BOOL)arg1 ;
-(void)setDontFetchFromServer:(BOOL)arg1 ;
-(void)_checkAndPrepareZones;
-(NSMutableArray *)zonesWaitingOnKeyRegistrySync;
-(void)_sychronizeUserKeyRegistryIfNeeded;
-(long long)maxZoneSaveAttempts;
-(void)setZonesWaitingOnKeyRegistrySync:(NSMutableArray *)arg1 ;
-(BOOL)_saveZonesToServer;
-(id)deleteCompletionBlock;
@end

