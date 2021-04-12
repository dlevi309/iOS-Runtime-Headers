/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class NSArray, NSDictionary, CTCellularPlanItem;

@interface PSUICellularPlanManagerCache : NSObject {

	BOOL _cacheIsValid;
	NSArray* _planItems;
	NSArray* _danglingPlanItems;
	NSArray* _plansPendingTransfer;
	NSDictionary* _referenceMap;
	CTCellularPlanItem* _selectedPlanItem;
	BOOL _hasSubscriptions;
	BOOL _isMultipleDataPlanSupportAvailable;
	BOOL _shouldShowOldUI;
	BOOL _isAnyLocalFlowTypeSupported;
	BOOL _isWebUIFlowSupported;
	BOOL _isActivationCodeFlowSupported;
	BOOL _isCarrierItemFlowSupported;
	BOOL _carrierListFetchInProgress;
	NSArray* _cachedCarrierItems;

}

@property (retain) NSArray * cachedCarrierItems;                                     //@synthesize cachedCarrierItems=_cachedCarrierItems - In the implementation block
@property (assign) BOOL carrierListFetchInProgress;                                  //@synthesize carrierListFetchInProgress=_carrierListFetchInProgress - In the implementation block
@property (nonatomic,retain) CTCellularPlanItem * selectedPlanItem; 
@property (nonatomic,readonly) NSArray * planItems; 
@property (nonatomic,readonly) NSArray * danglingPlanItems; 
@property (nonatomic,readonly) NSArray * plansPendingTransfer; 
@property (nonatomic,readonly) NSArray * embeddedPlanItems; 
@property (nonatomic,readonly) BOOL hasSubscriptions; 
@property (nonatomic,readonly) BOOL isMultipleDataPlanSupportAvailable; 
@property (nonatomic,readonly) BOOL shouldShowAddPlan; 
@property (nonatomic,readonly) BOOL shouldShowDataPlanList; 
@property (nonatomic,readonly) BOOL shouldShowAccountSetup; 
@property (nonatomic,readonly) BOOL isSelectedPlanActivating; 
@property (nonatomic,readonly) BOOL isAnyPlanActivating; 
@property (nonatomic,readonly) BOOL shouldShowPlanSelector; 
@property (nonatomic,readonly) BOOL shouldShowNewUI; 
@property (nonatomic,readonly) BOOL isAnyLocalFlowTypeSupported; 
@property (nonatomic,readonly) BOOL isWebUIFlowSupported; 
@property (nonatomic,readonly) BOOL isActivationCodeFlowSupported; 
@property (nonatomic,readonly) BOOL isCarrierItemFlowSupported; 
@property (nonatomic,readonly) NSArray * carrierItems; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isMultipleDataPlanSupportAvailable;
-(NSArray *)planItems;
-(NSArray *)embeddedPlanItems;
-(BOOL)isAnyLocalFlowTypeSupported;
-(BOOL)isActivationCodeFlowSupported;
-(id)planFromReference:(id)arg1 ;
-(id)predefinedLabels;
-(id)danglingPlanFromReference:(id)arg1 ;
-(id)planPendingTransferFromReference:(id)arg1 ;
-(NSArray *)danglingPlanItems;
-(NSArray *)plansPendingTransfer;
-(id)subscriptionContextForPlanItem:(id)arg1 cachedSubscriptionContexts:(id)arg2 ;
-(CTCellularPlanItem *)selectedPlanItem;
-(void)setLabel:(id)arg1 forPlan:(id)arg2 ;
-(BOOL)shouldShowAddPlan;
-(void)setSelectedPlanItem:(CTCellularPlanItem *)arg1 ;
-(id)planFromReferenceSafe:(id)arg1 ;
-(void)clearCachedCarrierItems;
-(BOOL)isCarrierItemFlowSupported;
-(NSArray *)carrierItems;
-(BOOL)isWebUIFlowSupported;
-(BOOL)isAnyPlanActivating;
-(BOOL)shouldShowDataPlanList;
-(BOOL)shouldShowAccountSetup;
-(BOOL)isSelectedPlanActivating;
-(BOOL)shouldShowPlanSelector;
-(void)_planInfoDidChange;
-(void)_carrierInfoDidChange;
-(void)_invalidatePlanItemsCache;
-(void)_fetchPlanItemsIfNeeded;
-(BOOL)shouldShowOldUI;
-(void)setCarrierListFetchInProgress:(BOOL)arg1 ;
-(void)setCachedCarrierItems:(NSArray *)arg1 ;
-(void)setSelectedPlanItemForData:(id)arg1 ;
-(void)didSelectDanglingPlan:(id)arg1 ;
-(BOOL)hasSubscriptions;
-(BOOL)shouldShowNewUI;
-(NSArray *)cachedCarrierItems;
-(BOOL)carrierListFetchInProgress;
@end

