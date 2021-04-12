/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet;

@interface MPCUserIdentityPropertiesProactiveCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSCountedSet* _proactiveCachingIdentities;

}
+(id)sharedCache;
-(id)_init;
-(void)_userIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)endProactiveCachingForUserIdentity:(id)arg1 ;
-(void)beginProactiveCachingForUserIdentity:(id)arg1 ;
-(void)_proactivelyCacheUserIdentity:(id)arg1 ;
@end

