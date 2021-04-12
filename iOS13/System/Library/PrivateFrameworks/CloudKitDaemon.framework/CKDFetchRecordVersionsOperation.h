/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) NSArray * recordIDs;                                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSString * minimumVersionETag;                                      //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                                     //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                       //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchVersionsGroup;                    //@synthesize fetchVersionsGroup=_fetchVersionsGroup - In the implementation block
@property (nonatomic,readonly) CKDDecryptRecordsOperation * recordDecryptOperation; 
@property (nonatomic,copy) id recordVersionFetchedBlock;                                         //@synthesize recordVersionFetchedBlock=_recordVersionFetchedBlock - In the implementation block
-(void)main;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(BOOL)isDeleted;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSArray *)recordIDs;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSArray *)desiredKeys;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(void)setIsDeleted:(BOOL)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordVersionFetchedBlock:(id)arg1 ;
-(CKDDecryptRecordsOperation *)recordDecryptOperation;
-(BOOL)hasDecryptOperation;
-(void)setFetchVersionsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchVersionsGroup;
-(id)recordVersionFetchedBlock;
-(void)_handleRecordVersionsFetchedForID:(id)arg1 isDeleted:(BOOL)arg2 versions:(id)arg3 responseCode:(id)arg4 ;
@end

