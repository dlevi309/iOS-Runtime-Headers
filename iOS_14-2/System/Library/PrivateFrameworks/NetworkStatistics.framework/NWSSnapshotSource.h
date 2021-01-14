/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/


#import <NetworkStatistics/NetworkStatistics-Structs.h>
@interface NWSSnapshotSource : NSObject {

	int _sockFd;

}
+(id)routeSnapshotForIPv4Host:(sockaddr_in*)arg1 viaInterfaceIndex:(int)arg2 ;
+(id)routeSnapshotForIPv6Host:(sockaddr_in6*)arg1 viaInterfaceIndex:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(long long)send:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3 ;
-(long long)recv:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3 ;
@end

