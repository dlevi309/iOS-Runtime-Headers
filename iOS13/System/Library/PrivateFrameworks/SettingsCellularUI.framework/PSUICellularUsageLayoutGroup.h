/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@protocol PSBillingPeriodSelectorSpecifierDelegate, PSAppCellularUsageSpecifierDelegate;
@class PSCellularManagementCache, PSDataUsageStatisticsCache, PSUICarrierSpaceManager, PSListController, NSString, NSArray, PSUICellularUsageContentSpecifiers, PSUITotalCellularUsageSubgroup, PSUICallTimeGroup, PSUIResetStatisticsGroup;

@interface PSUICellularUsageLayoutGroup : NSObject {

	PSCellularManagementCache* _managementCache;
	PSDataUsageStatisticsCache* _statisticsCache;
	PSUICarrierSpaceManager* _carrierSpaceManager;
	PSListController* _hostController;
	id<PSBillingPeriodSelectorSpecifierDelegate> _billingCycleDelegate;
	id<PSAppCellularUsageSpecifierDelegate> _policySpecifierDelegate;
	NSString* _groupSpecifierTitle;
	NSArray* _savedHeaderSpecifiers;
	PSUICellularUsageContentSpecifiers* _savedContentSpecifiers;
	PSUITotalCellularUsageSubgroup* _totalUsageSubgroup;
	PSUICallTimeGroup* _callTimeGroup;
	PSUIResetStatisticsGroup* _resetStatisticsGroup;

}

@property (nonatomic,retain) PSCellularManagementCache * managementCache;                                           //@synthesize managementCache=_managementCache - In the implementation block
@property (nonatomic,retain) PSDataUsageStatisticsCache * statisticsCache;                                          //@synthesize statisticsCache=_statisticsCache - In the implementation block
@property (nonatomic,retain) PSUICarrierSpaceManager * carrierSpaceManager;                                         //@synthesize carrierSpaceManager=_carrierSpaceManager - In the implementation block
@property (assign,nonatomic,__weak) PSListController * hostController;                                              //@synthesize hostController=_hostController - In the implementation block
@property (assign,nonatomic,__weak) id<PSBillingPeriodSelectorSpecifierDelegate> billingCycleDelegate;              //@synthesize billingCycleDelegate=_billingCycleDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PSAppCellularUsageSpecifierDelegate> policySpecifierDelegate;                //@synthesize policySpecifierDelegate=_policySpecifierDelegate - In the implementation block
@property (nonatomic,retain) NSString * groupSpecifierTitle;                                                        //@synthesize groupSpecifierTitle=_groupSpecifierTitle - In the implementation block
@property (retain) NSArray * savedHeaderSpecifiers;                                                                 //@synthesize savedHeaderSpecifiers=_savedHeaderSpecifiers - In the implementation block
@property (retain) PSUICellularUsageContentSpecifiers * savedContentSpecifiers;                                     //@synthesize savedContentSpecifiers=_savedContentSpecifiers - In the implementation block
@property (nonatomic,retain) PSUITotalCellularUsageSubgroup * totalUsageSubgroup;                                   //@synthesize totalUsageSubgroup=_totalUsageSubgroup - In the implementation block
@property (nonatomic,retain) PSUICallTimeGroup * callTimeGroup;                                                     //@synthesize callTimeGroup=_callTimeGroup - In the implementation block
@property (nonatomic,retain) PSUIResetStatisticsGroup * resetStatisticsGroup;                                       //@synthesize resetStatisticsGroup=_resetStatisticsGroup - In the implementation block
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(PSDataUsageStatisticsCache *)statisticsCache;
-(void)setStatisticsCache:(PSDataUsageStatisticsCache *)arg1 ;
-(NSArray *)savedHeaderSpecifiers;
-(void)setSavedHeaderSpecifiers:(NSArray *)arg1 ;
-(PSUICellularUsageContentSpecifiers *)savedContentSpecifiers;
-(void)setSavedContentSpecifiers:(PSUICellularUsageContentSpecifiers *)arg1 ;
-(id)initWithGroupSpecifierTitle:(id)arg1 hostController:(id)arg2 managementCache:(id)arg3 statisticsCache:(id)arg4 carrierSpaceManager:(id)arg5 billingCycleDelegate:(id)arg6 policySpecifierDelegate:(id)arg7 ;
-(id)headerSpecifiers;
-(id)contentSpecifiers;
-(void)refreshOrderingOfContentSpecifiers;
-(void)setGroupSpecifierTitle:(NSString *)arg1 ;
-(PSCellularManagementCache *)managementCache;
-(void)setManagementCache:(PSCellularManagementCache *)arg1 ;
-(PSUICarrierSpaceManager *)carrierSpaceManager;
-(void)setCarrierSpaceManager:(PSUICarrierSpaceManager *)arg1 ;
-(id<PSBillingPeriodSelectorSpecifierDelegate>)billingCycleDelegate;
-(void)setBillingCycleDelegate:(id<PSBillingPeriodSelectorSpecifierDelegate>)arg1 ;
-(id<PSAppCellularUsageSpecifierDelegate>)policySpecifierDelegate;
-(void)setPolicySpecifierDelegate:(id<PSAppCellularUsageSpecifierDelegate>)arg1 ;
-(NSString *)groupSpecifierTitle;
-(PSUITotalCellularUsageSubgroup *)totalUsageSubgroup;
-(void)setTotalUsageSubgroup:(PSUITotalCellularUsageSubgroup *)arg1 ;
-(PSUICallTimeGroup *)callTimeGroup;
-(void)setCallTimeGroup:(PSUICallTimeGroup *)arg1 ;
-(PSUIResetStatisticsGroup *)resetStatisticsGroup;
-(void)setResetStatisticsGroup:(PSUIResetStatisticsGroup *)arg1 ;
@end

