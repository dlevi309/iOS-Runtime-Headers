/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject {

	NSMutableData* _data;
	int _predictionCount;
	BOOL _finished;

}
-(id)finish;
-(void)recordPrediction:(id)arg1 score:(float)arg2 ;
-(id)init;
@end

