/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITransitionState.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class _UIPageCurl, UIView, NSString;

@interface _UIPageCurlState : _UITransitionState <CAAnimationDelegate> {

	_UIPageCurl* _pageCurl;
	long long _curlType;
	CGPoint _initialLocation;
	CGPoint _referenceLocation;
	UIView* _frontPageView;
	UIView* _backPageView;
	UIView* _frontView;
	UIView* _backView;
	long long _completionCount;
	long long _curlState;
	BOOL _finished;
	BOOL _willComplete;
	/*^block*/id _finally;

}

@property (nonatomic,readonly) _UIPageCurl * pageCurl;                                          //@synthesize pageCurl=_pageCurl - In the implementation block
@property (nonatomic,readonly) long long curlType;                                              //@synthesize curlType=_curlType - In the implementation block
@property (nonatomic,readonly) CGPoint initialLocation;                                         //@synthesize initialLocation=_initialLocation - In the implementation block
@property (nonatomic,readonly) CGPoint referenceLocation;                                       //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) UIView * frontPageView; 
@property (nonatomic,readonly) UIView * backPageView; 
@property (nonatomic,readonly) UIView * frontView;                                              //@synthesize frontView=_frontView - In the implementation block
@property (nonatomic,readonly) UIView * backView;                                               //@synthesize backView=_backView - In the implementation block
@property (nonatomic,readonly) long long curlState;                                             //@synthesize curlState=_curlState - In the implementation block
@property (getter=hasPendingAnimations,nonatomic,readonly) BOOL pendingAnimations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPageCurl:(id)arg1 andCurlType:(long long)arg2 fromLocation:(CGPoint)arg3 withReferenceLocation:(CGPoint)arg4 inDirection:(long long)arg5 withView:(id)arg6 revealingView:(id)arg7 completion:(/*^block*/id)arg8 finally:(/*^block*/id)arg9 ;
-(void)finally;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(_UIPageCurl *)pageCurl;
-(long long)curlType;
-(UIView *)backView;
-(long long)curlState;
-(UIView *)frontView;
-(CGPoint)initialLocation;
-(UIView *)frontPageView;
-(void)addFrontPageContent;
-(UIView *)backPageView;
-(CGRect)_pageViewFrame;
-(void)invalidatePageCurl;
-(void)addBackPageContent;
-(void)cleanupWithFinishedState:(BOOL)arg1 completedState:(BOOL)arg2 ;
-(void)setCurlState:(long long)arg1 willComplete:(BOOL)arg2 ;
-(void)incrementCompletionCount;
-(long long)_effectiveTransitionDirection;
-(BOOL)isCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2 ;
-(void)cleanup;
-(CGPoint)referenceLocation;
-(BOOL)hasPendingAnimations;
-(void)dealloc;
@end

