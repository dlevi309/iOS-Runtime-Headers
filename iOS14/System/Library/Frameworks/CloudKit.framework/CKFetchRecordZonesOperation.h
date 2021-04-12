/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchRecordZonesOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKFetchRecordZonesOperationInfo;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation <CKFetchRecordZonesOperationCallbacks> {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _ignorePCSFailures;
	/*^block*/id _fetchRecordZonesCompletionBlock;
	NSArray* _recordZoneIDs;
	NSMutableDictionary* _recordZonesByZoneID;
	NSMutableDictionary* _recordZoneErrors;

}

@property (nonatomic,readonly) id<CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchRecordZonesOperationInfo * operationInfo; 
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneID;                                            //@synthesize recordZonesByZoneID=_recordZonesByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                                               //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;                                                  //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                                                               //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                                                //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) id fetchRecordZonesCompletionBlock;                                                     //@synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(id)fetchAllRecordZonesOperation;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(NSMutableDictionary *)recordZonesByZoneID;
-(BOOL)ignorePCSFailures;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSMutableDictionary *)recordZoneErrors;
-(id)fetchRecordZonesCompletionBlock;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
-(id)relevantZoneIDs;
-(void)setFetchRecordZonesCompletionBlock:(id)arg1 ;
-(void)setRecordZonesByZoneID:(NSMutableDictionary *)arg1 ;
-(void)handleFetchForRecordZoneID:(id)arg1 recordZone:(id)arg2 error:(id)arg3 ;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(BOOL)isFetchAllRecordZonesOperation;
-(id)initWithRecordZoneIDs:(id)arg1 ;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
@end

