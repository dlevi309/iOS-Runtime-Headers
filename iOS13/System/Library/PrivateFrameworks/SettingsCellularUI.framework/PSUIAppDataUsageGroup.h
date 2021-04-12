/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSAppCellularUsageSpecifierDelegate.h>
#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class NSArray, PSListController, PSSpecifier, CTUIListLoadingGroup, NSString;

@interface PSUIAppDataUsageGroup : NSObject <PSAppCellularUsageSpecifierDelegate, PSSpecifierGroup> {

	NSArray* _specifiers;
	PSListController* _hostController;
	PSSpecifier* _groupSpecifier;
	CTUIListLoadingGroup* _loadingGroup;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) CTUIListLoadingGroup * loadingGroup;                   //@synthesize loadingGroup=_loadingGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)prefetchResourcesFor:(id)arg1 ;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)presentAlert:(id)arg1 ;
-(CTUIListLoadingGroup *)loadingGroup;
-(PSListController *)hostController;
-(void)didFailToSetPolicy:(id)arg1 forSpecifier:(id)arg2 ;
-(void)calculateUsage;
-(void)setHostController:(PSListController *)arg1 ;
-(void)setLoadingGroup:(CTUIListLoadingGroup *)arg1 ;
@end

