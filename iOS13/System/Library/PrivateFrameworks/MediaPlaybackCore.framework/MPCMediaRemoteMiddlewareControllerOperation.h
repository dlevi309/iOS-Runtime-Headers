/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPCMediaRemoteMiddlewareControllerProviding.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@class MPCFuture, MPCMediaRemoteController, NSMapTable, NSArray, MPCMediaRemoteMiddleware, MPCPlayerPath, NSString, NSError;

@interface MPCMediaRemoteMiddlewareControllerOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareControllerProviding, MPMiddlewareAutomaticDependencyOperation> {

	NSMapTable* _inputOperations;
	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCMediaRemoteMiddleware* _middleware;
	MPCPlayerPath* _playerPath;
	MPCFuture* _controllerFuture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPCFuture * controllerFuture; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller; 
@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;                //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerPath * playerPath;                           //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) MPCFuture * controllerFuture;                         //@synthesize controllerFuture=_controllerFuture - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                    //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                         //@synthesize inputOperations=_inputOperations - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)execute;
-(MPCMediaRemoteController *)controller;
-(id)timeoutDescription;
-(NSArray *)invalidationObservers;
-(MPCMediaRemoteMiddleware *)middleware;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(MPCPlayerPath *)playerPath;
-(NSArray *)inputProtocols;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(MPCFuture *)controllerFuture;
-(void)setControllerFuture:(MPCFuture *)arg1 ;
-(id)initWithMiddleware:(id)arg1 playerPath:(id)arg2 ;
@end

