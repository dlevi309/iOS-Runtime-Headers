/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@class NSString;

@interface WGWidgetLifeCycleSequence : NSObject {

	long long _currentState;
	NSString* _sequenceIdentifier;
	WGWidgetLifeCycleSequence* _previousSequence;

}

@property (assign,setter=_setCurrentState:,nonatomic) long long currentState;                                                                 //@synthesize currentState=_currentState - In the implementation block
@property (setter=_setPreviousSequence:,getter=_previousSequence,nonatomic,retain) WGWidgetLifeCycleSequence * previousSequence;              //@synthesize previousSequence=_previousSequence - In the implementation block
@property (nonatomic,copy,readonly) NSString * sequenceIdentifier;                                                                            //@synthesize sequenceIdentifier=_sequenceIdentifier - In the implementation block
-(void)_setCurrentState:(long long)arg1 ;
-(long long)currentState;
-(id)transitionToState:(long long)arg1 ;
-(NSString *)sequenceIdentifier;
-(id)_previousSequence;
-(void)_setPreviousSequence:(id)arg1 ;
-(BOOL)isCurrentStateAtMost:(long long)arg1 ;
-(id)initWithSequenceIdentifier:(id)arg1 ;
-(/*^block*/id)beginTransitionToState:(long long)arg1 error:(id*)arg2 ;
-(id)description;
-(BOOL)isCurrentStateNotYet:(long long)arg1 ;
-(BOOL)isCurrentStateAtLeast:(long long)arg1 ;
-(id)sequenceWithIdentifier:(id)arg1 ;
-(BOOL)_isValidTransitionToState:(long long)arg1 ;
-(BOOL)isCurrentState:(long long)arg1 ;
@end

