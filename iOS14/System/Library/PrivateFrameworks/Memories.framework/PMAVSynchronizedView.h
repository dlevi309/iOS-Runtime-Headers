/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIView.h>

@class AVSynchronizedLayer, AVPlayerItem;

@interface PMAVSynchronizedView : UIView

@property (nonatomic,retain) AVSynchronizedLayer * layer; 
@property (nonatomic,retain) AVPlayerItem * playerItem; 
+(Class)layerClass;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)playerItem;
-(id)makeBackingLayer;
@end

