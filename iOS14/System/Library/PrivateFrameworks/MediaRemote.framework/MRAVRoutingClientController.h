/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(id)initWithMediaRemoteService:(id)arg1 ;
-(id)init;
-(MRMediaRemoteService *)mediaRemoteService;
-(void)fetchPickableRoutesForCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

