/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSPasswordWordListCollection, WBSPasswordPatternMatcher;

@interface WBSPasswordEvaluator : NSObject {

	WBSPasswordWordListCollection* _passwordWordListCollection;
	WBSPasswordWordListCollection* _passcodeWordListCollection;
	WBSPasswordPatternMatcher* _patternMatcher;

}
+(id)standardPasswordEvaluator;
+(BOOL)passwordLooksLikeDigitOnlyPasscode:(id)arg1 ;
-(id)evaluatePassword:(id)arg1 ;
-(id)_initWithPasswordWordListCollection:(id)arg1 passcodeWordListCollection:(id)arg2 ;
@end

