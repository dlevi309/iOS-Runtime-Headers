/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSMutableData;

@interface ATXFeedbackStateBuilder : NSObject {

	NSMutableData* _data;
	int _predictionCount;
	BOOL _finished;

}
-(id)finish;
-(id)init;
-(void)recordPrediction:(id)arg1 actionHash:(unsigned long long)arg2 totalScore:(float)arg3 scoreInputs:(const float*)arg4 isMediumConfidenceForBlendingLayer:(BOOL)arg5 isHighConfidenceForBlendingLayer:(BOOL)arg6 ;
-(id)initWithABGroup:(id)arg1 assetVersion:(long long)arg2 ;
@end

