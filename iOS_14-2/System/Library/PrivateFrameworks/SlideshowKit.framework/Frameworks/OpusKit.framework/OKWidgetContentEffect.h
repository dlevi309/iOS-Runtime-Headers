/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)supportedSettings;
+(id)animationKeyPrefix;
-(void)pauseAnimation;
-(CAAnimation *)animation;
-(void)setDefaultDuration:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)startAnimation;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)loop;
-(id)init;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(void)resumeAnimation;
-(double)defaultDuration;
-(void)stopAnimation;
-(void)setLoop:(BOOL)arg1 ;
-(BOOL)autoplay;
-(BOOL)isAnimating;
-(void)dealloc;
-(void)setAutoplay:(BOOL)arg1 ;
-(void)applySettingsIfNeeded;
-(void)applySettings;
-(void)needsApplySettings;
-(void)prepareContentEffectWithView:(id)arg1 ;
-(OFUIView *)animatedView;
-(double)remainingPlayDuration;
-(void)setAnimatedView:(OFUIView *)arg1 ;
@end

