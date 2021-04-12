/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@protocol OS_dispatch_queue;
@class AKAppleIDSession, NSObject;

@interface FTAuthKitManager : NSObject {

	AKAppleIDSession* _akAppleIDSession;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

