/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol _NSURLSessionEventDelegate, OS_dispatch_queue, _NSURLSessionHTTPRewriter;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject, NSMutableDictionary;

@interface __CFN_GlobalMetrics : NSObject {

	os_unfair_lock_s lock;
	id<_NSURLSessionEventDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<_NSURLSessionEventDelegate> _forwardingDelegate;
	NSMutableDictionary* _defaultSessionMetrics;
	NSMutableDictionary* _ephemeralSessionMetrics;
	NSMutableDictionary* _backgroundSessionMetrics;
	id<_NSURLSessionHTTPRewriter> _HTTPRewriter;

}
-(id)init;
@end

