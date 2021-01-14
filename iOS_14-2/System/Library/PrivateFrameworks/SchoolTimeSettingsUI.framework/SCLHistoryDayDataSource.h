/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <SchoolTimeSettingsUI/SCLSpecifierDataSource.h>

@class PSSpecifier;

@interface SCLHistoryDayDataSource : SCLSpecifierDataSource {

	PSSpecifier* _countSpecifier;
	PSSpecifier* _itemSpecifier;

}

@property (nonatomic,retain) PSSpecifier * countSpecifier;              //@synthesize countSpecifier=_countSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * itemSpecifier;               //@synthesize itemSpecifier=_itemSpecifier - In the implementation block
-(id)initWithListController:(id)arg1 viewModel:(id)arg2 historyGroup:(id)arg3 title:(id)arg4 ;
-(void)setCountSpecifier:(PSSpecifier *)arg1 ;
-(void)setItemSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)countSpecifier;
-(PSSpecifier *)itemSpecifier;
@end

