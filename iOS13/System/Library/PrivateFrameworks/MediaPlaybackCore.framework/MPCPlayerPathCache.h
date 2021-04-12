/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MPCPlayerPathCache : NSObject {

	NSMutableDictionary* _playerPathResolutions;
	NSMutableDictionary* _playerPathObservers;
	NSMutableDictionary* _endpointObservers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * playerPathResolutions;              //@synthesize playerPathResolutions=_playerPathResolutions - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * playerPathObservers;                //@synthesize playerPathObservers=_playerPathObservers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * endpointObservers;                  //@synthesize endpointObservers=_endpointObservers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                 //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                //@synthesize calloutQueue=_calloutQueue - In the implementation block
+(id)sharedCache;
-(void)dealloc;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(id)observationTokenDescriptionForPlayerPath:(id)arg1 ;
-(id)resolvedPlayerPathForPlayerPath:(id)arg1 ;
-(void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void*)arg2 ;
-(void)_onQueue_registerForEndpointChangeWithUnresolvedPlayerPath:(id)arg1 ;
-(NSMutableDictionary *)playerPathResolutions;
-(NSMutableDictionary *)playerPathObservers;
-(NSMutableDictionary *)endpointObservers;
@end

