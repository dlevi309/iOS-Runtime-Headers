/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSDictionary, NSOperation, NSMutableDictionary;

@interface CKDPublishAssetsOperation : CKDDatabaseOperation {

	/*^block*/id _assetPublishedBlock;
	NSArray* _recordIDs;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSOperation* _fetchRecordsOperation;
	NSMutableDictionary* _fetchedRecordsByID;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * recordIDs;                                                             //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * fileNamesByAssetFieldNames;                                       //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                                                 //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                                                   //@synthesize URLOptions=_URLOptions - In the implementation block
@property (retain) NSOperation * fetchRecordsOperation;                                                       //@synthesize fetchRecordsOperation=_fetchRecordsOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchedRecordsByID;                                        //@synthesize fetchedRecordsByID=_fetchedRecordsByID - In the implementation block
@property (nonatomic,copy) id assetPublishedBlock;                                                            //@synthesize assetPublishedBlock=_assetPublishedBlock - In the implementation block
@property (nonatomic,retain) id<CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy; 
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(unsigned long long)URLOptions;
-(unsigned long long)requestedTTL;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
-(id)assetPublishedBlock;
-(void)setAssetPublishedBlock:(id)arg1 ;
-(void)main;
-(NSArray *)recordIDs;
-(BOOL)makeStateTransition;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)cancel;
-(void)_fetchRecords;
-(void)_fetchPCSForRecords;
-(NSMutableDictionary *)fetchedRecordsByID;
-(void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(OpaquePCSShareProtectionRef)arg3 error:(id)arg4 ;
-(void)setFetchRecordsOperation:(NSOperation *)arg1 ;
-(NSOperation *)fetchRecordsOperation;
-(void)setFetchedRecordsByID:(NSMutableDictionary *)arg1 ;
@end

