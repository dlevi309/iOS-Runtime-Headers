/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPMiddlewareOperation.h>

@class NSArray, MPCMediaRemoteMiddleware, MPCFuture, NSError, NSString;

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <MPMiddlewareOperation> {

	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCMediaRemoteMiddleware* _middleware;
	MPCFuture* _supportedCommandsFuture;

}

@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCFuture * supportedCommandsFuture;                //@synthesize supportedCommandsFuture=_supportedCommandsFuture - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                               //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                  //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(MPCFuture *)supportedCommandsFuture;
-(NSArray *)invalidationObservers;
-(void)setSupportedCommandsFuture:(MPCFuture *)arg1 ;
-(id)timeoutDescription;
-(MPCMediaRemoteMiddleware *)middleware;
-(id)initWithMiddleware:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end

