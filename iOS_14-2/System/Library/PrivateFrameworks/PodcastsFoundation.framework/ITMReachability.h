/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
@interface ITMReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;

}
+(id)reachabilityWithAddress:(const sockaddr*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(long long)currentReachabilityStatus;
-(void)dealloc;
@end

