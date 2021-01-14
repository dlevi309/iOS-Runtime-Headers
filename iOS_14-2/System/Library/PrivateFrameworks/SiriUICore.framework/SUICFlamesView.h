/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewProvidingDelegate.h>

@protocol SUICFlamesViewProviding, SUICFlamesViewDelegate;
@class UIView, UIImage, UIColor, NSString;

@interface SUICFlamesView : UIView <SUICFlamesViewProvidingDelegate> {

	UIView*<SUICFlamesViewProviding> _flamesView;
	id<SUICFlamesViewDelegate> _flamesDelegate;

}

@property (nonatomic,readonly) BOOL isRenderingEnabled; 
@property (assign,nonatomic,__weak) id<SUICFlamesViewDelegate> flamesDelegate;              //@synthesize flamesDelegate=_flamesDelegate - In the implementation block
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
@property (assign,nonatomic) BOOL paused; 
@property (assign,nonatomic) double horizontalScaleFactor; 
@property (assign,nonatomic) BOOL accelerateTransitions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isMetalAvailable;
-(void)setAccelerateTransitions:(BOOL)arg1 ;
-(void)setActiveFrame:(CGRect)arg1 ;
-(BOOL)renderInBackground;
-(id<SUICFlamesViewDelegate>)flamesDelegate;
-(long long)mode;
-(void)resetAndReinitialize:(BOOL)arg1 ;
-(void)prewarmShadersForCurrentMode;
-(CGRect)activeFrame;
-(BOOL)reduceThinkingFramerate;
-(BOOL)isRenderingEnabled;
-(UIColor *)dictationColor;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)fadeOutCurrentAura;
-(BOOL)reduceFrameRate;
-(void)setRenderingEnabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setReduceThinkingFramerate:(BOOL)arg1 ;
-(void)setDictationColor:(UIColor *)arg1 ;
-(BOOL)showAura;
-(BOOL)accelerateTransitions;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)freezesAura;
-(UIImage *)overlayImage;
-(void)setShowAura:(BOOL)arg1 ;
-(void)setReduceFrameRate:(BOOL)arg1 ;
-(void)setFreezesAura:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 screen:(id)arg2 fidelity:(long long)arg3 ;
-(void)flamesViewAuraDidDisplay:(id)arg1 ;
-(double)horizontalScaleFactor;
-(void)didMoveToSuperview;
-(void)setHorizontalScaleFactor:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)setFlamesDelegate:(id<SUICFlamesViewDelegate>)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(BOOL)paused;
-(void)resetAndReinitializeMetal:(BOOL)arg1 ;
-(void)setRenderInBackground:(BOOL)arg1 ;
@end

