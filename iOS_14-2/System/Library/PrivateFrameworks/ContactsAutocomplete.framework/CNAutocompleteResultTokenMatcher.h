/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class NSArray, NSString;

@interface CNAutocompleteResultTokenMatcher : NSObject {

	NSArray* _tokens;
	NSString* _countryCode;

}
+(id)searchTokensFromString:(id)arg1 ;
+(id)normalizePhoneNumber:(id)arg1 countryCode:(id)arg2 ;
+(id)indexTokensFromPhoneNumber:(id)arg1 ;
+(id)tokenizePhoneNumber:(id)arg1 ;
-(id)init;
-(id)initWithSearchString:(id)arg1 ;
-(/*^block*/id)filterAdapter;
-(id)initWithSearchString:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)evaluateResult:(id)arg1 ;
-(BOOL)evaluateSingleResult:(id)arg1 ;
-(BOOL)evaluateTopLevelGroupResult:(id)arg1 ;
-(id)nameTokensForResult:(id)arg1 ;
-(id)tokensForResultName:(id)arg1 ;
-(id)tokensForResultValue:(id)arg1 ;
-(id)representationsOfPhoneNumber:(id)arg1 ;
@end

