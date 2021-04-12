/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKSimpleAcknowledgementGlyphView.h>

@class CALayer;

@interface CKThumbsDownAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView {

	CALayer* _animationLayer;
	CALayer* _contentLayer;

}

@property (nonatomic,retain) CALayer * animationLayer;              //@synthesize animationLayer=_animationLayer - In the implementation block
@property (nonatomic,retain) CALayer * contentLayer;                //@synthesize contentLayer=_contentLayer - In the implementation block
-(double)animationDuration;
-(CALayer *)contentLayer;
-(CALayer *)animationLayer;
-(void)setGlyphColor:(id)arg1 ;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(void)setAnimationLayer:(CALayer *)arg1 ;
-(void)setContentLayer:(CALayer *)arg1 ;
@end

