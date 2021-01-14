/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/HKSPStateMachine.h>

@protocol HKSPStatePersistence;
@class NSString, HKSPPersistentStateMachineState;

@interface HKSPPersistentStateMachine : HKSPStateMachine {

	/*^block*/id _currentDateProvider;
	NSString* _identifier;
	id<HKSPStatePersistence> _persistence;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<HKSPStatePersistence> persistence;                        //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,readonly) HKSPPersistentStateMachineState * currentState; 
@property (nonatomic,copy,readonly) id currentDateProvider;                                 //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
-(id<HKSPStatePersistence>)persistence;
-(id)currentDateProvider;
-(BOOL)enterState:(id)arg1 context:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 ;
-(id)_persistedStateShouldIgnoreExpiration:(BOOL)arg1 ;
-(id)persistedState;
-(id)persistedStateIgnoringExpiration;
-(NSString *)identifier;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
@end

