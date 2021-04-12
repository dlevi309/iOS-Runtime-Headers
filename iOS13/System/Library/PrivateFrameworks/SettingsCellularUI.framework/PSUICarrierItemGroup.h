/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSUICellularPlanManagerCache, CTCellularPlanManager, PSSpecifier, PSListController, NSString;

@interface PSUICarrierItemGroup : NSObject <PSSpecifierGroup> {

	PSUICellularPlanManagerCache* _cellularPlanManager;
	CTCellularPlanManager* _ctCellularPlanManager;
	PSSpecifier* _groupSpecifier;
	PSListController* _listController;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)specifiers;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setListController:(PSListController *)arg1 ;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4 ;
-(id)specifiersForCarrierItems;
-(void)carrierItemPressed:(id)arg1 ;
-(BOOL)hasCarrierItems;
@end

