/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class PASScoreDict, NSString;

@interface PASScoreInterpreterCtx : NSObject {

	unsigned long long stackLen;
	double stack[500];
	PASScoreDict* inputScores;
	PASScoreDict* subscores;
	NSString* intentType;

}
-(id)initWithInputScores:(id)arg1 ;
@end

