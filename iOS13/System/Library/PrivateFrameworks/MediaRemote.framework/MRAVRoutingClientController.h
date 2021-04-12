/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class MRMediaRemoteService, NSObject, NSMutableDictionary;

@interface MRAVRoutingClientController : NSObject {

	MRMediaRemoteService* _mediaRemoteService;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _pendingCompletionHandlersForCategories;
	NSMutableDictionary* _cachedRoutesForCategories;

}

@property (nonatomic,readonly) MRMediaRemoteService * mediaRemoteService;              //@synthesize mediaRemoteService=_mediaRemoteService - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(id)initWithMediaRemoteService:(id)arg1 ;
-(void)fetchPickableRoutesForCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(MRMediaRemoteService *)mediaRemoteService;
@end

