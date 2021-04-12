/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STUsageGroupSpecifierProvider.h>
#import <libobjc.A.dylib/STAllowanceDetailListControllerDelegate.h>

@class NSSet, STUsageItem, PSSpecifier, NSString;

@interface STAllowanceProgressGroupSpecifierProvider : STUsageGroupSpecifierProvider <STAllowanceDetailListControllerDelegate> {

	NSSet* _budgetedIdentifiers;
	STUsageItem* _usageItem;
	PSSpecifier* _addAllowanceSpecifier;

}

@property (nonatomic,copy,readonly) NSSet * budgetedIdentifiers;              //@synthesize budgetedIdentifiers=_budgetedIdentifiers - In the implementation block
@property (nonatomic,readonly) STUsageItem * usageItem;                       //@synthesize usageItem=_usageItem - In the implementation block
@property (copy,readonly) PSSpecifier * addAllowanceSpecifier;                //@synthesize addAllowanceSpecifier=_addAllowanceSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(void)_didFetchAppInfo:(id)arg1 ;
-(void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2 ;
-(void)allowanceDetailControllerDidCancel:(id)arg1 ;
-(void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2 ;
-(id)_specifierForAllowance:(id)arg1 ;
-(id)initWithBudgetedIdentifiers:(id)arg1 usageItem:(id)arg2 ;
-(void)_showAllowanceSetupListController:(id)arg1 ;
-(void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(NSSet *)budgetedIdentifiers;
-(PSSpecifier *)addAllowanceSpecifier;
-(id)_allowanceDetailText:(id)arg1 ;
-(void)_showAllowanceDetailListController:(id)arg1 ;
-(STUsageItem *)usageItem;
@end

