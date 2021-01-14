/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
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
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)status;
-(void)dealloc;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
@end

