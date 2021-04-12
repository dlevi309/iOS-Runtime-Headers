/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordZonesOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordZoneIDs;
	/*^block*/id _fetchRecordZonesCompletionBlock;
	NSDictionary* _resultRecordZonesByZoneID;

}

@property (nonatomic,retain) NSDictionary * resultRecordZonesByZoneID;              //@synthesize resultRecordZonesByZoneID=_resultRecordZonesByZoneID - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                 //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) id fetchRecordZonesCompletionBlock;                      //@synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock - In the implementation block
-(void)setFetchRecordZonesCompletionBlock:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(id)fetchRecordZonesCompletionBlock;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultRecordZonesByZoneID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultRecordZonesByZoneID;
@end

