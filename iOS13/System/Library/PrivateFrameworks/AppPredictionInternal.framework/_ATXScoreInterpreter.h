/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDictionary;

@interface _ATXScoreInterpreter : NSObject {

	NSDictionary* _varPrograms;

}
-(id)initWithParseRoot:(id)arg1 ;
-(void)_compileRoot:(id)arg1 ;
-(double)_evalVariable:(id)arg1 withCtx:(id)arg2 ;
-(id)evaluateWithInputScores:(id)arg1 intentType:(id)arg2 ;
-(id)evaluateWithInputScoreDict:(id)arg1 intentType:(id)arg2 ;
@end

