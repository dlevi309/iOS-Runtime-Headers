/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface ICDelegationConsumerService : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _activeSessions;

}
-(id)init;
-(void)performRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end

