/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <Preferences/PSTextEditingPane.h>

@class NSString;

@interface TPSPhoneNumberEditingPane : PSTextEditingPane {

	NSString* _previousStringSuggestion;

}

@property (nonatomic,copy) NSString * previousStringSuggestion;              //@synthesize previousStringSuggestion=_previousStringSuggestion - In the implementation block
-(SCD_Struct_TP3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(NSString *)previousStringSuggestion;
-(void)setPreviousStringSuggestion:(NSString *)arg1 ;
@end

