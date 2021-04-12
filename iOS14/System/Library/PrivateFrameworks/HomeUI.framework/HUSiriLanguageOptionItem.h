/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HFSiriLanguageOption *)languageOption;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(void)setLanguageOption:(HFSiriLanguageOption *)arg1 ;
-(unsigned long long)optionStyle;
-(id)initWithStyle:(unsigned long long)arg1 adapter:(id)arg2 languageOption:(id)arg3 ;
@end

