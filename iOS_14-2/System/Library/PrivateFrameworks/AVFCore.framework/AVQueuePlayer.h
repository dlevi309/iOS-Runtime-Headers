/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {

	AVQueuePlayerInternal* _queuePlayer;

}
+(void)initialize;
+(id)queuePlayerWithItems:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)removeAllItems;
-(id)init;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(id)items;
-(long long)_defaultActionAtItemEnd;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(BOOL)canInsertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)advanceToNextItem;
-(BOOL)canOverlapPlaybackFromPlayerItem:(id)arg1 toPlayerItem:(id)arg2 ;
-(void)dealloc;
@end

