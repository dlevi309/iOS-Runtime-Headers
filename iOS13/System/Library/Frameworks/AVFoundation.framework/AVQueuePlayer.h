/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {

	AVQueuePlayerInternal* _queuePlayer;

}
+(void)initialize;
+(id)queuePlayerWithItems:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeItem:(id)arg1 ;
-(void)removeAllItems;
-(id)items;
-(void)advanceToNextItem;
-(id)initWithItems:(id)arg1 ;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(long long)_defaultActionAtItemEnd;
-(BOOL)canInsertItem:(id)arg1 afterItem:(id)arg2 ;
-(BOOL)canOverlapPlaybackFromPlayerItem:(id)arg1 toPlayerItem:(id)arg2 ;
@end

