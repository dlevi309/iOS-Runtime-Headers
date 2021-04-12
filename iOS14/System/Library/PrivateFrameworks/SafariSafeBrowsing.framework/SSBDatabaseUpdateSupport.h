/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

