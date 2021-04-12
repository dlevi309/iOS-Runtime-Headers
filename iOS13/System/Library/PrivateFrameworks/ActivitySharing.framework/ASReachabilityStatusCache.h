/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ASReachabilityStatusCache : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _cache;

}
-(id)init;
-(id)statusForDestination:(id)arg1 ;
-(id)statusesForDestinations:(id)arg1 ;
-(void)addStatusesByDestination:(id)arg1 ;
-(void)setStatus:(id)arg1 forDestination:(id)arg2 ;
@end

