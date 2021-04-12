/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)redo;
-(void)undo;
-(unsigned long long)levelsOfUndo;
-(id)_undoStack;
-(void)endUndoGrouping;
-(id)redoMenuTitleForUndoActionName:(id)arg1 ;
-(BOOL)canRedo;
-(long long)groupingLevel;
-(BOOL)isRedoing;
-(BOOL)canUndo;
-(void)setGroupsByEvent:(BOOL)arg1 ;
-(void)__redoSingle;
-(NSString *)undoActionName;
-(void)_cancelAutomaticTopLevelGroupEnding;
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(void)setActionIsDiscardable:(BOOL)arg1 ;
-(id)init;
-(void)__redoCommonDoSingle:(BOOL)arg1 ;
-(BOOL)isUndoRegistrationEnabled;
-(BOOL)_shouldCoalesceTypingForText:(id)arg1 :(id)arg2 ;
-(BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)arg1 ;
-(void)_forwardTargetInvocation:(id)arg1 ;
-(NSString *)redoActionName;
-(BOOL)isUndoing;
-(void)_scheduleAutomaticTopLevelGroupEnding;
-(NSString *)redoMenuItemTitle;
-(void)_setGroupIdentifier:(id)arg1 ;
-(void)_commitUndoGrouping;
-(void)enableUndoRegistration;
-(void)setLevelsOfUndo:(unsigned long long)arg1 ;
-(BOOL)undoActionIsDiscardable;
-(void)_postCheckpointNotification;
-(void)_delayAutomaticTermination:(double)arg1 ;
-(void)removeAllActionsWithTarget:(id)arg1 ;
-(void)_prepareEventGrouping;
-(void)registerUndoWithTarget:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)disableUndoRegistration;
-(BOOL)groupsByEvent;
-(NSString *)undoMenuItemTitle;
-(void)setRunLoopModes:(NSArray *)arg1 ;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)_registerUndoObject:(id)arg1 ;
-(void)removeAllActions;
-(NSArray *)runLoopModes;
-(void)beginUndoGrouping;
-(BOOL)redoActionIsDiscardable;
-(id)undoMenuTitleForUndoActionName:(id)arg1 ;
-(void)setActionName:(id)arg1 ;
-(id)_methodSignatureForTargetSelector:(SEL)arg1 ;
-(void)undoNestedGroup;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(void)dealloc;
-(void)_rollbackUndoGrouping;
@end

