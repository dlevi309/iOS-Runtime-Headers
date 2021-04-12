/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol OS_dispatch_queue;
#import <KeyboardServices/KeyboardServices-Structs.h>
@class NSObject;

@interface _KSReachabilityMonitor : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _isInternetReachable;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)startMonitoring;
-(id)init;
-(void)dealloc;
-(void)reachabilityDidChange:(BOOL)arg1 ;
-(void)queryInitialState;
@end

