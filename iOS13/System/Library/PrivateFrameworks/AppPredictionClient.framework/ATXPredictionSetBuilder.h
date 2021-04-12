/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject {

	NSMutableData* _data;
	int _predictionCount;
	BOOL _finished;

}
-(id)init;
-(id)finish;
-(void)recordPrediction:(id)arg1 score:(float)arg2 ;
@end

