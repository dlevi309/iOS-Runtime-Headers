/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_queue;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject, NSURLSession;

@interface _NSHTTPConnectionInfo : NSObject {

	HTTPConnectionInfo* _httpConnectionInfo;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSURLSession* _session;

}

@property (readonly) BOOL isValid; 
-(void)sendPingWithReceiveHandler:(/*^block*/id)arg1 ;
-(BOOL)isValid;
@end

