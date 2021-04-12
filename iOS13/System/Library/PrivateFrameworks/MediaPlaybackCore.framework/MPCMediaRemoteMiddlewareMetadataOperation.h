/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPCMediaRemoteMiddlewareModelObjectsProviding.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration;
@class MPSectionedCollection, NSIndexPath, NSArray, NSMapTable, MPCMediaRemoteMiddleware, MPRequest, MPCFuture, NSString, NSError;

@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareModelObjectsProviding, MPMiddlewareAutomaticDependencyOperation> {

	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	NSMapTable* _inputOperations;
	MPCMediaRemoteMiddleware* _middleware;
	MPRequest*<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> _request;
	MPCFuture* _playQueueIdentifiersFuture;
	MPCFuture* _playingIdentifierFuture;
	MPCFuture* _queueIdentifierFuture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPSectionedCollection * sourceContentItems; 
@property (nonatomic,readonly) MPSectionedCollection * modelObjects; 
@property (nonatomic,copy,readonly) NSIndexPath * playingIndexPath; 
@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;                                                   //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPRequest*<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) MPCFuture * playQueueIdentifiersFuture;                                                  //@synthesize playQueueIdentifiersFuture=_playQueueIdentifiersFuture - In the implementation block
@property (nonatomic,retain) MPCFuture * playingIdentifierFuture;                                                     //@synthesize playingIdentifierFuture=_playingIdentifierFuture - In the implementation block
@property (nonatomic,retain) MPCFuture * queueIdentifierFuture;                                                       //@synthesize queueIdentifierFuture=_queueIdentifierFuture - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                                                       //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                                                            //@synthesize inputOperations=_inputOperations - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)execute;
-(void)setRequest:(MPRequest*<MPCMediaRemoteMiddlewareMetadataOperationConfiguration>)arg1 ;
-(MPRequest*<MPCMediaRemoteMiddlewareMetadataOperationConfiguration>)request;
-(id)timeoutDescription;
-(NSArray *)invalidationObservers;
-(MPCMediaRemoteMiddleware *)middleware;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(MPSectionedCollection *)modelObjects;
-(NSArray *)inputProtocols;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(MSVSignedRange)rangeFromTracklistRange:(SCD_Struct_MP0)arg1 ;
-(void)setPlayQueueIdentifiersFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)playQueueIdentifiersFuture;
-(void)_loadItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)setPlayingIdentifierFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)playingIdentifierFuture;
-(NSIndexPath *)playingIndexPath;
-(id)_itemGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2 ;
-(void)setQueueIdentifierFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)queueIdentifierFuture;
-(void)_loadPlayingIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(MPSectionedCollection *)sourceContentItems;
-(id)_genericObjectPropertySetForContentItem:(id)arg1 preferredRelationships:(id)arg2 propertySet:(id)arg3 ;
-(id)initWithMiddleware:(id)arg1 request:(id)arg2 ;
@end

