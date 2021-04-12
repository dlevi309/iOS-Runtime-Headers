/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSArray, MPIdentifierSet;

@interface MPCAssistantStoreTracklistPlaybackQueue : MPCAssistantPlaybackQueue {

	NSArray* _storeItemIDs;
	long long _shuffleType;
	MPIdentifierSet* _collectionIdentifierSet;

}

@property (nonatomic,readonly) NSArray * storeItemIDs;                                 //@synthesize storeItemIDs=_storeItemIDs - In the implementation block
@property (assign,nonatomic) long long shuffleType;                                    //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) MPIdentifierSet * collectionIdentifierSet;              //@synthesize collectionIdentifierSet=_collectionIdentifierSet - In the implementation block
+(id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3 ;
-(id)description;
-(long long)shuffleType;
-(MPIdentifierSet *)collectionIdentifierSet;
-(void)setShuffleType:(long long)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3 ;
-(NSArray *)storeItemIDs;
@end

