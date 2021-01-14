/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class PSUICellularDataListItemsController, PSListController, PSSimStatusCache, PSUICellularPlanManagerCache, PSUICoreTelephonyDataCache, PSUICoreTelephonyCallCache, PSUIDeviceWiFiState, NSArray;

@interface PSUICellularDataSpecifier : PSSpecifier {

	PSUICellularDataListItemsController* _detailController;
	PSListController* _hostController;
	PSSimStatusCache* _simStatusCache;
	PSUICellularPlanManagerCache* _planManagerCache;
	PSUICoreTelephonyDataCache* _dataCache;
	PSUICoreTelephonyCallCache* _callCache;
	PSUIDeviceWiFiState* _wifiState;
	NSArray* _cachedPlanItems;

}

@property (assign,nonatomic,__weak) PSListController * hostController;                                   //@synthesize hostController=_hostController - In the implementation block
@property (nonatomic,retain) PSSimStatusCache * simStatusCache;                                          //@synthesize simStatusCache=_simStatusCache - In the implementation block
@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                            //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyDataCache * dataCache;                                     //@synthesize dataCache=_dataCache - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyCallCache * callCache;                                     //@synthesize callCache=_callCache - In the implementation block
@property (nonatomic,retain) PSUIDeviceWiFiState * wifiState;                                            //@synthesize wifiState=_wifiState - In the implementation block
@property (nonatomic,retain) NSArray * cachedPlanItems;                                                  //@synthesize cachedPlanItems=_cachedPlanItems - In the implementation block
@property (assign,nonatomic,__weak) PSUICellularDataListItemsController * detailController;              //@synthesize detailController=_detailController - In the implementation block
-(PSUIDeviceWiFiState *)wifiState;
-(void)setDataCache:(PSUICoreTelephonyDataCache *)arg1 ;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(PSUICoreTelephonyDataCache *)dataCache;
-(void)updateCachedState;
-(id)planItemForListItem:(id)arg1 ;
-(id)subscriptionContextForListItem:(id)arg1 ;
-(NSArray *)cachedPlanItems;
-(void)setCachedPlanItems:(NSArray *)arg1 ;
-(PSSimStatusCache *)simStatusCache;
-(void)setSimStatusCache:(PSSimStatusCache *)arg1 ;
-(PSUICoreTelephonyCallCache *)callCache;
-(void)setCallCache:(PSUICoreTelephonyCallCache *)arg1 ;
-(id)initWithHostController:(id)arg1 ;
-(BOOL)isDetailControllerNeeded;
-(void)setDetailController:(PSUICellularDataListItemsController *)arg1 ;
-(id)initWithHostController:(id)arg1 simStatusCache:(id)arg2 planManagerCache:(id)arg3 callCache:(id)arg4 dataCache:(id)arg5 wifiState:(id)arg6 ;
-(void)setCellularDataEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isCellularDataEnabled:(id)arg1 ;
-(id)_isCellularDataEnabled:(id)arg1 ;
-(void)_setCellularDataEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)callEndConfirmationSpecifier;
-(void)acceptedDataSwitch:(id)arg1 ;
-(void)setCellularDataSwitch:(BOOL)arg1 ;
-(void)_acceptedDataSwitch:(id)arg1 ;
-(void)_setCellularDataSwitch:(id)arg1 ;
-(void)canceledDataSwitch:(id)arg1 ;
-(PSUICellularDataListItemsController *)detailController;
-(void)setWifiState:(PSUIDeviceWiFiState *)arg1 ;
@end

