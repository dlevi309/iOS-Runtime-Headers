/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


#import <BookDataStore/BookDataStore-Structs.h>
@interface BDSReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityForLocalWiFi;
+(id)sharedReachabilityForInternetConnection;
+(BOOL)isOffline;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
+(void)_updateIsOffline;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(int)currentReachabilityStatus;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(void)dealloc;
@end

