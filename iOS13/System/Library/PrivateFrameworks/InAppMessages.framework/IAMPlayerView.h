/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <UIKitCore/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface IAMPlayerView : UIView

@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
+(Class)layerClass;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
@end

