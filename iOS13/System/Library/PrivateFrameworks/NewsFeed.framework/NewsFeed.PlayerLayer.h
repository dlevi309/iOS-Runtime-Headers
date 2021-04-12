/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/

#import <QuartzCore/CALayer.h>

@class AVPlayerLayer;

@interface NewsFeed.PlayerLayer : CALayer {

	 stillImageLayer;
	 playerLayer;
	 looper;
	 readyToDisplayObservation;
	 statusObservation;
	 nonAnimatingDelegate;

}

@property (readonly,nonatomic) AVPlayerLayer * playerLayer; 
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(AVPlayerLayer *)playerLayer;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)reduceMotionStatusDidChange;
@end

