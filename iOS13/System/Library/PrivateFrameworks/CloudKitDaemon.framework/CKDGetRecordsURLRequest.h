/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSSet, NSArray, NSDictionary, NSMutableDictionary;

@interface CKDGetRecordsURLRequest : CKDURLRequest {

	BOOL _shouldFetchAssetContent;
	NSSet* _assetFieldNamesToPublishURLs;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSSet* _desiredAssetKeys;
	NSArray* _desiredIndexedListKeys;
	/*^block*/id _recordFetchedBlock;
	NSArray* _recordIDs;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;
	unsigned long long _recordCount;
	NSMutableDictionary* _recordIDByRequestID;
	NSSet* _desiredKeys;

}

@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                        //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                 //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (assign,nonatomic) unsigned long long recordCount;                         //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;              //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSSet * assetFieldNamesToPublishURLs;                   //@synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                        //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                          //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssetKeys;                               //@synthesize desiredAssetKeys=_desiredAssetKeys - In the implementation block
@property (nonatomic,retain) NSArray * desiredIndexedListKeys;                       //@synthesize desiredIndexedListKeys=_desiredIndexedListKeys - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                           //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                    //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
-(int)operationType;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(id)recordFetchedBlock;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSSet *)desiredKeys;
-(unsigned long long)requestedTTL;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(unsigned long long)URLOptions;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(NSDictionary *)recordIDsToETags;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(NSDictionary *)recordIDsToVersionETags;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(NSSet *)assetFieldNamesToPublishURLs;
-(void)setAssetFieldNamesToPublishURLs:(NSSet *)arg1 ;
-(void)setRecordCount:(unsigned long long)arg1 ;
-(unsigned long long)recordCount;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(id)generateRequestOperations;
-(BOOL)requestGETPreAuth;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(NSSet *)desiredAssetKeys;
-(NSArray *)desiredIndexedListKeys;
-(id)requestedListFieldsForDesiredIndexedListKeys;
-(NSMutableDictionary *)recordIDByRequestID;
-(id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4 ;
-(void)setDesiredIndexedListKeys:(NSArray *)arg1 ;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

