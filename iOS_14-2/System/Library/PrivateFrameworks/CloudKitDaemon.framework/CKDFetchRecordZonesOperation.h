/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _shouldRetry;
	BOOL _onlyFetchPCSInfo;
	BOOL _ignorePCSFailures;
	/*^block*/id _recordZoneFetchedProgressBlock;
	NSArray* _recordZoneIDs;
	NSMutableDictionary* _zonesToSaveForPCSUpdateByZoneID;
	NSMutableArray* _zoneIDsNeedingPCSUpdateRetry;
	NSMutableDictionary* _pcsUpdateErrorsByZoneID;
	long long _numZoneSaveAttempts;
	NSMutableSet* _zoneIDsNeedingDugongKeyRoll;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * recordZoneIDs;                                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;                                                //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zonesToSaveForPCSUpdateByZoneID;                              //@synthesize zonesToSaveForPCSUpdateByZoneID=_zonesToSaveForPCSUpdateByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry;                                                                   //@synthesize shouldRetry=_shouldRetry - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoneIDsNeedingPCSUpdateRetry;                                      //@synthesize zoneIDsNeedingPCSUpdateRetry=_zoneIDsNeedingPCSUpdateRetry - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsUpdateErrorsByZoneID;                                      //@synthesize pcsUpdateErrorsByZoneID=_pcsUpdateErrorsByZoneID - In the implementation block
@property (assign,nonatomic) long long numZoneSaveAttempts;                                                      //@synthesize numZoneSaveAttempts=_numZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                                              //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * zoneIDsNeedingDugongKeyRoll;                                         //@synthesize zoneIDsNeedingDugongKeyRoll=_zoneIDsNeedingDugongKeyRoll - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                                                             //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
@property (nonatomic,retain) id<CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordZoneFetchedProgressBlock;                                                    //@synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(int)operationType;
-(id)activityCreate;
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)ignorePCSFailures;
-(NSMutableDictionary *)zonesToSaveForPCSUpdateByZoneID;
-(void)setRecordZoneFetchedProgressBlock:(id)arg1 ;
-(id)recordZoneFetchedProgressBlock;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setShouldRetry:(BOOL)arg1 ;
-(void)_sendErrorForFailedZones;
-(void)setNumZoneSaveAttempts:(long long)arg1 ;
-(void)saveZonesWithUpdatedZonePCS;
-(void)_locked_callbackForRecordZone:(id)arg1 zoneID:(id)arg2 error:(id)arg3 ;
-(NSMutableArray *)zoneIDsNeedingPCSUpdateRetry;
-(long long)numZoneSaveAttempts;
-(void)_handleRecordZoneSaved:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetry;
-(void)main;
-(NSMutableDictionary *)pcsUpdateErrorsByZoneID;
-(void)checkPCSIdentity;
-(BOOL)onlyFetchPCSInfo;
-(void)setPcsUpdateErrorsByZoneID:(NSMutableDictionary *)arg1 ;
-(BOOL)_locked_checkAndUpdateZonePCSIfNeededForZone:(id)arg1 error:(id*)arg2 ;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
-(id)relevantZoneIDs;
-(BOOL)makeStateTransition;
-(void)fetchZonesFromServer;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(NSMutableSet *)zoneIDsNeedingDugongKeyRoll;
-(BOOL)isFetchAllRecordZonesOperation;
-(void)_continueHandlingFetchedRecordZone:(id)arg1 zoneID:(id)arg2 ;
-(void)setZoneIDsNeedingDugongKeyRoll:(NSMutableSet *)arg1 ;
-(void)setZonesToSaveForPCSUpdateByZoneID:(NSMutableDictionary *)arg1 ;
-(void)_cachePCSOnRecordZone:(id)arg1 ;
-(void)setZoneIDsNeedingPCSUpdateRetry:(NSMutableArray *)arg1 ;
@end

