/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@interface RMPolicyStore : NSObject {

	id _policyChangeLock;

}
-(id)init;
-(id)currentPolicyByKey;
-(void)_setCurrentPolicyByKey:(id)arg1 ;
-(void)addOrUpdatePolicy:(id)arg1 ;
-(void)removePolicyWithKey:(id)arg1 ;
-(id)policyWithKey:(id)arg1 ;
@end

