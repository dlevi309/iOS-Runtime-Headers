/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSMutableSet, NSSet;

@interface HUScrollGestureRecognitionResolver : NSObject {

	double _conflictingGestureActivationDelay;
	NSMutableSet* _mutablePanGestureReocgnizers;
	NSMutableSet* _conflictingGestureStates;

}

@property (nonatomic,readonly) NSMutableSet * mutablePanGestureReocgnizers;              //@synthesize mutablePanGestureReocgnizers=_mutablePanGestureReocgnizers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * conflictingGestureStates;                  //@synthesize conflictingGestureStates=_conflictingGestureStates - In the implementation block
@property (assign,nonatomic) double conflictingGestureActivationDelay;                   //@synthesize conflictingGestureActivationDelay=_conflictingGestureActivationDelay - In the implementation block
@property (nonatomic,readonly) NSSet * panGestureRecognizers; 
@property (nonatomic,readonly) NSSet * conflictingGestureRecognizers; 
-(id)init;
-(void)dealloc;
-(void)_handlePanGesture:(id)arg1 ;
-(NSSet *)panGestureRecognizers;
-(NSMutableSet *)mutablePanGestureReocgnizers;
-(void)removePanGestureRecognizer:(id)arg1 ;
-(NSMutableSet *)conflictingGestureStates;
-(void)_removeConflictingGestureState:(id)arg1 ;
-(id)_stateForConflictingGestureRecognizer:(id)arg1 ;
-(void)_handleConflictingGesture:(id)arg1 ;
-(void)_cancelConflictingGestures;
-(void)_clearSimultaenouslyRecognizedGestures;
-(double)conflictingGestureActivationDelay;
-(void)_activeTimerDidFireForOtherGesture:(id)arg1 ;
-(NSSet *)conflictingGestureRecognizers;
-(void)addPanGestureRecognizer:(id)arg1 ;
-(void)addConflictingGestureRecognizer:(id)arg1 ;
-(void)removeConflictingGestureRecognizer:(id)arg1 ;
-(void)setConflictingGestureActivationDelay:(double)arg1 ;
@end

