/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSDictionary, NSArray, NSMutableDictionary;

@interface CKPublishAssetsOperation : CKDatabaseOperation {

	/*^block*/id _assetPublishedBlock;
	/*^block*/id _publishAssetCompletionBlock;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrorsByRecordID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                        //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrorsByRecordID;              //@synthesize perItemErrorsByRecordID=_perItemErrorsByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * fileNamesByAssetFieldNames;                  //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                            //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                              //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,copy) id assetPublishedBlock;                                       //@synthesize assetPublishedBlock=_assetPublishedBlock - In the implementation block
@property (nonatomic,copy) id publishAssetCompletionBlock;                               //@synthesize publishAssetCompletionBlock=_publishAssetCompletionBlock - In the implementation block
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSMutableDictionary *)perItemErrorsByRecordID;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setPerItemErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordIDs;
-(id)initWithRecordIDs:(id)arg1 ;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
-(unsigned long long)requestedTTL;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(unsigned long long)URLOptions;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(id)assetPublishedBlock;
-(id)publishAssetCompletionBlock;
-(void)setPublishAssetCompletionBlock:(id)arg1 ;
-(void)setAssetPublishedBlock:(id)arg1 ;
@end

