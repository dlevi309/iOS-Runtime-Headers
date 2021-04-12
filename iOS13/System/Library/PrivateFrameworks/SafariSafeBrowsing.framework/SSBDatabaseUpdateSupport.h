/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
*/


@class CTCarrierSpaceClient;

@interface SSBDatabaseUpdateSupport : NSObject {

	CTCarrierSpaceClient* _carrierSpaceClient;
	BOOL _onHighCellularDataPlan;

}

@property (nonatomic,readonly) BOOL onHighCellularDataPlan;              //@synthesize onHighCellularDataPlan=_onHighCellularDataPlan - In the implementation block
-(id)init;
-(void)_fetchCellularDataPlan;
-(void)_fetchCellularDataPlanWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchCellularDataPlanSynchronously;
-(BOOL)onHighCellularDataPlan;
@end

