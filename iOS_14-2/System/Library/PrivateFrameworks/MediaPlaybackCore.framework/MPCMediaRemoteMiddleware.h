/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCResponseMediaRemoteControllerChaining.h>
#import <libobjc.A.dylib/MPCPlayerResponseBuilder.h>
#import <libobjc.A.dylib/MPCPlayerSessionResponseBuilder.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/MPMiddleware.h>

@protocol MPCSupportedCommands;
@class NSArray, MPCFuture, MPCMediaRemoteController, MPSectionedCollection, NSIndexPath, NSString;

@interface MPCMediaRemoteMiddleware : NSObject <MPCResponseMediaRemoteControllerChaining, MPCPlayerResponseBuilder, MPCPlayerSessionResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware> {

	BOOL _skippedMetadata;
	NSArray* _invalidationObservers;
	MPCFuture* _controllerFuture;
	MPCMediaRemoteController* _controller;
	MPSectionedCollection* _queueContentItems;
	MPSectionedCollection* _queueModelObjects;
	id<MPCSupportedCommands> _supportedCommands;
	NSIndexPath* _playingIndexPath;
	NSString* _queueIdentifier;
	long long _playerState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL skippedMetadata;                                  //@synthesize skippedMetadata=_skippedMetadata - In the implementation block
@property (nonatomic,retain) MPCFuture * controllerFuture;                            //@synthesize controllerFuture=_controllerFuture - In the implementation block
@property (nonatomic,retain) MPCMediaRemoteController * controller;                   //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * queueContentItems;               //@synthesize queueContentItems=_queueContentItems - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * queueModelObjects;               //@synthesize queueModelObjects=_queueModelObjects - In the implementation block
@property (nonatomic,retain) id<MPCSupportedCommands> supportedCommands;              //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy) NSIndexPath * playingIndexPath;                            //@synthesize playingIndexPath=_playingIndexPath - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                                //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (assign,nonatomic) long long playerState;                                   //@synthesize playerState=_playerState - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;                         //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(NSString *)queueIdentifier;
-(NSIndexPath *)playingIndexPath;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(MPSectionedCollection *)queueModelObjects;
-(unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3 ;
-(id)playerItemLocalizedDurationString:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)init;
-(long long)sessionNumberOfSessions:(long long)arg1 forPlayerPathAtIndex:(long long)arg2 chain:(id)arg3 ;
-(id)operationsForSessionRequest:(id)arg1 ;
-(BOOL)skippedMetadata;
-(void)setControllerFuture:(MPCFuture *)arg1 ;
-(id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned)arg3 chain:(id)arg4 ;
-(id)operationsForPlayerRequest:(id)arg1 ;
-(BOOL)playerCommandSupported:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3 ;
-(id<MPCSupportedCommands>)supportedCommands;
-(BOOL)playerCommandEnabled:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3 ;
-(MPSectionedCollection *)queueContentItems;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(BOOL)playerItemIsPlaceholder:(BOOL)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(void)setQueueContentItems:(MPSectionedCollection *)arg1 ;
-(void)setController:(MPCMediaRemoteController *)arg1 ;
-(id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2 ;
-(id)playerItemCurrentLanguageOptions:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(void)setQueueModelObjects:(MPSectionedCollection *)arg1 ;
-(long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2 ;
-(id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2 ;
-(long long)playerShuffleType:(long long)arg1 chain:(id)arg2 ;
-(NSArray *)invalidationObservers;
-(id)sessionMetadataObject:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(long long)playerQueueEndAction:(long long)arg1 chain:(id)arg2 ;
-(id)_stateDumpObject;
-(id)operationsForRequest:(id)arg1 ;
-(long long)playerState:(long long)arg1 chain:(id)arg2 ;
-(long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2 ;
-(void)setPlayingIndexPath:(NSIndexPath *)arg1 ;
-(unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2 ;
-(long long)playerRepeatType:(long long)arg1 chain:(id)arg2 ;
-(id)playerItemExplicitBadge:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)controller:(id)arg1 chain:(id)arg2 ;
-(long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2 ;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4 ;
-(long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerItemLanguageOptionGroups:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(float)_playbackRateForContentItem:(id)arg1 ;
-(MPCMediaRemoteController *)controller;
-(id)_supportedCommands:(unsigned)arg1 infoValueForKey:(id)arg2 ;
-(BOOL)sectionIsAutoPlaySection:(BOOL)arg1 atIndex:(long long)arg2 chain:(id)arg3 ;
-(MPCFuture *)controllerFuture;
-(void)setPlayerState:(long long)arg1 ;
-(void)setSupportedCommands:(id<MPCSupportedCommands>)arg1 ;
-(long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2 ;
-(id)sessionPlayerPath:(id)arg1 atIndex:(long long)arg2 chain:(id)arg3 ;
-(SCD_Struct_MP0)playerItemDuration:(SCD_Struct_MP0)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(long long)playerState;
-(long long)sessionNumberOfPlayerPaths:(long long)arg1 chain:(id)arg2 ;
@end

