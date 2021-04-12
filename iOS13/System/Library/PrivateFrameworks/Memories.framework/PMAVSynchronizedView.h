/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIView.h>

@class AVSynchronizedLayer, AVPlayerItem;

@interface PMAVSynchronizedView : UIView

@property (nonatomic,retain) AVSynchronizedLayer * layer; 
@property (nonatomic,retain) AVPlayerItem * playerItem; 
+(Class)layerClass;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(id)makeBackingLayer;
@end

