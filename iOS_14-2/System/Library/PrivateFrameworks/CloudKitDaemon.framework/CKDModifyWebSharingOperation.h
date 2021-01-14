/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableSet, NSMutableDictionary;

@interface CKDModifyWebSharingOperation : CKDDatabaseOperation {

	int _numSaveAttempts;
	/*^block*/id _recordWebSharedBlock;
	/*^block*/id _recordWebUnsharedBlock;
	NSArray* _recordIDsToShare;
	NSArray* _recordIDsToUnshare;
	NSArray* _recordIDsToShareReadWrite;
	NSMutableSet* _fetchedRecordIDs;
	NSMutableDictionary* _recordsToSaveByID;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * recordIDsToShare;                                                         //@synthesize recordIDsToShare=_recordIDsToShare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToUnshare;                                                       //@synthesize recordIDsToUnshare=_recordIDsToUnshare - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToShareReadWrite;                                                //@synthesize recordIDsToShareReadWrite=_recordIDsToShareReadWrite - In the implementation block
@property (nonatomic,retain) NSMutableSet * fetchedRecordIDs;                                                    //@synthesize fetchedRecordIDs=_fetchedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsToSaveByID;                                            //@synthesize recordsToSaveByID=_recordsToSaveByID - In the implementation block
@property (assign,nonatomic) int numSaveAttempts;                                                                //@synthesize numSaveAttempts=_numSaveAttempts - In the implementation block
@property (nonatomic,retain) id<CKModifyWebSharingOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordWebSharedBlock;                                                              //@synthesize recordWebSharedBlock=_recordWebSharedBlock - In the implementation block
@property (nonatomic,copy) id recordWebUnsharedBlock;                                                            //@synthesize recordWebUnsharedBlock=_recordWebUnsharedBlock - In the implementation block
+(long long)isPredominatelyDownload;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSMutableDictionary *)recordsToSaveByID;
-(void)main;
-(BOOL)makeStateTransition;
-(NSArray *)recordIDsToShare;
-(void)setRecordIDsToShare:(NSArray *)arg1 ;
-(NSArray *)recordIDsToUnshare;
-(void)setRecordIDsToUnshare:(NSArray *)arg1 ;
-(NSArray *)recordIDsToShareReadWrite;
-(void)setRecordIDsToShareReadWrite:(NSArray *)arg1 ;
-(void)setRecordsToSaveByID:(NSMutableDictionary *)arg1 ;
-(void)setRecordWebSharedBlock:(id)arg1 ;
-(void)setRecordWebUnsharedBlock:(id)arg1 ;
-(void)_fetchRecords;
-(void)_saveRecords;
-(int)numSaveAttempts;
-(id)recordWebSharedBlock;
-(id)recordWebUnsharedBlock;
-(void)setNumSaveAttempts:(int)arg1 ;
-(void)_handleRecordSaved:(id)arg1 error:(id)arg2 ;
-(PCSIdentityDataRef)_copyShareProtectionFromRecord:(id)arg1 error:(id*)arg2 ;
-(void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3 ;
-(NSMutableSet *)fetchedRecordIDs;
-(void)setFetchedRecordIDs:(NSMutableSet *)arg1 ;
@end

