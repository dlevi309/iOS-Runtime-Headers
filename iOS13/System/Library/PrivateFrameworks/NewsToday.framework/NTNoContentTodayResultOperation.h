/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NTTodayResultOperation.h>

@class NTTodayResults, NSDictionary, NTPBTodayResultOperationFetchInfo;

@interface NTNoContentTodayResultOperation : NTTodayResultOperation {

	NTTodayResults* _resultTodayResults;
	NSDictionary* _resultAssetHandlesByAssetID;
	NTPBTodayResultOperationFetchInfo* _resultFetchInfo;

}

@property (nonatomic,copy) NTTodayResults * resultTodayResults;                              //@synthesize resultTodayResults=_resultTodayResults - In the implementation block
@property (nonatomic,copy) NSDictionary * resultAssetHandlesByAssetID;                       //@synthesize resultAssetHandlesByAssetID=_resultAssetHandlesByAssetID - In the implementation block
@property (nonatomic,copy) NTPBTodayResultOperationFetchInfo * resultFetchInfo;              //@synthesize resultFetchInfo=_resultFetchInfo - In the implementation block
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultTodayResults:(NTTodayResults *)arg1 ;
-(void)setResultAssetHandlesByAssetID:(NSDictionary *)arg1 ;
-(void)setResultFetchInfo:(NTPBTodayResultOperationFetchInfo *)arg1 ;
-(NTTodayResults *)resultTodayResults;
-(NSDictionary *)resultAssetHandlesByAssetID;
-(NTPBTodayResultOperationFetchInfo *)resultFetchInfo;
@end

