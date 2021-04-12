/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface CKFetchRecordsOperation : CKDatabaseOperation {

	BOOL _shouldFetchAssetContent;
	BOOL _shouldFetchAssetContentInMemory;
	BOOL _dropInMemoryAssetContentASAP;
	BOOL _isFetchCurrentUserOperation;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSMutableSet* _packagesToDestroy;
	NSMutableDictionary* _assetInfoByArrayIndexByRecordKeyByRecordID;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;
	NSMutableDictionary* _recordIDsToRecords;
	NSMutableDictionary* _recordErrors;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,retain) NSMutableSet * packagesToDestroy;                                              //@synthesize packagesToDestroy=_packagesToDestroy - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                                  //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;                                          //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (assign,nonatomic) BOOL dropInMemoryAssetContentASAP;                                             //@synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetInfoByArrayIndexByRecordKeyByRecordID;              //@synthesize assetInfoByArrayIndexByRecordKeyByRecordID=_assetInfoByArrayIndexByRecordKeyByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;                         //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDsToRecords;                                      //@synthesize recordIDsToRecords=_recordIDsToRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                            //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredPackageFileIndices;                                        //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (assign,nonatomic) BOOL isFetchCurrentUserOperation;                                              //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                                               //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                                        //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                               //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                                             //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                           //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                                       //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                                     //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                                                  //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
+(id)fetchCurrentUserRecordOperation;
-(id)init;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)recordIDs;
-(id)initWithRecordIDs:(id)arg1 ;
-(NSMutableSet *)packagesToDestroy;
-(BOOL)claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(void)setPackagesToDestroy:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(NSArray *)desiredKeys;
-(id)perRecordProgressBlock;
-(id)perRecordCompletionBlock;
-(void)setIsFetchCurrentUserOperation:(BOOL)arg1 ;
-(BOOL)isFetchCurrentUserOperation;
-(NSDictionary *)recordIDsToETags;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(NSDictionary *)recordIDsToVersionETags;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredPackageFileIndices;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(BOOL)dropInMemoryAssetContentASAP;
-(void)setDropInMemoryAssetContentASAP:(BOOL)arg1 ;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(NSMutableDictionary *)recordIDsToRecords;
-(id)assetInfoForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(id)arg3 ;
-(NSMutableDictionary *)assetInfoByArrayIndexByRecordKeyByRecordID;
-(void)setAssetInfoByArrayIndexByRecordKeyByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setRecordIDsToRecords:(NSMutableDictionary *)arg1 ;
@end

