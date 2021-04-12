/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OFViewControllerAnimatedTransitioning.h>
#import <libobjc.A.dylib/OFViewControllerInteractiveTransitioning.h>

@class NSString;

@interface OKTransition : NSObject <OKSettingsSupport, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning> {

	int _animationCompletionBarrier;
	BOOL _reversed;
	BOOL _isForward;
	double _duration;
	CGPoint _currentLocation;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL reversed;                         //@synthesize reversed=_reversed - In the implementation block
@property (assign,nonatomic) BOOL isForward;                        //@synthesize isForward=_isForward - In the implementation block
@property (readonly) CGPoint currentLocation;                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL tracksWithFinger; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(CGPoint)currentLocation;
-(void)setReversed:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isForward;
-(BOOL)reversed;
-(BOOL)_canComplete;
-(double)duration;
-(void)dealloc;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2 ;
-(BOOL)tracksWithFinger;
-(void)animateTransitionWithContext:(id)arg1 ;
-(void)endInteractiveTransitionWithContext:(id)arg1 transitionCompleted:(BOOL)arg2 ;
-(void)startInteractiveTransitionWithContext:(id)arg1 ;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2 ;
-(void)setSettingDuration:(double)arg1 ;
-(void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(BOOL)arg4 duration:(double)arg5 doEaseIn:(BOOL)arg6 doEaseOut:(BOOL)arg7 isCompleting:(BOOL)arg8 wasCancelled:(BOOL)arg9 fromProgress:(double)arg10 completionHandler:(/*^block*/id)arg11 ;
-(void)setIsForward:(BOOL)arg1 ;
-(void)transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(double)transitionDurationWithContext:(id)arg1 ;
-(void)setSettingReversed:(BOOL)arg1 ;
-(CGPoint)resolveLocation:(CGPoint)arg1 ;
@end

