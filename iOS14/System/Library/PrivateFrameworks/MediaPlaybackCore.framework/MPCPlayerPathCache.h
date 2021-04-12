/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)playerPathResolutions;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(NSMutableDictionary *)endpointObservers;
-(void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void*)arg2 ;
-(void)_onQueue_registerForEndpointChangeWithUnresolvedPlayerPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSMutableDictionary *)playerPathObservers;
-(id)_init;
-(id)resolvedPlayerPathForPlayerPath:(id)arg1 ;
-(id)observationTokenDescriptionForPlayerPath:(id)arg1 ;
-(void)dealloc;
@end

