/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class CKDDecryptRecordsOperation, NSArray, NSString, NSObject;

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation {

	CKDDecryptRecordsOperation* _decryptOperation;
	BOOL _isDeleted;
	BOOL _shouldFetchAssetContent;
	/*^block*/id _recordVersionFetchedBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	NSObject*<OS_dispatch_group> _fetchVersionsGroup;

}

@property (nonatomic,retain) NSArray * recordIDs;                                                                   //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                                                 //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSString * minimumVersionETag;                                                         //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                                                        //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                                          //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchVersionsGroup;                                       //@synthesize fetchVersionsGroup=_fetchVersionsGroup - In the implementation block
@property (nonatomic,readonly) CKDDecryptRecordsOperation * recordDecryptOperation; 
@property (nonatomic,retain) id<CKFetchRecordVersionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordVersionFetchedBlock;                                                            //@synthesize recordVersionFetchedBlock=_recordVersionFetchedBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(BOOL)shouldFetchAssetContent;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(BOOL)isDeleted;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)main;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(void)setIsDeleted:(BOOL)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setRecordVersionFetchedBlock:(id)arg1 ;
-(CKDDecryptRecordsOperation *)recordDecryptOperation;
-(BOOL)hasDecryptOperation;
-(void)setFetchVersionsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchVersionsGroup;
-(id)recordVersionFetchedBlock;
-(void)_handleRecordVersionsFetchedForID:(id)arg1 isDeleted:(BOOL)arg2 versions:(id)arg3 responseCode:(id)arg4 ;
@end

