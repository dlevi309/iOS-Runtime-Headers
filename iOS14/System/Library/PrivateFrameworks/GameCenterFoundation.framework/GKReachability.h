/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)_gkIsOnline;
-(BOOL)_gkConnectionRequired;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(void)_gkStopNotifier;
-(int)_gkCurrentReachabilityStatus;
-(BOOL)_gkStartNotifier;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(void)dealloc;
@end

