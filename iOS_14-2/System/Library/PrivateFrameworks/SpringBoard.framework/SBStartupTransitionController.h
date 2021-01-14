/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>

@protocol SBStartupTransition;
@class SBInitialRestartState, SBStartupTransitionContextPersistence, SBStartupTransitionFactory, BSTransaction, BSTransactionBlockObserver, NSSet, NSString;

@interface SBStartupTransitionController : NSObject <BSTransactionObserver, BSDescriptionProviding, BSTransactionObserver> {

	SBInitialRestartState* _initialRestartState;
	SBStartupTransitionContextPersistence* _transitionContextPersistence;
	SBStartupTransitionFactory* _transitionFactory;
	BSTransaction*<SBStartupTransition> _transition;
	BSTransactionBlockObserver* _transitionObserver;
	BOOL _ranOnce;
	NSSet* _renderOverlayDismissActions;

}

@property (setter=_setTransitionFactory:,getter=_transitionFactory,nonatomic,retain) SBStartupTransitionFactory * transitionFactory;                                                          //@synthesize transitionFactory=_transitionFactory - In the implementation block
@property (setter=_setTransitionContextPersistence:,getter=_transitionContextPersistence,nonatomic,retain) SBStartupTransitionContextPersistence * transitionContextPersistence;              //@synthesize transitionContextPersistence=_transitionContextPersistence - In the implementation block
@property (nonatomic,readonly) BSTransaction*<SBStartupTransition> startupTransition;                                                                                                         //@synthesize transition=_transition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BSTransaction*<SBStartupTransition>)startupTransition;
-(id)succinctDescription;
-(void)transactionDidComplete:(id)arg1 ;
-(void)initializeAndRunStartupTransition:(/*^block*/id)arg1 ;
-(void)transactionDidBegin:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithInitialRestartState:(id)arg1 ;
-(NSString *)description;
-(void)_setTransitionFactory:(id)arg1 ;
-(void)_setTransitionContextPersistence:(id)arg1 ;
-(id)_transitionFactory;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)_transitionContextPersistence;
-(void)_saveContextFromTransitionContext:(id)arg1 ;
@end

