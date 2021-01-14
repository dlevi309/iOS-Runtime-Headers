/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <Preferences/PSTextEditingPane.h>

@class NSString;

@interface TPSPhoneNumberEditingPane : PSTextEditingPane {

	NSString* _previousStringSuggestion;

}

@property (nonatomic,copy) NSString * previousStringSuggestion;              //@synthesize previousStringSuggestion=_previousStringSuggestion - In the implementation block
-(void)setPreferenceSpecifier:(id)arg1 ;
-(SCD_Struct_TP3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(NSString *)previousStringSuggestion;
-(void)setPreviousStringSuggestion:(NSString *)arg1 ;
@end

