/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

