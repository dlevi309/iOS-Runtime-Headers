/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
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

