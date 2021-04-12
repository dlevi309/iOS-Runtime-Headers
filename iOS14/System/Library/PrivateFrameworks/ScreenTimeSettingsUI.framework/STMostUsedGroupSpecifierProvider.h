/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STShowMoreUsageGroupSpecifierProvider.h>

@class NSDictionary;

@interface STMostUsedGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider {

	NSDictionary* _allowancesByActiveBudgetedIdentifier;
	unsigned long long _selectedItemType;

}

@property (nonatomic,copy) NSDictionary * allowancesByActiveBudgetedIdentifier;              //@synthesize allowancesByActiveBudgetedIdentifier=_allowancesByActiveBudgetedIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long selectedItemType;                            //@synthesize selectedItemType=_selectedItemType - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)showMostUsedDetailListController:(id)arg1 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(id)newSpecifierWithUsageItem:(id)arg1 ;
-(void)updateSpecifier:(id)arg1 usageItem:(id)arg2 ;
-(void)toggleSelectedItemType:(id)arg1 ;
-(unsigned long long)selectedItemType;
-(void)reloadMostUsedSpecifiers;
-(void)loadActiveBudgetedIdentifiers;
-(id)getUsageItem:(id)arg1 ;
-(id)allowanceIconForUsageItem:(id)arg1 ;
-(void)setAllowancesByActiveBudgetedIdentifier:(NSDictionary *)arg1 ;
-(void)setSelectedItemType:(unsigned long long)arg1 ;
-(NSDictionary *)allowancesByActiveBudgetedIdentifier;
@end

