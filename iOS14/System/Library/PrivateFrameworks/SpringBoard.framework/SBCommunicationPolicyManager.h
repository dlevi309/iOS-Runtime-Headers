/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSDictionary, DMFCommunicationPolicyMonitor;

@interface SBCommunicationPolicyManager : NSObject {

	NSDictionary* _policiesByBundleIdentifier;
	DMFCommunicationPolicyMonitor* _communicationPolicyMonitor;

}
+(id)sharedInstance;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dealloc;
-(BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
@end

