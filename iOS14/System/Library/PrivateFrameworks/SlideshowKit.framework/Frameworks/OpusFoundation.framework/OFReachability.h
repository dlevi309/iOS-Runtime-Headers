/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@interface OFReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFiRef;

}
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
-(id)init;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(void)dealloc;
-(long long)currentNetworkStatus;
-(long long)_localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)_networkStatusForFlags:(unsigned)arg1 ;
@end

