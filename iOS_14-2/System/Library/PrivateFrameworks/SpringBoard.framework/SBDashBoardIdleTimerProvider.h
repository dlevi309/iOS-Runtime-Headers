/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIdleTimerObserving.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBIdleTimer, SBFIdleTimerBehaviorProviding, BSInvalidatable, SBDashBoardIdleTimerProviderDelegate;
@class NSMutableSet, NSString;

@interface SBDashBoardIdleTimerProvider : NSObject <SBIdleTimerObserving, BSDescriptionProviding> {

	id<SBIdleTimer> _idleTimer;
	id<SBFIdleTimerBehaviorProviding> _idleTimerProvider;
	id<BSInvalidatable> _stateCaptureAssertion;
	NSMutableSet* _disabledIdleTimerAssertions;
	id<SBDashBoardIdleTimerProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBDashBoardIdleTimerProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SBIdleTimer> idleTimer;                                             //@synthesize idleTimer=_idleTimer - In the implementation block
@property (getter=isIdleTimerEnabled,nonatomic,readonly) BOOL idleTimerEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)resetIdleTimer;
-(id<SBDashBoardIdleTimerProviderDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(void)_proposeEffectiveIdleTimerBehaviorForReason:(id)arg1 ;
-(BOOL)isDisabledAssertionActiveForReason:(id)arg1 ;
-(id)_copyIdleTimerBehaviorForBehaviorProvider:(id)arg1 ;
-(void)setDelegate:(id<SBDashBoardIdleTimerProviderDelegate>)arg1 ;
-(void)_proposeIdleTimerBehavior:(id)arg1 forReason:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)addDisabledIdleTimerAssertionReason:(id)arg1 ;
-(id<SBIdleTimer>)idleTimer;
-(BOOL)isIdleTimerEnabled;
-(void)removeDisabledIdleTimerAssertionReason:(id)arg1 ;
-(void)setIdleTimer:(id<SBIdleTimer>)arg1 ;
-(void)idleTimerDidExpire:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)updateIdleTimerWithIdleDimProvider:(id)arg1 reason:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(id)effectiveIdleTimerBehavior;
-(void)idleTimerDidWarn:(id)arg1 ;
-(void)dealloc;
@end

