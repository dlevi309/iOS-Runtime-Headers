/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableDictionary, UIPanGestureRecognizer, NSString;

@interface OKActionBindingPan : OKActionBinding <UIGestureRecognizerDelegate> {

	unsigned long long _minimumNumberOfTouches;
	unsigned long long _maximumNumberOfTouches;
	BOOL _canPanHorizontally;
	BOOL _canPanVertically;
	double _directionThreshold;
	NSMutableDictionary* _actionContext;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGPoint _previousLocation;
	CGPoint _previousTranslation;
	CGPoint _previousVelocity;
	CGPoint _direction;
	CGPoint _directionLastLocation;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfTouches;              //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;              //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) BOOL canPanHorizontally;                                //@synthesize canPanHorizontally=_canPanHorizontally - In the implementation block
@property (assign,nonatomic) BOOL canPanVertically;                                  //@synthesize canPanVertically=_canPanVertically - In the implementation block
@property (assign,nonatomic) double directionThreshold;                              //@synthesize directionThreshold=_directionThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(unsigned long long)minimumNumberOfTouches;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(unsigned long long)maximumNumberOfTouches;
-(void)handlePan:(id)arg1 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
-(void)setCanPanHorizontally:(BOOL)arg1 ;
-(void)performActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7 ;
-(void)setCanPanVertically:(BOOL)arg1 ;
-(void)setDirectionThreshold:(double)arg1 ;
-(BOOL)canPanVertically;
-(BOOL)canPanHorizontally;
-(double)directionThreshold;
@end

