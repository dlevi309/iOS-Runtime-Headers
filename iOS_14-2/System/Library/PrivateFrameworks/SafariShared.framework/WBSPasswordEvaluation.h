/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSArray, WBSPasswordPatternMatch;

@interface WBSPasswordEvaluation : NSObject {

	double _guessesRequired;
	NSString* _password;
	NSArray* _patternMatches;
	long long _evaluationType;

}

@property (nonatomic,copy,readonly) NSString * password;                                               //@synthesize password=_password - In the implementation block
@property (nonatomic,copy,readonly) NSArray * patternMatches;                                          //@synthesize patternMatches=_patternMatches - In the implementation block
@property (nonatomic,readonly) long long evaluationType;                                               //@synthesize evaluationType=_evaluationType - In the implementation block
@property (nonatomic,readonly) double guessesRequired;                                                 //@synthesize guessesRequired=_guessesRequired - In the implementation block
@property (nonatomic,readonly) unsigned long long strength; 
@property (nonatomic,readonly) BOOL userShouldBeShownPassiveWarning; 
@property (nonatomic,readonly) BOOL userShouldBeShownActiveWarning; 
@property (nonatomic,readonly) WBSPasswordPatternMatch * bestPatternMatchForUserFeedback; 
@property (nonatomic,readonly) NSString * userFeedbackString; 
-(unsigned long long)strength;
-(BOOL)userShouldBeShownPassiveWarning;
-(NSString *)userFeedbackString;
-(NSString *)password;
-(id)initWithEvaluationType:(long long)arg1 password:(id)arg2 patternMatches:(id)arg3 guessesRequired:(double)arg4 ;
-(double)guessesRequired;
-(BOOL)userShouldBeShownActiveWarning;
-(long long)evaluationType;
-(unsigned long long)_userFeedbackLengthScoreForPatternMatch:(id)arg1 ;
-(WBSPasswordPatternMatch *)bestPatternMatchForUserFeedback;
-(BOOL)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)arg1 ;
-(id)_passwordFeedbackString;
-(NSArray *)patternMatches;
-(id)_bestPatternMatchOfType:(unsigned long long)arg1 ;
-(id)compactDescriptionWithPasswordColumnWidth:(unsigned long long)arg1 includePatternMatches:(BOOL)arg2 ;
@end

