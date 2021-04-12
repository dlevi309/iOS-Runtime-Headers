/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPMiddlewareOperation.h>

@class NSError, NSArray, MPCMediaRemoteMiddleware, MPCFuture, NSString;

@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation <MPMiddlewareOperation> {

	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCMediaRemoteMiddleware* _middleware;
	MPCFuture* _playbackStateFuture;

}

@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCFuture * playbackStateFuture;                    //@synthesize playbackStateFuture=_playbackStateFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                               //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                  //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)execute;
-(id)timeoutDescription;
-(NSArray *)invalidationObservers;
-(MPCMediaRemoteMiddleware *)middleware;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(void)setPlaybackStateFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)playbackStateFuture;
-(id)initWithMiddleware:(id)arg1 ;
@end

