/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@interface GKReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)_gkReachabilityForInternetConnection;
+(id)_gkReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)_gkReachabilityWithHostName:(id)arg1 ;
+(id)_gkReachabilityForLocalWiFi;
-(void)dealloc;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(int)_gkCurrentReachabilityStatus;
-(BOOL)_gkStartNotifier;
-(void)_gkStopNotifier;
-(BOOL)_gkConnectionRequired;
@end

