/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVisibilityReporting.h>
#import <libobjc.A.dylib/SXVisibilityMonitoring.h>

@protocol SXVisiblePercentageProviding;
@class NFStateMachine, NFStateMachineState, NSMutableArray, NSString;

@interface SXVisibilityMonitor : NSObject <SXVisibilityReporting, SXVisibilityMonitoring> {

	BOOL _appeared;
	double _visiblePercentage;
	id _object;
	unsigned long long _state;
	id<SXVisiblePercentageProviding> _visiblePercentageProvider;
	NFStateMachine* _stateMachine;
	NFStateMachineState* _appearingState;
	NFStateMachineState* _appearedState;
	NFStateMachineState* _disappearingState;
	NFStateMachineState* _disappearedState;
	NSMutableArray* _willAppearBlocks;
	NSMutableArray* _didAppearBlocks;
	NSMutableArray* _visiblePercentageBlocks;
	NSMutableArray* _willDisappearBlocks;
	NSMutableArray* _didDisappearBlocks;
	long long _lockCount;

}

@property (nonatomic,readonly) NFStateMachine * stateMachine;                                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * appearingState;                                    //@synthesize appearingState=_appearingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * appearedState;                                     //@synthesize appearedState=_appearedState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * disappearingState;                                 //@synthesize disappearingState=_disappearingState - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * disappearedState;                                  //@synthesize disappearedState=_disappearedState - In the implementation block
@property (nonatomic,readonly) NSMutableArray * willAppearBlocks;                                       //@synthesize willAppearBlocks=_willAppearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didAppearBlocks;                                        //@synthesize didAppearBlocks=_didAppearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * visiblePercentageBlocks;                                //@synthesize visiblePercentageBlocks=_visiblePercentageBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * willDisappearBlocks;                                    //@synthesize willDisappearBlocks=_willDisappearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didDisappearBlocks;                                     //@synthesize didDisappearBlocks=_didDisappearBlocks - In the implementation block
@property (assign,nonatomic) double visiblePercentage;                                                  //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
@property (nonatomic,readonly) BOOL locked; 
@property (assign,nonatomic) long long lockCount;                                                       //@synthesize lockCount=_lockCount - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id<SXVisiblePercentageProviding> visiblePercentageProvider;              //@synthesize visiblePercentageProvider=_visiblePercentageProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL appeared;                                                           //@synthesize appeared=_appeared - In the implementation block
@property (nonatomic,__weak,readonly) id object;                                                        //@synthesize object=_object - In the implementation block
-(BOOL)locked;
-(void)unlock;
-(void)didAppear;
-(BOOL)appeared;
-(void)willDisappear;
-(void)lock;
-(id)object;
-(NFStateMachine *)stateMachine;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)didDisappear;
-(void)updateVisibility;
-(void)willAppear;
-(id)initWithObject:(id)arg1 visiblePercentageProvider:(id)arg2 ;
-(NSMutableArray *)willAppearBlocks;
-(void)onWillAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)didAppearBlocks;
-(void)onDidAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)willDisappearBlocks;
-(void)onWillDisappear:(/*^block*/id)arg1 ;
-(NSMutableArray *)didDisappearBlocks;
-(void)onDidDisappear:(/*^block*/id)arg1 ;
-(NSMutableArray *)visiblePercentageBlocks;
-(void)onVisiblePercentageChange:(/*^block*/id)arg1 ;
-(double)visiblePercentage;
-(long long)lockCount;
-(void)setLockCount:(long long)arg1 ;
-(NFStateMachineState *)appearedState;
-(void)determineVisiblePercentage;
-(id<SXVisiblePercentageProviding>)visiblePercentageProvider;
-(void)setVisiblePercentage:(double)arg1 ;
-(NFStateMachineState *)disappearedState;
-(NFStateMachineState *)appearingState;
-(NFStateMachineState *)disappearingState;
@end

