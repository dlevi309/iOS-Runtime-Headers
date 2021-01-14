/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class NSObject;

@interface FlexReachability : NSObject {

	BOOL _isNotifying;
	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;
	NSObject*<OS_dispatch_queue> _reachabilityQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reachabilityQueue;              //@synthesize reachabilityQueue=_reachabilityQueue - In the implementation block
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
-(id)init;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(long long)currentReachabilityStatus;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)reachabilityQueue;
-(void)setReachabilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)interventionRequired;
@end

