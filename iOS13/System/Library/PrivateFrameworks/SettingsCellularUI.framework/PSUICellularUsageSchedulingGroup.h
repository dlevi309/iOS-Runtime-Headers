/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/PSBillingPeriodSelectorSpecifierDelegate.h>
#import <libobjc.A.dylib/PSAppCellularUsageSpecifierDelegate.h>
#import <libobjc.A.dylib/PSUIResetStatisticsGroupDelegate.h>

@class PSListController, CTUIListWithHeaderLoadingGroup, PSUICellularUsageLayoutGroup;

@interface PSUICellularUsageSchedulingGroup : NSObject <PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate, PSUIResetStatisticsGroupDelegate> {

	PSListController* _hostController;
	CTUIListWithHeaderLoadingGroup* _loadingGroup;
	PSUICellularUsageLayoutGroup* _dataUsageSyncGroup;

}

@property (assign,nonatomic,__weak) PSListController * hostController;                       //@synthesize hostController=_hostController - In the implementation block
@property (nonatomic,retain) CTUIListWithHeaderLoadingGroup * loadingGroup;                  //@synthesize loadingGroup=_loadingGroup - In the implementation block
@property (nonatomic,retain) PSUICellularUsageLayoutGroup * dataUsageSyncGroup;              //@synthesize dataUsageSyncGroup=_dataUsageSyncGroup - In the implementation block
-(id)specifiers;
-(void)prefetchResourcesFor:(id)arg1 ;
-(void)presentAlert:(id)arg1 ;
-(CTUIListWithHeaderLoadingGroup *)loadingGroup;
-(PSListController *)hostController;
-(void)didFailToSetPolicy:(id)arg1 forSpecifier:(id)arg2 ;
-(void)calculateUsage;
-(void)setHostController:(PSListController *)arg1 ;
-(void)setLoadingGroup:(CTUIListWithHeaderLoadingGroup *)arg1 ;
-(void)setGroupSpecifierTitle:(id)arg1 ;
-(void)didResetStatistics;
-(id)initWithListController:(id)arg1 groupSpecifierTitle:(id)arg2 ;
-(PSUICellularUsageLayoutGroup *)dataUsageSyncGroup;
-(void)selectedBillingPeriodChanged:(unsigned long long)arg1 ;
-(void)setDataUsageSyncGroup:(PSUICellularUsageLayoutGroup *)arg1 ;
@end

