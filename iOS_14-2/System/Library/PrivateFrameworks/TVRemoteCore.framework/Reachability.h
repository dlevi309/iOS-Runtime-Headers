/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@interface Reachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(long long)currentReachabilityStatus;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)interventionRequired;
@end

