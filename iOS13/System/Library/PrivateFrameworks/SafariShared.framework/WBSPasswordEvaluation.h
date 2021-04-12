/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSArray;

@interface WBSPasswordEvaluation : NSObject {

	double _guessesRequired;
	NSString* _password;
	NSArray* _patternMatches;
	long long _evaluationType;

}

@property (nonatomic,copy,readonly) NSString * password;                          //@synthesize password=_password - In the implementation block
@property (nonatomic,copy,readonly) NSArray * patternMatches;                     //@synthesize patternMatches=_patternMatches - In the implementation block
@property (nonatomic,readonly) long long evaluationType;                          //@synthesize evaluationType=_evaluationType - In the implementation block
@property (nonatomic,readonly) double guessesRequired;                            //@synthesize guessesRequired=_guessesRequired - In the implementation block
@property (nonatomic,readonly) unsigned long long strength; 
@property (nonatomic,readonly) BOOL userShouldBeShownPassiveWarning; 
@property (nonatomic,readonly) BOOL userShouldBeShownActiveWarning; 
@property (nonatomic,readonly) NSString * userFeedbackString; 
-(NSString *)password;
-(unsigned long long)strength;
-(BOOL)userShouldBeShownPassiveWarning;
-(NSString *)userFeedbackString;
-(id)initWithEvaluationType:(long long)arg1 password:(id)arg2 patternMatches:(id)arg3 guessesRequired:(double)arg4 ;
-(double)guessesRequired;
-(id)_bestPatternMatchOfType:(unsigned long long)arg1 ;
-(BOOL)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)arg1 ;
-(id)_passwordFeedbackStrings;
-(BOOL)userShouldBeShownActiveWarning;
-(id)compactDescriptionWithPasswordColumnWidth:(unsigned long long)arg1 includePatternMatches:(BOOL)arg2 ;
-(NSArray *)patternMatches;
-(long long)evaluationType;
@end

