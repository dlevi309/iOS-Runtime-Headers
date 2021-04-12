/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

