/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasWifiOrEthernetConnection;
-(void)dealloc;
-(void)setReachabilityForFlags:(unsigned)arg1 update:(BOOL)arg2 ;
@end

