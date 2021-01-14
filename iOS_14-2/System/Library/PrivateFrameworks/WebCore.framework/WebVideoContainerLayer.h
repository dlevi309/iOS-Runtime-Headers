/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
@end

