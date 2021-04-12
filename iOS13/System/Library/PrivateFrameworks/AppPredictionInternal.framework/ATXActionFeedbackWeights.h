/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXActionFeedbackWeights : NSObject {

	[32  _confirmWeights[8]];
	[32  _rejectWeights[8]];

}
+(id)sharedInstance;
-(id)init;
-(id)initWithAssetClass:(Class)arg1 ;
-(float)confirmWeightForFeedbackStage:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 ;
-(float)rejectWeightForFeedbackStage:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 ;
@end

