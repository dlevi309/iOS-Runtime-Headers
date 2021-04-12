/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPIPBehaviorOverrideAssertion.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>

@class NSSet, NSString;

@interface SBPIPEnvironmentDependentOverrideAssertion : SBPIPBehaviorOverrideAssertion <SBLayoutStateTransitionObserver> {

	BOOL _invalidatesEarly;
	NSSet* _allowedEnvironmentModes;

}

@property (assign,nonatomic) BOOL invalidatesEarly;                      //@synthesize invalidatesEarly=_invalidatesEarly - In the implementation block
@property (nonatomic,copy) NSSet * allowedEnvironmentModes;              //@synthesize allowedEnvironmentModes=_allowedEnvironmentModes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_layoutCoordinator;
-(void)dealloc;
-(id)initWithReason:(long long)arg1 identifier:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(id)initWithReason:(long long)arg1 invalidationBlock:(/*^block*/id)arg2 ;
-(long long)_environmentModeForLayoutState:(id)arg1 ;
-(void)_updateStateForTransitionWithContext:(id)arg1 ;
-(BOOL)invalidatesEarly;
-(void)setInvalidatesEarly:(BOOL)arg1 ;
-(NSSet *)allowedEnvironmentModes;
-(void)setAllowedEnvironmentModes:(NSSet *)arg1 ;
@end

