/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString, NSDictionary, CAAnimation, OFUIView;

@interface OKWidgetContentEffect : NSObject <CAAnimationDelegate, OKSettingsSupport> {

	NSString* _uuid;
	NSDictionary* _settings;
	CAAnimation* _animation;
	OFUIView* _animatedView;
	BOOL _loop;
	BOOL _autoplay;
	BOOL _isPaused;
	BOOL _needsApplySettings;
	double _defaultDuration;

}

@property (assign,nonatomic) OFUIView * animatedView;               //@synthesize animatedView=_animatedView - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;               //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) BOOL loop;                             //@synthesize loop=_loop - In the implementation block
@property (assign,nonatomic) BOOL autoplay;                         //@synthesize autoplay=_autoplay - In the implementation block
@property (assign,nonatomic) double defaultDuration;                //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationKeyPrefix;
+(id)supportedSettings;
-(id)init;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(CAAnimation *)animation;
-(BOOL)isAnimating;
-(void)startAnimation;
-(void)stopAnimation;
-(void)pauseAnimation;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(double)defaultDuration;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(BOOL)loop;
-(void)setLoop:(BOOL)arg1 ;
-(BOOL)autoplay;
-(void)setAutoplay:(BOOL)arg1 ;
-(void)resumeAnimation;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)applySettingsIfNeeded;
-(void)applySettings;
-(void)needsApplySettings;
-(void)prepareContentEffectWithView:(id)arg1 ;
-(OFUIView *)animatedView;
-(double)remainingPlayDuration;
-(void)setAnimatedView:(OFUIView *)arg1 ;
@end

