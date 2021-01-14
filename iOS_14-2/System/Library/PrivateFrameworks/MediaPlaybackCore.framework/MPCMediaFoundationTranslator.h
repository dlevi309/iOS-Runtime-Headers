/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MFQueueControlling.h>

@protocol MPCQueueItemProviding;
@class NSMutableDictionary;

@interface MPCMediaFoundationTranslator : NSObject <MFQueueControlling> {

	NSMutableDictionary* _mapping;
	id<MPCQueueItemProviding> _queueController;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * mapping;                     //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,readonly) id<MPCQueueItemProviding> queueController;              //@synthesize queueController=_queueController - In the implementation block
-(id<MPCQueueItemProviding>)queueController;
-(NSMutableDictionary *)mapping;
-(id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4 ;
-(id)initWithQueueController:(id)arg1 ;
-(id)MPAVItemForMFPlayerItem:(id)arg1 ;
-(void)setMPAVItem:(id)arg1 forMFPlayerItem:(id)arg2 ;
-(void)resetMapping;
-(id)_MPAVItemForMFPlayerItem:(id)arg1 allowReuse:(BOOL)arg2 ;
-(id)queueItemForPlayerItem:(id)arg1 allowReuse:(BOOL)arg2 ;
-(BOOL)canSkipInDirection:(long long)arg1 fromItem:(id)arg2 ;
@end

