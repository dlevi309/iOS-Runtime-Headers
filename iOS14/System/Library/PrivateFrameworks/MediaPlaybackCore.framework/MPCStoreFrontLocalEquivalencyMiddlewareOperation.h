/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@class MPModelGenericObject, NSIndexPath, NSMapTable, NSArray, MPCStoreFrontLocalEquivalencyMiddleware, MPCPlayerRequest, NSString, NSError;

@interface MPCStoreFrontLocalEquivalencyMiddlewareOperation : MPAsyncOperation <MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding, MPMiddlewareAutomaticDependencyOperation> {

	NSMapTable* _inputOperations;
	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCStoreFrontLocalEquivalencyMiddleware* _middleware;
	MPCPlayerRequest* _playerRequest;

}

@property (nonatomic,readonly) MPModelGenericObject * overridePlayingItem; 
@property (nonatomic,readonly) NSIndexPath * playingItemIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPCStoreFrontLocalEquivalencyMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerRequest * playerRequest;                                  //@synthesize playerRequest=_playerRequest - In the implementation block
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                                      //@synthesize inputOperations=_inputOperations - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                              //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                                 //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(void)execute;
-(void)setMiddleware:(MPCStoreFrontLocalEquivalencyMiddleware *)arg1 ;
-(NSArray *)inputProtocols;
-(void)setPlayerRequest:(MPCPlayerRequest *)arg1 ;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(NSArray *)invalidationObservers;
-(MPModelGenericObject *)overridePlayingItem;
-(NSIndexPath *)playingItemIndexPath;
-(MPCStoreFrontLocalEquivalencyMiddleware *)middleware;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(MPCPlayerRequest *)playerRequest;
-(id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2 ;
@end

