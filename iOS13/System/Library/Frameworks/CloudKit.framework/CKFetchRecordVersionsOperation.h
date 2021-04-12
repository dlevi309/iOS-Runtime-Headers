/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSString, NSMutableDictionary;

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation {

	BOOL _isDeleted;
	BOOL _shouldFetchAssetContent;
	/*^block*/id _fetchRecordVersionsProgressBlock;
	/*^block*/id _fetchRecordVersionsCompletionBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	NSMutableDictionary* _recordErrors;

}

@property (nonatomic,retain) NSMutableDictionary * recordErrors;               //@synthesize recordErrors=_recordErrors - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                   //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                     //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) NSString * minimumVersionETag;                      //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (nonatomic,copy) id fetchRecordVersionsProgressBlock;                //@synthesize fetchRecordVersionsProgressBlock=_fetchRecordVersionsProgressBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordVersionsCompletionBlock;              //@synthesize fetchRecordVersionsCompletionBlock=_fetchRecordVersionsCompletionBlock - In the implementation block
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(BOOL)isDeleted;
-(void)setRecordIDs:(NSArray *)arg1 ;
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
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSArray *)desiredKeys;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(id)fetchRecordVersionsProgressBlock;
-(id)fetchRecordVersionsCompletionBlock;
-(void)setFetchRecordVersionsCompletionBlock:(id)arg1 ;
-(void)setFetchRecordVersionsProgressBlock:(id)arg1 ;
-(void)setIsDeleted:(BOOL)arg1 ;
@end

