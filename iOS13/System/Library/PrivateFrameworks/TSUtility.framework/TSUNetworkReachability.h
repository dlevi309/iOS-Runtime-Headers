/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUNetworkReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFi;

}

@property (nonatomic,readonly) BOOL connectionRequired; 
@property (nonatomic,readonly) long long status; 
+(id)networkReachabilityWithHostName:(id)arg1 ;
+(id)networkReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)networkReachabilityForDocumentResources;
+(id)networkReachabilityForInternetConnection;
+(id)networkReachabilityForLocalWiFi;
+(long long)networkReachabilityStatusForDocumentResources;
+(long long)networkReachabilityStatusForInternetConnection;
+(long long)networkReachabilityStatusForLocalWiFi;
-(id)init;
-(void)dealloc;
-(long long)status;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
@end

