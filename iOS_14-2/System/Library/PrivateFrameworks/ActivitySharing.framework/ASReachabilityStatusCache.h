/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

