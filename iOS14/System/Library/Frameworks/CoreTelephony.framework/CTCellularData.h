/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@interface CTCellularData : NSObject {

	network_usage_policy_client_sRef _cuPolicyClient;
	queue* _cuPolicyClientQueue;
	unsigned long long _restrictedState;
	/*^block*/id _cellularDataRestrictionDidUpdateNotifier;

}

@property (copy) id cellularDataRestrictionDidUpdateNotifier;                   //@synthesize cellularDataRestrictionDidUpdateNotifier=_cellularDataRestrictionDidUpdateNotifier - In the implementation block
@property (nonatomic,readonly) unsigned long long restrictedState;              //@synthesize restrictedState=_restrictedState - In the implementation block
-(id)cellularDataRestrictionDidUpdateNotifier;
-(void)setCellularDataRestrictionStateFromPolicies:(void*)arg1 ;
-(void)setCellularDataRestrictionDidUpdateNotifier:(id)arg1 ;
-(unsigned long long)restrictedState;
-(id)init;
-(void)dealloc;
@end

