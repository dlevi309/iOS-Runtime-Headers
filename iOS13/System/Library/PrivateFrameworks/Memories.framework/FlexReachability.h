/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
-(id)init;
-(void)dealloc;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(long long)currentReachabilityStatus;
-(void)stopNotifier;
-(BOOL)startNotifier;
-(BOOL)interventionRequired;
-(NSObject*<OS_dispatch_queue>)reachabilityQueue;
-(void)setReachabilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

