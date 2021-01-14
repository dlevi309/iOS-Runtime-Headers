/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)shuffleType;
-(id)description;
-(void)setShuffleType:(long long)arg1 ;
-(MPIdentifierSet *)collectionIdentifierSet;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3 ;
-(NSArray *)storeItemIDs;
@end

