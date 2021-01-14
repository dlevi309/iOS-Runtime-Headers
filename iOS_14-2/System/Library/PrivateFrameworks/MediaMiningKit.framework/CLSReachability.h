/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@interface CLSReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFiRef;

}
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
-(BOOL)connectionRequired;
-(id)initWithNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(void)dealloc;
-(long long)currentNetworkStatus;
-(long long)_localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)_networkStatusForFlags:(unsigned)arg1 ;
@end

