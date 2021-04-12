/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject;

@interface VCPInternetReachability : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	SCNetworkReachabilityRef _reachability;
	BOOL _hasWifiOrEthernetConnection;

}

@property (nonatomic,readonly) BOOL hasWifiOrEthernetConnection;              //@synthesize hasWifiOrEthernetConnection=_hasWifiOrEthernetConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setReachabilityForFlags:(unsigned)arg1 update:(BOOL)arg2 ;
-(BOOL)hasWifiOrEthernetConnection;
@end

