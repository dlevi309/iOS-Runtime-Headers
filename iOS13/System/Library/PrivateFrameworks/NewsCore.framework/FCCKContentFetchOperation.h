/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCNetworkOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary;

@interface FCCKContentFetchOperation : FCNetworkOperation {

	BOOL _getPermanentAssetURLs;
	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSDictionary* _recordIDsToETags;
	NSArray* _desiredKeys;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSArray* _requestUUIDs;
	long long _networkEventType;
	NSDictionary* _resultRecordsByRecordID;

}

@property (nonatomic,copy) NSArray * requestUUIDs;                                //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * resultRecordsByRecordID;              //@synthesize resultRecordsByRecordID=_resultRecordsByRecordID - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                   //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                     //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                 //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL getPermanentAssetURLs;                          //@synthesize getPermanentAssetURLs=_getPermanentAssetURLs - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                           //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                        //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
@property (assign,nonatomic) long long networkEventType;                          //@synthesize networkEventType=_networkEventType - In the implementation block
-(id)init;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)requestUUIDs;
-(NSArray *)desiredKeys;
-(id)perRecordCompletionBlock;
-(NSDictionary *)recordIDsToETags;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)throttleGroup;
-(void)setNetworkEventType:(long long)arg1 ;
-(long long)networkEventType;
-(void)setResultRecordsByRecordID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultRecordsByRecordID;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(BOOL)getPermanentAssetURLs;
-(id)_operationForRecordID:(id)arg1 ;
-(void)setGetPermanentAssetURLs:(BOOL)arg1 ;
@end

