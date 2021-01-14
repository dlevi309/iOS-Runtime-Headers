/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

@class UIImage, UIColor;


@protocol SUICFlamesViewProviding <NSObject>
@property (nonatomic,readonly) BOOL isRenderingEnabled; 
@property (assign,nonatomic,__weak) id<SUICFlamesViewProvidingDelegate> flamesDelegate; 
@property (assign,nonatomic) long long mode; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) BOOL showAura; 
@property (assign,nonatomic) BOOL freezesAura; 
@property (assign,nonatomic) BOOL reduceFrameRate; 
@property (assign,nonatomic) BOOL reduceThinkingFramerate; 
@property (assign,nonatomic) CGRect activeFrame; 
@property (nonatomic,retain) UIImage * overlayImage; 
@property (nonatomic,retain) UIColor * dictationColor; 
@property (assign,nonatomic) BOOL renderInBackground; 
@property (assign,nonatomic) BOOL flamesPaused; 
@property (assign,nonatomic) double horizontalScaleFactor; 
@property (assign,nonatomic) BOOL accelerateTransitions; 
@required
-(void)setAccelerateTransitions:(BOOL)arg1;
-(void)setActiveFrame:(CGRect)arg1;
-(BOOL)renderInBackground;
-(id<SUICFlamesViewProvidingDelegate>)flamesDelegate;
-(long long)mode;
-(void)resetAndReinitialize:(BOOL)arg1;
-(void)prewarmShadersForCurrentMode;
-(CGRect)activeFrame;
-(BOOL)reduceThinkingFramerate;
-(BOOL)isRenderingEnabled;
-(UIColor *)dictationColor;
-(void)setOverlayImage:(id)arg1;
-(void)fadeOutCurrentAura;
-(BOOL)reduceFrameRate;
-(void)setRenderingEnabled:(BOOL)arg1 forReason:(id)arg2;
-(void)setReduceThinkingFramerate:(BOOL)arg1;
-(void)setDictationColor:(id)arg1;
-(BOOL)showAura;
-(BOOL)accelerateTransitions;
-(BOOL)freezesAura;
-(UIImage *)overlayImage;
-(void)setShowAura:(BOOL)arg1;
-(void)setReduceFrameRate:(BOOL)arg1;
-(void)setFreezesAura:(BOOL)arg1;
-(double)horizontalScaleFactor;
-(void)setHorizontalScaleFactor:(double)arg1;
-(void)setMode:(long long)arg1;
-(BOOL)flamesPaused;
-(void)setFlamesDelegate:(id)arg1;
-(void)setState:(long long)arg1;
-(long long)state;
-(void)setFlamesPaused:(BOOL)arg1;
-(void)setRenderInBackground:(BOOL)arg1;

@end

