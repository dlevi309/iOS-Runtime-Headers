/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIBannerTargetImplementation.h>

@protocol SBStarkBannerTargetObserver;
@class NSHashTable, NSMutableArray, SBUIBannerContext, SBUISound, NSString;

@interface SBStarkBannerTarget : NSObject <SBUIBannerTargetImplementation> {

	id<SBStarkBannerTargetObserver> _observer;
	NSHashTable* _sources;
	BOOL _invalidated;
	unsigned long long _suspensionReasons;
	NSMutableArray* _pendedContexts;
	SBUIBannerContext* _currentContext;
	SBUISound* _currentSound;
	long long _displayAssertions;

}

@property (assign,nonatomic,__weak) id<SBStarkBannerTargetObserver> observer;                              //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isPausedForUserInteraction,nonatomic) BOOL pausedForUserInteraction; 
@property (nonatomic,readonly) SBUIBannerContext * currentContext;                                         //@synthesize currentContext=_currentContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier; 
@property (nonatomic,readonly) long long bannerTargetIdiom; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<SBStarkBannerTargetObserver>)observer;
-(BOOL)isSuspended;
-(void)setObserver:(id<SBStarkBannerTargetObserver>)arg1 ;
-(SBUIBannerContext *)currentContext;
-(void*)bannerTargetIdentifier;
-(long long)bannerTargetIdiom;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(BOOL)isShowingModalBanner;
-(void)signalSource:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
-(void)noteContextCanceled:(id)arg1 ;
-(void)setSuspensionReasons:(unsigned long long)arg1 cancellingCurrent:(BOOL)arg2 ;
-(void)setPausedForUserInteraction:(BOOL)arg1 ;
-(void)noteContext:(id)arg1 subActionSelected:(unsigned long long)arg2 ;
-(void)noteContextSelected:(id)arg1 ;
-(BOOL)isPausedForUserInteraction;
-(void)_dequeueWithOptions:(long long)arg1 dismissReason:(int)arg2 ;
-(BOOL)_isSuspendedOnlyForAssistant;
-(void)_dismissContext:(id)arg1 withOptions:(long long)arg2 dismissReason:(int)arg3 ;
-(void)_replaceIntervalElapsed:(id)arg1 ;
-(void)_dismissIntervalElapsed:(id)arg1 ;
-(void)_killIntervalElapsed:(id)arg1 ;
-(BOOL)_canDismissWithOptions:(long long)arg1 ;
@end

