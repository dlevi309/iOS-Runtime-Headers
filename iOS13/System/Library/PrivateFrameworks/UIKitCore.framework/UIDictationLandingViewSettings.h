/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface UIDictationLandingViewSettings : NSObject {

	BOOL _useBlackWave;
	double _fadeInDuration;
	double _fadeOutDuration;
	double _shrinkDuration;
	double _colorTransitionInDuration;
	double _colorTransitionOutDuration;
	double _circleRPM;

}

@property (assign,nonatomic) double fadeInDuration;                          //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                         //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) double shrinkDuration;                          //@synthesize shrinkDuration=_shrinkDuration - In the implementation block
@property (assign,nonatomic) double colorTransitionInDuration;               //@synthesize colorTransitionInDuration=_colorTransitionInDuration - In the implementation block
@property (assign,nonatomic) double colorTransitionOutDuration;              //@synthesize colorTransitionOutDuration=_colorTransitionOutDuration - In the implementation block
@property (assign,nonatomic) double circleRPM;                               //@synthesize circleRPM=_circleRPM - In the implementation block
@property (assign,nonatomic) BOOL useBlackWave;                              //@synthesize useBlackWave=_useBlackWave - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setUseBlackWave:(BOOL)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(void)setShrinkDuration:(double)arg1 ;
-(void)setColorTransitionInDuration:(double)arg1 ;
-(void)setColorTransitionOutDuration:(double)arg1 ;
-(void)setCircleRPM:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(double)shrinkDuration;
-(double)colorTransitionInDuration;
-(double)colorTransitionOutDuration;
-(double)circleRPM;
-(BOOL)useBlackWave;
@end
