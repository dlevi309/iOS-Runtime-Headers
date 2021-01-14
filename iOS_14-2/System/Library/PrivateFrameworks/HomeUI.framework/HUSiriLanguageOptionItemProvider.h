/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@class NSSet, HFAccessorySettingSiriLanguageAdapter;

@interface HUSiriLanguageOptionItemProvider : HFItemProvider {

	NSSet* _items;
	unsigned long long _optionStyle;
	HFAccessorySettingSiriLanguageAdapter* _adapter;

}

@property (nonatomic,retain) NSSet * items;                                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long optionStyle;                               //@synthesize optionStyle=_optionStyle - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingSiriLanguageAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
-(void)setItems:(NSSet *)arg1 ;
-(NSSet *)items;
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(id)reloadItems;
-(id)initWithAdapter:(id)arg1 optionStyle:(unsigned long long)arg2 ;
-(unsigned long long)optionStyle;
@end

