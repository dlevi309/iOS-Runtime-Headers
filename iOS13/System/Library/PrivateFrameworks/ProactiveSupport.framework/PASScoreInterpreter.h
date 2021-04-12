/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSDictionary, NSSharedKeySet;

@interface PASScoreInterpreter : NSObject {

	NSDictionary* _varPrograms;
	NSSharedKeySet* _scoreInputSharedKeySet;

}
+(id)scoreInterpreterParseRootFromAsset:(id)arg1 ;
-(id)init;
-(id)evaluateWithInputScores:(id)arg1 ;
-(id)evaluateWithInputScoreDict:(id)arg1 ;
-(id)initWithParseRoot:(id)arg1 ;
-(id)initWithParseRoot:(id)arg1 scoreInputSharedKeySet:(id)arg2 ;
-(void)_compileRoot:(id)arg1 ;
-(double)_evalVariable:(id)arg1 withCtx:(id)arg2 ;
@end

