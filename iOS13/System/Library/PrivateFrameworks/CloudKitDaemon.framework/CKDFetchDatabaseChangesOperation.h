/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                         //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                      //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) long long status;                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long numRequestsSent;                           //@synthesize numRequestsSent=_numRequestsSent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchZonesGroup;                 //@synthesize fetchZonesGroup=_fetchZonesGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestInfos;                                //@synthesize requestInfos=_requestInfos - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDChangedBlock;                                //@synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasDeletedBlock;                             //@synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneWithIDWasPurgedBlock;                              //@synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock - In the implementation block
@property (nonatomic,copy) id serverChangeTokenUpdatedBlock;                               //@synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
-(void)main;
-(long long)status;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordZoneWithIDChangedBlock:(id)arg1 ;
-(void)setRecordZoneWithIDWasDeletedBlock:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setRecordZoneWithIDWasPurgedBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(BOOL)fetchAllChanges;
-(id)recordZoneWithIDChangedBlock;
-(id)recordZoneWithIDWasDeletedBlock;
-(id)recordZoneWithIDWasPurgedBlock;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)analyticsPayload;
-(NSMutableArray *)requestInfos;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setServerChangeTokenUpdatedBlock:(id)arg1 ;
-(NSString *)pipeliningDescription;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(unsigned long long)numRequestsSent;
-(void)setNumRequestsSent:(unsigned long long)arg1 ;
-(void)setRequestInfos:(NSMutableArray *)arg1 ;
-(id)serverChangeTokenUpdatedBlock;
-(NSObject*<OS_dispatch_group>)fetchZonesGroup;
-(void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2 ;
-(void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1 ;
-(void)setFetchZonesGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

