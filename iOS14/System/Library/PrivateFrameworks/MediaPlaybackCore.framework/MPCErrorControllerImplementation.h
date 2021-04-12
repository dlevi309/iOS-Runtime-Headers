/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MFErrorController.h>

@protocol MPCExternalPlaybackRouter;
@class NSString, MPCPlaybackEngine, MPCMediaFoundationTranslator, NSMutableSet, MPAVItem;

@interface MPCErrorControllerImplementation : NSObject <MFErrorController> {

	BOOL itemsHavePlayed;
	NSString* preferredFirstContentItemID;
	MPCPlaybackEngine* _playbackEngine;
	MPCMediaFoundationTranslator* _translator;
	NSMutableSet* _failedItemsIdentifiers;
	id<MPCExternalPlaybackRouter> _externalPlaybackRouter;
	MPAVItem* _lastItemUsedForErrorResolution;

}

@property (assign,nonatomic,__weak) MPCPlaybackEngine * playbackEngine;                         //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) MPCMediaFoundationTranslator * translator;                       //@synthesize translator=_translator - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedItemsIdentifiers;                             //@synthesize failedItemsIdentifiers=_failedItemsIdentifiers - In the implementation block
@property (nonatomic,retain) id<MPCExternalPlaybackRouter> externalPlaybackRouter;              //@synthesize externalPlaybackRouter=_externalPlaybackRouter - In the implementation block
@property (nonatomic,retain) MPAVItem * lastItemUsedForErrorResolution;                         //@synthesize lastItemUsedForErrorResolution=_lastItemUsedForErrorResolution - In the implementation block
@property (nonatomic,copy) NSString * preferredFirstContentItemID; 
@property (assign,nonatomic) BOOL itemsHavePlayed; 
-(NSString *)preferredFirstContentItemID;
-(void)setFailedItemsIdentifiers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)failedItemsIdentifiers;
-(MPCMediaFoundationTranslator *)translator;
-(void)reset;
-(void)setPlaybackEngine:(MPCPlaybackEngine *)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)resolve:(id)arg1 forItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreferredFirstContentItemID:(NSString *)arg1 ;
-(BOOL)itemsHavePlayed;
-(id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2 externalPlaybackRouter:(id)arg3 ;
-(void)setItemsHavePlayed:(BOOL)arg1 ;
-(void)setLastItemUsedForErrorResolution:(MPAVItem *)arg1 ;
-(id<MPCExternalPlaybackRouter>)externalPlaybackRouter;
-(MPAVItem *)lastItemUsedForErrorResolution;
-(void)_playbackFailedWithError:(id)arg1 item:(id)arg2 canResolve:(BOOL)arg3 proposedResolution:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(long long)_resolutionForPlaybackError:(id)arg1 item:(id)arg2 ;
-(void)setExternalPlaybackRouter:(id<MPCExternalPlaybackRouter>)arg1 ;
@end

