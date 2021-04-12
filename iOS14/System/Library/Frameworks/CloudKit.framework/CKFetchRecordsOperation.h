/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchRecordsOperationCallbacks.h>
#import <libobjc.A.dylib/CKOperationInMemoryAssets.h>

@class NSMutableDictionary, NSArray, NSMutableSet, NSDictionary, CKFetchRecordsOperationInfo;

@interface CKFetchRecordsOperation : CKDatabaseOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets> {

	BOOL _isFetchCurrentUserOperation;
	BOOL _shouldFetchAssetContent;
	BOOL _shouldFetchAssetContentInMemory;
	BOOL _dropInMemoryAssetContentASAP;
	NSMutableDictionary* _assetInfoByArrayIndexByRecordKeyByRecordID;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSMutableSet* _packagesToDestroy;
	NSMutableDictionary* _recordErrors;
	NSDictionary* _webSharingIdentityDataByRecordID;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;
	NSMutableDictionary* _recordIDsToRecords;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;

}

@property (nonatomic,retain) NSMutableSet * packagesToDestroy;                                                 //@synthesize packagesToDestroy=_packagesToDestroy - In the implementation block
@property (nonatomic,readonly) id<CKFetchRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchRecordsOperationInfo * operationInfo; 
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                               //@synthesize recordErrors=_recordErrors - In the implementation block
@property (assign,nonatomic) BOOL isFetchCurrentUserOperation;                                                 //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                                  //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                                     //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;                                             //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (assign,nonatomic) BOOL dropInMemoryAssetContentASAP;                                                //@synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP - In the implementation block
@property (nonatomic,copy) NSDictionary * assetTransferOptionsByRecordTypeAndKey;                              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToRecords;                                         //@synthesize recordIDsToRecords=_recordIDsToRecords - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredPackageFileIndices;                                           //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToETags;                                                    //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToVersionETags;                                             //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                                          //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                                        //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                                                     //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetInfoByArrayIndexByRecordKeyByRecordID;                 //@synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(id)fetchCurrentUserRecordOperation;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setDropInMemoryAssetContentASAP:(BOOL)arg1 ;
-(void)performCKOperation;
-(id)init;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(void)handleFetchForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(BOOL)claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)recordErrors;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(NSMutableSet *)packagesToDestroy;
-(void)handleAssetDataForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(long long)arg3 data:(id)arg4 offset:(unsigned long long)arg5 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(id)perRecordProgressBlock;
-(void)setIsFetchCurrentUserOperation:(BOOL)arg1 ;
-(NSArray *)recordIDs;
-(void)setAssetInfoByArrayIndexByRecordKeyByRecordID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)recordIDsToRecords;
-(NSMutableDictionary *)assetInfoByArrayIndexByRecordKeyByRecordID;
-(BOOL)isFetchCurrentUserOperation;
-(NSArray *)desiredKeys;
-(NSDictionary *)recordIDsToVersionETags;
-(void)setPackagesToDestroy:(NSMutableSet *)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setRecordIDsToRecords:(NSMutableDictionary *)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(NSDictionary *)recordIDsToETags;
-(BOOL)dropInMemoryAssetContentASAP;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)handleFetchForRecordID:(id)arg1 didProgress:(double)arg2 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSDictionary *)desiredPackageFileIndices;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(id)perRecordCompletionBlock;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
@end

