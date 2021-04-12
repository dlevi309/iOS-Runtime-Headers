/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVisibilityReporting.h>
#import <libobjc.A.dylib/SVVisibilityMonitoring.h>

@protocol SVVisiblePercentageProviding;
@class NFStateMachine, NFStateMachineState, NSMutableArray, NSString;

@interface SVVisibilityMonitor : NSObject <SVVisibilityReporting, SVVisibilityMonitoring> {

	BOOL _appeared;
	double _visiblePercentage;
	id _object;
	unsigned long long _state;
	id<SVVisiblePercentageProviding> _visiblePercentageProvider;
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
@property (nonatomic,readonly) id<SVVisiblePercentageProviding> visiblePercentageProvider;              //@synthesize visiblePercentageProvider=_visiblePercentageProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL appeared;                                                           //@synthesize appeared=_appeared - In the implementation block
@property (nonatomic,__weak,readonly) id object;                                                        //@synthesize object=_object - In the implementation block
-(id)object;
-(void)lock;
-(void)unlock;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NFStateMachine *)stateMachine;
-(void)updateVisibility;
-(BOOL)locked;
-(void)didAppear;
-(void)willDisappear;
-(BOOL)appeared;
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(void)willAppear;
-(void)didDisappear;
-(void)onVisiblePercentageChange:(/*^block*/id)arg1 ;
-(void)onDidAppear:(/*^block*/id)arg1 ;
-(void)onDidDisappear:(/*^block*/id)arg1 ;
-(void)onWillAppear:(/*^block*/id)arg1 ;
-(id)initWithObject:(id)arg1 visiblePercentageProvider:(id)arg2 ;
-(NSMutableArray *)willAppearBlocks;
-(NSMutableArray *)didAppearBlocks;
-(NSMutableArray *)willDisappearBlocks;
-(NSMutableArray *)didDisappearBlocks;
-(long long)lockCount;
-(void)setLockCount:(long long)arg1 ;
-(NFStateMachineState *)appearedState;
-(NSMutableArray *)visiblePercentageBlocks;
-(void)determineVisiblePercentage;
-(id<SVVisiblePercentageProviding>)visiblePercentageProvider;
-(NFStateMachineState *)disappearedState;
-(void)onWillDisappear:(/*^block*/id)arg1 ;
-(NFStateMachineState *)appearingState;
-(NFStateMachineState *)disappearingState;
@end

