/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>
#import <libobjc.A.dylib/CKDOperationPipelining.h>

@protocol OS_dispatch_group;
@class CKServerChangeToken, NSObject, NSMutableArray, NSString;

@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation <CKDOperationPipelining> {

	BOOL _fetchAllChanges;
	/*^block*/id _recordZoneWithIDChangedBlock;
	/*^block*/id _recordZoneWithIDWasDeletedBlock;
	/*^block*/id _recordZoneWithIDWasPurgedBlock;
	/*^block*/id _serverChangeTokenUpdatedBlock;
	CKServerChangeToken* _serverChangeToken;
	long long _status;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	unsigned long long _numRequestsSent;
	NSObject*<OS_dispatch_group> _fetchZonesGroup;
	NSMutableArray* _requestInfos;

}

@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;                                        //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                                        //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                                   //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                                                //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) long long status;                                                                       //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long numRequestsSent;                                                     //@synthesize numRequestsSent=_numRequestsSent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchZonesGroup;                                           //@synthesize fetchZonesGroup=_fetchZonesGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestInfos;                                                          //@synthesize requestInfos=_requestInfos - In the implementation block
@property (nonatomic,retain) id<CKFetchDatabaseChangesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordZoneWithIDChangedBlock;                                                          //@synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasDeletedBlock;                                                       //@synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasPurgedBlock;                                                        //@synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock - In the implementation block
@property (nonatomic,copy) id serverChangeTokenUpdatedBlock;                                                         //@synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock - In the implementation block
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)main;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setRecordZoneWithIDChangedBlock:(id)arg1 ;
-(void)setRecordZoneWithIDWasDeletedBlock:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setRecordZoneWithIDWasPurgedBlock:(id)arg1 ;
-(BOOL)fetchAllChanges;
-(CKServerChangeToken *)previousServerChangeToken;
-(id)recordZoneWithIDChangedBlock;
-(id)recordZoneWithIDWasDeletedBlock;
-(id)recordZoneWithIDWasPurgedBlock;
-(NSMutableArray *)requestInfos;
-(unsigned long long)resultsLimit;
-(CKServerChangeToken *)serverChangeToken;
-(long long)status;
-(void)setServerChangeTokenUpdatedBlock:(id)arg1 ;
-(NSString *)pipeliningDescription;
-(unsigned long long)numRequestsSent;
-(void)setNumRequestsSent:(unsigned long long)arg1 ;
-(void)setRequestInfos:(NSMutableArray *)arg1 ;
-(id)serverChangeTokenUpdatedBlock;
-(NSObject*<OS_dispatch_group>)fetchZonesGroup;
-(void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2 ;
-(void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1 ;
-(void)setFetchZonesGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

