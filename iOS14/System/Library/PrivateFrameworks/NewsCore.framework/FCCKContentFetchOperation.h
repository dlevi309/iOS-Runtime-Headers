/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCNetworkOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary;

@interface FCCKContentFetchOperation : FCNetworkOperation {

	BOOL _getPermanentAssetURLs;
	int _networkEventType;
	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSDictionary* _recordIDsToETags;
	NSArray* _desiredKeys;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSArray* _requestUUIDs;
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
@property (assign,nonatomic) int networkEventType;                                //@synthesize networkEventType=_networkEventType - In the implementation block
-(BOOL)validateOperation;
-(void)setNetworkEventType:(int)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)throttleGroup;
-(void)performOperation;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(int)networkEventType;
-(id)init;
-(NSDictionary *)resultRecordsByRecordID;
-(NSArray *)requestUUIDs;
-(id)_operationForRecordID:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(BOOL)getPermanentAssetURLs;
-(NSDictionary *)recordIDsToETags;
-(FCCKContentDatabase *)database;
-(id)fetchRecordsCompletionBlock;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(void)setGetPermanentAssetURLs:(BOOL)arg1 ;
-(id)perRecordCompletionBlock;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(void)setResultRecordsByRecordID:(NSDictionary *)arg1 ;
@end

