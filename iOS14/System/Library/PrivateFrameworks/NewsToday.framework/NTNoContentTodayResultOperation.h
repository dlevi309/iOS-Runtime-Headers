/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setResultTodayResults:(NTTodayResults *)arg1 ;
-(void)setResultAssetHandlesByAssetID:(NSDictionary *)arg1 ;
-(void)setResultFetchInfo:(NTPBTodayResultOperationFetchInfo *)arg1 ;
-(NTTodayResults *)resultTodayResults;
-(NSDictionary *)resultAssetHandlesByAssetID;
-(NTPBTodayResultOperationFetchInfo *)resultFetchInfo;
@end

