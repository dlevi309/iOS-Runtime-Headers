/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVPlayerLayer;

@interface WebVideoContainerLayer : CALayer {

	RetainPtr<AVPlayerLayer>* _playerLayer;

}

@property (nonatomic,retain) AVPlayerLayer * playerLayer; 
-(void)setBounds:(CGRect)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
@end

