/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>

@class NSString, MPCPlayerResponse, MPSectionedCollection, NSIndexPath, MPCPlayerResponseItem;

@interface MPCPlayerResponseTracklist : NSObject <_MPCStateDumpPropertyListTransformable> {

	unsigned long long _changeItemSupport;
	NSString* _uniqueIdentifier;
	long long _lastChangeDirection;
	long long _upNextItemCount;
	long long _repeatType;
	long long _shuffleType;
	long long _actionAtQueueEnd;
	MPCPlayerResponse* _response;
	MPSectionedCollection* _items;
	NSIndexPath* _playingItemIndexPath;
	MPSectionedCollection* _displayItems;
	long long _playingItemGlobalIndex;
	long long _globalItemCount;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                    //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * playingItemIndexPath;                //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * displayItems;              //@synthesize displayItems=_displayItems - In the implementation block
@property (nonatomic,readonly) long long playingItemGlobalIndex;                       //@synthesize playingItemGlobalIndex=_playingItemGlobalIndex - In the implementation block
@property (nonatomic,readonly) long long globalItemCount;                              //@synthesize globalItemCount=_globalItemCount - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long lastChangeDirection;                          //@synthesize lastChangeDirection=_lastChangeDirection - In the implementation block
@property (nonatomic,readonly) long long upNextItemCount;                              //@synthesize upNextItemCount=_upNextItemCount - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseItem * playingItem; 
@property (nonatomic,readonly) long long repeatType;                                   //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) long long shuffleType;                                  //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) long long actionAtQueueEnd;                             //@synthesize actionAtQueueEnd=_actionAtQueueEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resetCommandForPlayerPath:(id)arg1 devices:(id)arg2 ;
+(id)insertCommandForPlayerPath:(id)arg1 devices:(id)arg2 ;
-(long long)shuffleType;
-(long long)actionAtQueueEnd;
-(long long)playingItemGlobalIndex;
-(id)displayIndexPathForStructuredIndexPath:(id)arg1 ;
-(id)actionAtQueueEndCommand;
-(MPCPlayerResponseItem *)playingItem;
-(id)initWithResponse:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(id)insertCommand;
-(id)disableModificationsCommand;
-(MPSectionedCollection *)items;
-(id)repeatCommand;
-(id)structuredIndexPathForDisplayIndexPath:(id)arg1 ;
-(MPSectionedCollection *)displayItems;
-(long long)repeatType;
-(id)resetCommand;
-(MPCPlayerResponse *)response;
-(id)_stateDumpObject;
-(id)shuffleCommand;
-(long long)globalItemCount;
-(long long)upNextItemCount;
-(long long)lastChangeDirection;
-(NSIndexPath *)playingItemIndexPath;
-(id)reorderCommand;
-(unsigned long long)_determineChangeItemSupport;
-(id)changeItemCommand;
@end

