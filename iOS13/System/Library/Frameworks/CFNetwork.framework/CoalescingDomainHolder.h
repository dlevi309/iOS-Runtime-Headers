/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class PathPolicyManager;

@interface CoalescingDomainHolder : NSObject {

	CoalescingDomain* _coalescingDomain;
	PathPolicyManager* _pathPolicyManager;

}
-(id)init;
-(void)dealloc;
-(id)pathIDForPath:(void*)arg1 lookup:(BOOL)arg2 ;
-(id)coalescingConnectionHostForRequestHost:(id)arg1 ;
-(void)addCoalescingConnectionHost:(id)arg1 withDNSRecord:(id)arg2 peerCerts:(id)arg3 trustData:(id)arg4 description:(id)arg5 ;
-(shared_ptr<__CoalescingConnectionKey>*)coalescingCoalescingConnectionHost:(id)arg1 ipAddrs:(id)arg2 ;
-(shared_ptr<__CoalescingConnectionKey>*)updateCoalescingConnectionWithHost:(id)arg1 ipAddrs:(id)arg2 ;
-(BOOL)removeCCEntryForHost:(id)arg1 ;
@end

