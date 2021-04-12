/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption;

@interface HUSiriLanguageOptionItem : HFItem {

	unsigned long long _optionStyle;
	HFAccessorySettingSiriLanguageAdapter* _adapter;
	HFSiriLanguageOption* _languageOption;

}

@property (nonatomic,readonly) unsigned long long optionStyle;                               //@synthesize optionStyle=_optionStyle - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingSiriLanguageAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) HFSiriLanguageOption * languageOption;                          //@synthesize languageOption=_languageOption - In the implementation block
+(id)selectionKeyForLanguageOption:(id)arg1 withOptionStyle:(unsigned long long)arg2 ;
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(HFSiriLanguageOption *)languageOption;
-(void)setLanguageOption:(HFSiriLanguageOption *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)optionStyle;
-(id)initWithStyle:(unsigned long long)arg1 adapter:(id)arg2 languageOption:(id)arg3 ;
@end

