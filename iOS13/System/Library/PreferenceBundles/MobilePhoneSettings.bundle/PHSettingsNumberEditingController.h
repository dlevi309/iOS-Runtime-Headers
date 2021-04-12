/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSString;

@interface PHSettingsNumberEditingController : PSListController {

	NSString* _previousString;
	NSString* _previousStringSuggestion;

}

@property (nonatomic,copy) NSString * previousString;                        //@synthesize previousString=_previousString - In the implementation block
@property (nonatomic,copy) NSString * previousStringSuggestion;              //@synthesize previousStringSuggestion=_previousStringSuggestion - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(SCD_Struct_PH3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(id)specifiers;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)setPreviousString:(NSString *)arg1 ;
-(NSString *)previousStringSuggestion;
-(void)setPreviousStringSuggestion:(NSString *)arg1 ;
-(NSString *)previousString;
@end

