/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) MPSectionedCollection * sourceContentItems; 
@property (nonatomic,readonly) MPSectionedCollection * modelObjects; 
@property (nonatomic,copy,readonly) NSIndexPath * playingIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;                                                   //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPRequest*<MPCMediaRemoteMiddlewareMetadataOperationConfiguration> request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) MPCFuture * playQueueIdentifiersFuture;                                                  //@synthesize playQueueIdentifiersFuture=_playQueueIdentifiersFuture - In the implementation block
@property (nonatomic,retain) MPCFuture * playingIdentifierFuture;                                                     //@synthesize playingIdentifierFuture=_playingIdentifierFuture - In the implementation block
@property (nonatomic,retain) MPCFuture * queueIdentifierFuture;                                                       //@synthesize queueIdentifierFuture=_queueIdentifierFuture - In the implementation block
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                                                            //@synthesize inputOperations=_inputOperations - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                                                       //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(void)execute;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(NSIndexPath *)playingIndexPath;
-(NSArray *)inputProtocols;
-(void)setRequest:(MPRequest*<MPCMediaRemoteMiddlewareMetadataOperationConfiguration>)arg1 ;
-(id)initWithMiddleware:(id)arg1 request:(id)arg2 ;
-(MPCFuture *)queueIdentifierFuture;
-(void)_loadItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)setPlayQueueIdentifiersFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)playingIdentifierFuture;
-(NSArray *)outputProtocols;
-(id)_genericObjectPropertySetForContentItem:(id)arg1 preferredRelationships:(id)arg2 propertySet:(id)arg3 ;
-(MPRequest*<MPCMediaRemoteMiddlewareMetadataOperationConfiguration>)request;
-(void)_loadPlayingIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)setPlayingIdentifierFuture:(MPCFuture *)arg1 ;
-(NSMapTable *)inputOperations;
-(NSArray *)invalidationObservers;
-(MSVSignedRange)rangeFromTracklistRange:(SCD_Struct_MP1)arg1 ;
-(MPSectionedCollection *)sourceContentItems;
-(id)timeoutDescription;
-(MPSectionedCollection *)modelObjects;
-(MPCMediaRemoteMiddleware *)middleware;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(void)setQueueIdentifierFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)playQueueIdentifiersFuture;
-(id)_itemGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2 ;
@end

