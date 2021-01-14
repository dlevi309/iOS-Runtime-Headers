/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableSet, NSMutableDictionary;

@interface CKDModifyRecordAccessOperation : CKDDatabaseOperation {

	int _numSaveAttempts;
	/*^block*/id _accessWasGrantedBlock;
	/*^block*/id _accessWasRevokedBlock;
	NSArray* _recordIDsToGrant;
	NSArray* _recordIDsToRevoke;
	NSMutableSet* _fetchedRecordIDs;
	NSMutableDictionary* _recordsToSaveByID;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * recordIDsToGrant;                                                           //@synthesize recordIDsToGrant=_recordIDsToGrant - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToRevoke;                                                          //@synthesize recordIDsToRevoke=_recordIDsToRevoke - In the implementation block
@property (nonatomic,retain) NSMutableSet * fetchedRecordIDs;                                                      //@synthesize fetchedRecordIDs=_fetchedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsToSaveByID;                                              //@synthesize recordsToSaveByID=_recordsToSaveByID - In the implementation block
@property (assign,nonatomic) int numSaveAttempts;                                                                  //@synthesize numSaveAttempts=_numSaveAttempts - In the implementation block
@property (nonatomic,retain) id<CKModifyRecordAccessOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id accessWasGrantedBlock;                                                               //@synthesize accessWasGrantedBlock=_accessWasGrantedBlock - In the implementation block
@property (nonatomic,copy) id accessWasRevokedBlock;                                                               //@synthesize accessWasRevokedBlock=_accessWasRevokedBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSMutableDictionary *)recordsToSaveByID;
-(void)main;
-(NSArray *)recordIDsToGrant;
-(void)setRecordIDsToGrant:(NSArray *)arg1 ;
-(NSArray *)recordIDsToRevoke;
-(void)setRecordIDsToRevoke:(NSArray *)arg1 ;
-(BOOL)makeStateTransition;
-(void)setRecordsToSaveByID:(NSMutableDictionary *)arg1 ;
-(void)setAccessWasGrantedBlock:(id)arg1 ;
-(void)setAccessWasRevokedBlock:(id)arg1 ;
-(void)_fetchRecords;
-(void)_saveRecords;
-(int)numSaveAttempts;
-(void)setNumSaveAttempts:(int)arg1 ;
-(void)_handleRecordSaved:(id)arg1 error:(id)arg2 ;
-(PCSIdentityDataRef)_copyShareProtectionFromRecord:(id)arg1 error:(id*)arg2 ;
-(void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3 ;
-(NSMutableSet *)fetchedRecordIDs;
-(void)setFetchedRecordIDs:(NSMutableSet *)arg1 ;
-(id)accessWasGrantedBlock;
-(id)accessWasRevokedBlock;
@end

