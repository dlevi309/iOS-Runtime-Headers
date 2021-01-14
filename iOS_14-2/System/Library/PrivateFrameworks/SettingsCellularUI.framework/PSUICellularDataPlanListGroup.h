/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSSpecifier, PSListController, NSString;

@interface PSUICellularDataPlanListGroup : NSObject <PSSpecifierGroup> {

	PSSpecifier* _groupSpecifier;
	PSListController* _listController;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setListController:(PSListController *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)addNewPlanPressed:(id)arg1 ;
-(void)selectPlanWithSpecifier:(id)arg1 ;
-(void)listController:(id)arg1 didSelectSpecifier:(id)arg2 ;
@end

