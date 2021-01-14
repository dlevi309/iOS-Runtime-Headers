/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchRecordVersionsOperationCallbacks.h>

@class NSArray, NSString, NSMutableDictionary, CKFetchRecordVersionsOperationInfo;

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation <CKFetchRecordVersionsOperationCallbacks> {

	BOOL _isDeleted;
	BOOL _shouldFetchAssetContent;
	/*^block*/id _fetchRecordVersionsProgressBlock;
	/*^block*/id _fetchRecordVersionsCompletionBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	NSMutableDictionary* _recordErrors;

}

@property (nonatomic,readonly) id<CKFetchRecordVersionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchRecordVersionsOperationInfo * operationInfo; 
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                                                      //@synthesize recordErrors=_recordErrors - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                                                          //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                                            //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                                                       //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                                     //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) NSString * minimumVersionETag;                                                             //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (nonatomic,copy) id fetchRecordVersionsProgressBlock;                                                       //@synthesize fetchRecordVersionsProgressBlock=_fetchRecordVersionsProgressBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordVersionsCompletionBlock;                                                     //@synthesize fetchRecordVersionsCompletionBlock=_fetchRecordVersionsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(id)fetchRecordVersionsProgressBlock;
-(id)fetchRecordVersionsCompletionBlock;
-(void)setFetchRecordVersionsCompletionBlock:(id)arg1 ;
-(void)setFetchRecordVersionsProgressBlock:(id)arg1 ;
-(void)handleFetchForRecordID:(id)arg1 isDeleted:(BOOL)arg2 versions:(id)arg3 error:(id)arg4 ;
-(NSMutableDictionary *)recordErrors;
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)isDeleted;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(void)setIsDeleted:(BOOL)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
@end

