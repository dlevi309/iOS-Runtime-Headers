/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDUserActionPredictionDataSource
@property (getter=isDataAvailableForUserActionPredictionDataSource,readonly) BOOL dataAvailableForUserActionPredictionDataSource; 
@required
-(BOOL)isDataAvailableForUserActionPredictionDataSource;
-(id)fetchPredictionsWithLimitForUserActionPredictionDataSource:(unsigned long long)arg1;
-(id)addOrUpdateUserActionPredictions:(id)arg1;
-(id)addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(id)arg1;
-(id)removeUserActionPredictions:(id)arg1;

@end

