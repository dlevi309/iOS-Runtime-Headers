/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@class NSMapTable, NSArray, MPCPlaybackEngineMiddleware, MPCPlayerRequest, NSString, NSError;

@interface MPCPlaybackEngineMiddlewareOperation : MPAsyncOperation <MPMiddlewareAutomaticDependencyOperation> {

	NSMapTable* _inputOperations;
	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCPlaybackEngineMiddleware* _middleware;
	MPCPlayerRequest* _playerRequest;

}

@property (nonatomic,retain) MPCPlaybackEngineMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerRequest * playerRequest;                      //@synthesize playerRequest=_playerRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                  //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                     //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                          //@synthesize inputOperations=_inputOperations - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)execute;
-(NSArray *)invalidationObservers;
-(MPCPlaybackEngineMiddleware *)middleware;
-(void)setMiddleware:(MPCPlaybackEngineMiddleware *)arg1 ;
-(NSArray *)inputProtocols;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(MPCPlayerRequest *)playerRequest;
-(id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2 ;
-(void)setPlayerRequest:(MPCPlayerRequest *)arg1 ;
@end

