/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSArray, NSString;

@interface NSUndoManager : NSObject {

	id _undoStack;
	id _redoStack;
	NSArray* _runLoopModes;
	unsigned long long _NSUndoManagerPrivate1;
	id _target;
	id _proxy;
	void* _NSUndoManagerPrivate2;
	void* _NSUndoManagerPrivate3;

}

@property (readonly) long long groupingLevel; 
@property (getter=isUndoRegistrationEnabled,readonly) BOOL undoRegistrationEnabled; 
@property (assign) BOOL groupsByEvent; 
@property (assign) unsigned long long levelsOfUndo; 
@property (copy) NSArray * runLoopModes; 
@property (readonly) BOOL canUndo; 
@property (readonly) BOOL canRedo; 
@property (getter=isUndoing,readonly) BOOL undoing; 
@property (getter=isRedoing,readonly) BOOL redoing; 
@property (readonly) BOOL undoActionIsDiscardable; 
@property (readonly) BOOL redoActionIsDiscardable; 
@property (copy,readonly) NSString * undoActionName; 
@property (copy,readonly) NSString * redoActionName; 
@property (copy,readonly) NSString * undoMenuItemTitle; 
@property (copy,readonly) NSString * redoMenuItemTitle; 
+(void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)arg1 ;
+(void)_endTopLevelGroupings;
-(id)init;
-(void)dealloc;
-(id)_methodSignatureForTargetSelector:(SEL)arg1 ;
-(void)_forwardTargetInvocation:(id)arg1 ;
-(id)_undoStack;
-(void)endUndoGrouping;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)arg1 ;
-(void)disableUndoRegistration;
-(void)undoNestedGroup;
-(void)enableUndoRegistration;
-(BOOL)_shouldCoalesceTypingForText:(id)arg1 :(id)arg2 ;
-(void)_commitUndoGrouping;
-(void)_rollbackUndoGrouping;
-(void)_delayAutomaticTermination:(double)arg1 ;
-(NSArray *)runLoopModes;
-(void)_scheduleAutomaticTopLevelGroupEnding;
-(void)beginUndoGrouping;
-(void)_prepareEventGrouping;
-(void)_postCheckpointNotification;
-(void)_cancelAutomaticTopLevelGroupEnding;
-(void)__redoCommonDoSingle:(BOOL)arg1 ;
-(BOOL)canRedo;
-(BOOL)groupsByEvent;
-(void)_registerUndoObject:(id)arg1 ;
-(void)_setGroupIdentifier:(id)arg1 ;
-(BOOL)canUndo;
-(NSString *)undoActionName;
-(id)undoMenuTitleForUndoActionName:(id)arg1 ;
-(NSString *)redoActionName;
-(id)redoMenuTitleForUndoActionName:(id)arg1 ;
-(long long)groupingLevel;
-(BOOL)isUndoRegistrationEnabled;
-(void)setGroupsByEvent:(BOOL)arg1 ;
-(void)setLevelsOfUndo:(unsigned long long)arg1 ;
-(unsigned long long)levelsOfUndo;
-(void)setRunLoopModes:(NSArray *)arg1 ;
-(void)undo;
-(void)redo;
-(void)__redoSingle;
-(BOOL)isUndoing;
-(BOOL)isRedoing;
-(void)removeAllActions;
-(void)removeAllActionsWithTarget:(id)arg1 ;
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)registerUndoWithTarget:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setActionName:(id)arg1 ;
-(void)setActionIsDiscardable:(BOOL)arg1 ;
-(BOOL)undoActionIsDiscardable;
-(BOOL)redoActionIsDiscardable;
-(NSString *)undoMenuItemTitle;
-(NSString *)redoMenuItemTitle;
@end

