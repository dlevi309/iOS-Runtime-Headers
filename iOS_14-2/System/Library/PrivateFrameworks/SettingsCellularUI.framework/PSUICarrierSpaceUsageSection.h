/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class NSString, CTCarrierSpaceUsagePlanMetrics, CTCarrierSpaceUsageAccountMetrics, NSMutableArray;

@interface PSUICarrierSpaceUsageSection : NSObject {

	NSString* _sharedPlanIdentifier;
	CTCarrierSpaceUsagePlanMetrics* _primaryMetrics;
	CTCarrierSpaceUsageAccountMetrics* _accountMetrics;
	NSMutableArray* _otherMetrics;
	NSMutableArray* _barCategories;

}

@property (retain) NSString * sharedPlanIdentifier;                                 //@synthesize sharedPlanIdentifier=_sharedPlanIdentifier - In the implementation block
@property (retain) CTCarrierSpaceUsagePlanMetrics * primaryMetrics;                 //@synthesize primaryMetrics=_primaryMetrics - In the implementation block
@property (retain) CTCarrierSpaceUsageAccountMetrics * accountMetrics;              //@synthesize accountMetrics=_accountMetrics - In the implementation block
@property (retain) NSMutableArray * otherMetrics;                                   //@synthesize otherMetrics=_otherMetrics - In the implementation block
@property (retain) NSMutableArray * barCategories;                                  //@synthesize barCategories=_barCategories - In the implementation block
-(CTCarrierSpaceUsageAccountMetrics *)accountMetrics;
-(void)setSharedPlanIdentifier:(NSString *)arg1 ;
-(NSString *)sharedPlanIdentifier;
-(void)setAccountMetrics:(CTCarrierSpaceUsageAccountMetrics *)arg1 ;
-(id)description;
-(CTCarrierSpaceUsagePlanMetrics *)primaryMetrics;
-(NSMutableArray *)otherMetrics;
-(NSMutableArray *)barCategories;
-(BOOL)isSharedPlan;
-(void)setPrimaryMetrics:(CTCarrierSpaceUsagePlanMetrics *)arg1 ;
-(void)setOtherMetrics:(NSMutableArray *)arg1 ;
-(void)setBarCategories:(NSMutableArray *)arg1 ;
@end

