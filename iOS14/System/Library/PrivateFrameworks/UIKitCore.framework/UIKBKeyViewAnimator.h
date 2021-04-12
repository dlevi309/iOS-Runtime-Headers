/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate> {

	BOOL _disabled;

}

@property (assign,nonatomic) BOOL disabled;                                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldPurgeKeyViews; 
@property (nonatomic,readonly) CGRect primaryGlyphNormalizedExitRect; 
@property (nonatomic,readonly) CGRect secondaryGlyphNormalizedExitRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
+(id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
-(void)setDisabled:(BOOL)arg1 ;
-(CGRect)secondaryGlyphNormalizedExitRect;
-(void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(BOOL)arg3 ;
-(CGRect)primaryGlyphNormalizedExitRect;
-(id)keycapAlternateDualStringTransform:(id)arg1 ;
-(BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(id)keycapNullTransform;
-(double)delayedDeactivationTimeForKeyView:(id)arg1 ;
-(id)keycapLeftSelectLeftTransform;
-(void)endTransitionForKeyView:(id)arg1 ;
-(id)keycapRightSelectRightTransform;
-(BOOL)shouldPurgeKeyViews;
-(void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 ;
-(id)keycapRightSelectPrimaryTransform;
-(void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id)keycapAlternateTransform:(id)arg1 ;
-(void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)keycapLeftSelectPrimaryTransform;
-(Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3 ;
-(id)keycapLeftSelectRightTransform;
-(id)keycapLeftTransform;
-(id)keycapPrimaryExitTransform;
-(BOOL)shouldAssertCurrentKeyState:(id)arg1 ;
-(id)keycapRightSelectLeftTransform;
-(id)keycapPrimaryDualStringTransform:(id)arg1 ;
-(void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)reset;
-(id)keycapRightTransform;
-(id)keycapMeshTransformFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
-(void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(CGSize)arg2 ;
-(id)keycapPrimaryTransform;
-(BOOL)disabled;
-(Class)_keyViewClassForSpecialtyKey:(id)arg1 screenTraits:(id)arg2 ;
-(void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
@end

