/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSSet *)items;
-(void)setItems:(NSSet *)arg1 ;
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(id)reloadItems;
-(id)initWithAdapter:(id)arg1 optionStyle:(unsigned long long)arg2 ;
-(unsigned long long)optionStyle;
@end

