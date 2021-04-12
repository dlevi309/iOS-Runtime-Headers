/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject {

	CoreTelephonyClient* _client;

}
-(id)init;
-(BOOL)supportsCellularPlan;
-(void)addPlanWith:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

