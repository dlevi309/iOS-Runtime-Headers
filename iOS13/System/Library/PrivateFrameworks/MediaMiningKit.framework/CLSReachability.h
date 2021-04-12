/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@interface CLSReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFiRef;

}
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
-(void)dealloc;
-(BOOL)connectionRequired;
-(void)stopNotifier;
-(BOOL)startNotifier;
-(id)initWithNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
-(long long)_localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)_networkStatusForFlags:(unsigned)arg1 ;
-(long long)currentNetworkStatus;
@end

