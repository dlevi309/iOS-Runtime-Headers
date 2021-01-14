/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface __NSHostExtraIvars : NSObject {

	NSString* thingToResolve;
	int resolveType;
	NSObject*<OS_dispatch_queue> resolveQueue;
	NSObject*<OS_dispatch_queue> cacheAccessQueue;
	NSObject*<OS_dispatch_queue> callbackQueue;
	BOOL startedResolving;

}
-(id)init;
-(void)dealloc;
@end

