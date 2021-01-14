/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_handlePanGesture:(id)arg1 ;
-(NSSet *)panGestureRecognizers;
-(void)dealloc;
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

