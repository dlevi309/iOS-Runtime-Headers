/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, PSSpecifier, NSString;

@interface PSUICellularDataPlanDetailGroup : NSObject <PSSpecifierGroup> {

	PSListController* _listController;
	PSSpecifier* _groupSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configurePlanSpecifiers:(id)arg1 planItem:(id)arg2 target:(id)arg3 ;
+(id)accountManageButtonForPlanItem:(id)arg1 target:(id)arg2 ;
+(id)specifiersFromCellularPlanItem:(id)arg1 target:(id)arg2 ;
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setListController:(PSListController *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)managePlanPressed:(id)arg1 ;
-(id)getPlanPurchaseDate:(id)arg1 ;
-(id)getPlanExpireDate:(id)arg1 ;
-(id)getPlanStatusDate:(id)arg1 ;
-(id)getPlanCellDataNumber:(id)arg1 ;
-(id)localizedManageAccountAlertTitle:(id)arg1 ;
-(id)removeCellularPlanConfirmationTitle:(id)arg1 ;
-(id)removeCellularPlanConfirmationMessage:(id)arg1 ;
-(id)lastUpdatedText;
-(id)getPlanDetailedStatus:(id)arg1 ;
-(id)getPlanStatus:(id)arg1 ;
-(id)getPlanStatusDataOnly:(id)arg1 ;
@end

