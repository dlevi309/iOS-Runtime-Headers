/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)recordZoneIDs;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(id)fetchRecordZonesCompletionBlock;
-(void)setResultRecordZonesByZoneID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultRecordZonesByZoneID;
-(void)setFetchRecordZonesCompletionBlock:(id)arg1 ;
@end

