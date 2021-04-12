/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

