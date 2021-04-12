/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)recordCount;
-(BOOL)shouldFetchAssetContent;
-(BOOL)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(unsigned long long)URLOptions;
-(unsigned long long)requestedTTL;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(NSSet *)assetFieldNamesToPublishURLs;
-(void)setAssetFieldNamesToPublishURLs:(NSSet *)arg1 ;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(void)setRecordCount:(unsigned long long)arg1 ;
-(NSArray *)recordIDs;
-(NSSet *)desiredKeys;
-(NSDictionary *)recordIDsToVersionETags;
-(id)generateRequestOperations;
-(id)recordFetchedBlock;
-(NSDictionary *)recordIDsToETags;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(BOOL)requestGETPreAuth;
-(NSSet *)desiredAssetKeys;
-(NSArray *)desiredIndexedListKeys;
-(id)requestedListFieldsForDesiredIndexedListKeys;
-(NSMutableDictionary *)recordIDByRequestID;
-(id)initWithOperation:(id)arg1 recordIDs:(id)arg2 recordIDsToEtags:(id)arg3 recordIDsToVersionETags:(id)arg4 desiredKeys:(id)arg5 ;
-(void)setDesiredIndexedListKeys:(NSArray *)arg1 ;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

