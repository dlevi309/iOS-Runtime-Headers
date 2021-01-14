/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSString, NSMutableDictionary;

@interface CKDFetchRecordVersionsRequest : CKDURLRequest {

	BOOL _shouldFetchAssetContent;
	BOOL _isDeleted;
	/*^block*/id _recordVersionsFetchedBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	NSMutableDictionary* _recordIDByRequestID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                  //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSString * minimumVersionETag;                          //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;              //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                         //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,copy) id recordVersionsFetchedBlock;                            //@synthesize recordVersionsFetchedBlock=_recordVersionsFetchedBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                           //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
-(BOOL)shouldFetchAssetContent;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(BOOL)isDeleted;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(void)setIsDeleted:(BOOL)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSMutableDictionary *)recordIDByRequestID;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
-(id)initWithOperation:(id)arg1 recordIDs:(id)arg2 desiredKeys:(id)arg3 minimumVersionETag:(id)arg4 ;
-(void)setRecordVersionsFetchedBlock:(id)arg1 ;
-(id)recordVersionsFetchedBlock;
@end

