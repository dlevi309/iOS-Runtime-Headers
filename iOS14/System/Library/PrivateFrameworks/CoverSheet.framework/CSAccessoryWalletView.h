/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSAccessoryView.h>

@class CABackdropLayer, CSRingLayer, CALayer;

@interface CSAccessoryWalletView : CSAccessoryView {

	CABackdropLayer* _averageColorBackdropLayer;
	CABackdropLayer* _backgroundRadiusBackdropLayer;
	CABackdropLayer* _backgroundBackdropLayer;
	CABackdropLayer* _trackRingBlurBackdropLayer;
	CSRingLayer* _trackRingBlurLayer;
	CALayer* _walletLayer;
	CSRingLayer* _trackRing;

}

@property (nonatomic,retain) CABackdropLayer * averageColorBackdropLayer;                  //@synthesize averageColorBackdropLayer=_averageColorBackdropLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backgroundRadiusBackdropLayer;              //@synthesize backgroundRadiusBackdropLayer=_backgroundRadiusBackdropLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backgroundBackdropLayer;                    //@synthesize backgroundBackdropLayer=_backgroundBackdropLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * trackRingBlurBackdropLayer;                 //@synthesize trackRingBlurBackdropLayer=_trackRingBlurBackdropLayer - In the implementation block
@property (nonatomic,retain) CSRingLayer * trackRingBlurLayer;                             //@synthesize trackRingBlurLayer=_trackRingBlurLayer - In the implementation block
@property (nonatomic,retain) CALayer * walletLayer;                                        //@synthesize walletLayer=_walletLayer - In the implementation block
@property (nonatomic,retain) CSRingLayer * trackRing;                                      //@synthesize trackRing=_trackRing - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)cornersToMask;
-(void)_presentAnimation;
-(void)_dismissAnimation;
-(void)_runAnimationWithType:(unsigned long long)arg1 ;
-(void)performAnimation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)animationDurationBeforeDismissal;
-(CABackdropLayer *)averageColorBackdropLayer;
-(void)setAverageColorBackdropLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)backgroundRadiusBackdropLayer;
-(void)setBackgroundRadiusBackdropLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)backgroundBackdropLayer;
-(void)setBackgroundBackdropLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)trackRingBlurBackdropLayer;
-(void)setTrackRingBlurBackdropLayer:(CABackdropLayer *)arg1 ;
-(CSRingLayer *)trackRingBlurLayer;
-(void)setTrackRingBlurLayer:(CSRingLayer *)arg1 ;
-(CALayer *)walletLayer;
-(void)setWalletLayer:(CALayer *)arg1 ;
-(CSRingLayer *)trackRing;
-(void)setTrackRing:(CSRingLayer *)arg1 ;
@end

