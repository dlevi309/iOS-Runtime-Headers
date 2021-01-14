/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSAccessoryView.h>

@class CABackdropLayer, CALayer, CSRingLayer;

@interface CSAccessoryTrayView : CSAccessoryView {

	BOOL _clearColorAnimationNeeded;
	CABackdropLayer* _averageColorBackdropLayer;
	CABackdropLayer* _backgroundRadiusBackdropLayer;
	CABackdropLayer* _backgroundBackdropLayer;
	CALayer* _splashRing1;
	CALayer* _splashRing2;
	CALayer* _splashRing3;
	CALayer* _splashRing4;
	CABackdropLayer* _trackRingBlurBackdropLayer;
	CSRingLayer* _trackRingBlurLayer;
	CSRingLayer* _trackRing;

}

@property (nonatomic,retain) CABackdropLayer * averageColorBackdropLayer;                  //@synthesize averageColorBackdropLayer=_averageColorBackdropLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backgroundRadiusBackdropLayer;              //@synthesize backgroundRadiusBackdropLayer=_backgroundRadiusBackdropLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backgroundBackdropLayer;                    //@synthesize backgroundBackdropLayer=_backgroundBackdropLayer - In the implementation block
@property (nonatomic,retain) CALayer * splashRing1;                                        //@synthesize splashRing1=_splashRing1 - In the implementation block
@property (nonatomic,retain) CALayer * splashRing2;                                        //@synthesize splashRing2=_splashRing2 - In the implementation block
@property (nonatomic,retain) CALayer * splashRing3;                                        //@synthesize splashRing3=_splashRing3 - In the implementation block
@property (nonatomic,retain) CALayer * splashRing4;                                        //@synthesize splashRing4=_splashRing4 - In the implementation block
@property (nonatomic,retain) CABackdropLayer * trackRingBlurBackdropLayer;                 //@synthesize trackRingBlurBackdropLayer=_trackRingBlurBackdropLayer - In the implementation block
@property (nonatomic,retain) CSRingLayer * trackRingBlurLayer;                             //@synthesize trackRingBlurLayer=_trackRingBlurLayer - In the implementation block
@property (nonatomic,retain) CSRingLayer * trackRing;                                      //@synthesize trackRing=_trackRing - In the implementation block
@property (assign,nonatomic) BOOL clearColorAnimationNeeded;                               //@synthesize clearColorAnimationNeeded=_clearColorAnimationNeeded - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
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
-(CSRingLayer *)trackRing;
-(void)setTrackRing:(CSRingLayer *)arg1 ;
-(double)_trackRingLineWidthAnimationOffset;
-(id)initWithTrayColor:(id)arg1 ;
-(CALayer *)splashRing1;
-(void)setSplashRing1:(CALayer *)arg1 ;
-(CALayer *)splashRing2;
-(void)setSplashRing2:(CALayer *)arg1 ;
-(CALayer *)splashRing3;
-(void)setSplashRing3:(CALayer *)arg1 ;
-(CALayer *)splashRing4;
-(void)setSplashRing4:(CALayer *)arg1 ;
-(BOOL)clearColorAnimationNeeded;
-(void)setClearColorAnimationNeeded:(BOOL)arg1 ;
@end

