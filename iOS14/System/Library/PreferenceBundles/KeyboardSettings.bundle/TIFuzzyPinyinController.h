/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableSet, NSArray;

@interface TIFuzzyPinyinController : PSListController {

	PSSpecifier* _fuzzyPinyinSpecifier;
	NSMutableSet* _fuzzyPinyinPairs;
	NSArray* _fuzzyPinyinPairSpecifiers;

}

@property (nonatomic,retain) PSSpecifier * fuzzyPinyinSpecifier;              //@synthesize fuzzyPinyinSpecifier=_fuzzyPinyinSpecifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * fuzzyPinyinPairs;                 //@synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs - In the implementation block
@property (nonatomic,copy) NSArray * fuzzyPinyinPairSpecifiers;               //@synthesize fuzzyPinyinPairSpecifiers=_fuzzyPinyinPairSpecifiers - In the implementation block
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)dealloc;
-(void)setKeyboardPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)readFuzzyPinyinPairs;
-(void)setFuzzyPinyinPairs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)fuzzyPinyinPairs;
-(NSArray *)fuzzyPinyinPairSpecifiers;
-(void)setFuzzyPinyinPairSpecifiers:(NSArray *)arg1 ;
-(id)keyboardPreferenceValue:(id)arg1 ;
-(PSSpecifier *)fuzzyPinyinSpecifier;
-(void)setFuzzyPinyinSpecifier:(PSSpecifier *)arg1 ;
@end

