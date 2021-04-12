/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class ATXScoreDict, NSString;

@interface _ATXScoreInterpreterCtx : NSObject {

	unsigned long long stackLen;
	double stack[500];
	ATXScoreDict* inputScores;
	ATXScoreDict* subscores;
	NSString* intentType;

}
-(id)initWithInputScores:(id)arg1 intentType:(id)arg2 ;
@end

