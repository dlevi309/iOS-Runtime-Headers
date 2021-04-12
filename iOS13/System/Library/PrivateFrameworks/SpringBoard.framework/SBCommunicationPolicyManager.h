/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSDictionary, DMFCommunicationPolicyMonitor;

@interface SBCommunicationPolicyManager : NSObject {

	NSDictionary* _policiesByBundleIdentifier;
	DMFCommunicationPolicyMonitor* _communicationPolicyMonitor;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_setPoliciesByBundleIdentifier:(id)arg1 ;
-(unsigned long long)_communicationPolicyForBundleIdentifier:(id)arg1 ;
@end

