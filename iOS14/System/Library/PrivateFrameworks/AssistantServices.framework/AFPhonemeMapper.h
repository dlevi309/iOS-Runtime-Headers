/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSString, NSDictionary, NSRegularExpression;

@interface AFPhonemeMapper : NSObject {

	NSString* _languageCode;
	NSDictionary* _phonemeMap;
	NSRegularExpression* _regex;

}
+(id)_mapForLanguageCode:(id)arg1 ;
+(id)_buildRegexMatchingSubstrings:(id)arg1 ;
-(id)stringByReplacingPhonemesInString:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
@end

