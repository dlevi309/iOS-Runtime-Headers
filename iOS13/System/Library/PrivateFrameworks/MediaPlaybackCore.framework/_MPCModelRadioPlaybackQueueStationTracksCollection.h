/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, MPPropertySet, ICMutableRadioPlaybackHistory, MPCPlaybackRequestEnvironment, MPSectionedCollection, MPCModelGenericAVItemUserIdentityPropertySet;

@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _activeModelGenericAVItems;
	BOOL _isSiriInitiated;
	MPPropertySet* _itemProperties;
	ICMutableRadioPlaybackHistory* _playbackHistory;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPSectionedCollection* _trackModels;
	MPSectionedCollection* _tracks;
	MPCModelGenericAVItemUserIdentityPropertySet* _identityPropertySet;

}

@property (nonatomic,readonly) ICMutableRadioPlaybackHistory * playbackHistory; 
@property (nonatomic,copy,readonly) MPSectionedCollection * trackModels;                                      //@synthesize trackModels=_trackModels - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * tracks;                                           //@synthesize tracks=_tracks - In the implementation block
@property (nonatomic,retain) MPCModelGenericAVItemUserIdentityPropertySet * identityPropertySet;              //@synthesize identityPropertySet=_identityPropertySet - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
-(long long)numberOfItems;
-(MPSectionedCollection *)tracks;
-(id)initWithPlaybackContext:(id)arg1 ;
-(MPCModelGenericAVItemUserIdentityPropertySet *)identityPropertySet;
-(void)setIdentityPropertySet:(MPCModelGenericAVItemUserIdentityPropertySet *)arg1 ;
-(id)AVItemAtIndex:(long long)arg1 ;
-(BOOL)isExplicitItemAtIndex:(long long)arg1 ;
-(ICMutableRadioPlaybackHistory *)playbackHistory;
-(long long)removeExplicitItems;
-(MPSectionedCollection *)trackModels;
-(id)trackForItemAtIndex:(long long)arg1 ;
-(void)updateWithPersonalizedResponse:(id)arg1 ;
@end

