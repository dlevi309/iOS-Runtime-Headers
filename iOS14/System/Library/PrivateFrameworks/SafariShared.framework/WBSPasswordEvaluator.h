/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

