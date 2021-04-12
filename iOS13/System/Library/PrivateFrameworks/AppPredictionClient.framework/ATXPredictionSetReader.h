/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSData;

@interface ATXPredictionSetReader : NSObject {

	NSData* _data;
	Class _predictedItemClass;
	const char* _perPredictionDataStart;
	int _predictionCount;

}
+(id)bundleIdReader:(id)arg1 ;
+(id)actionReader:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 predictedItemClass:(Class)arg2 ;
-(id)_scoredPredictionFromData:(id)arg1 score:(float)arg2 ;
-(id)readScoredPredictionsWithLimit:(int)arg1 ;
-(id)readScoredPredictionsWithLimit:(int)arg1 filterPredicate:(id)arg2 ;
@end

