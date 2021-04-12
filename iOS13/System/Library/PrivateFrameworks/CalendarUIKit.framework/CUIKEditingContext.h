/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@protocol CUIKDecisionDelegate, CUIKUndoDelegate, CUIKCommitDelegate, CUIKEditingContextObserver;
@class CUIKEditingContextGroup, CUIKEditingManager, NSArray;

@interface CUIKEditingContext : NSObject {

	BOOL _isActive;
	BOOL _isOpen;
	CUIKEditingContextGroup* _group;
	CUIKEditingManager* _editingManager;
	unsigned long long _interfaceType;
	id<CUIKDecisionDelegate> _decisionDelegate;
	id<CUIKUndoDelegate> _undoDelegate;
	id<CUIKCommitDelegate> _commitDelegate;
	id<CUIKEditingContextObserver> _observer;
	NSArray* _objectsBeingEdited;
	NSArray* _pendingObserverUpdates;
	NSArray* _pendingGroupUpdates;

}

@property (assign) unsigned long long interfaceType;                       //@synthesize interfaceType=_interfaceType - In the implementation block
@property (retain) NSArray * objectsBeingEdited;                           //@synthesize objectsBeingEdited=_objectsBeingEdited - In the implementation block
@property (__weak) id<CUIKEditingContextObserver> observer;                //@synthesize observer=_observer - In the implementation block
@property (assign) BOOL isActive;                                          //@synthesize isActive=_isActive - In the implementation block
@property (assign) BOOL isOpen;                                            //@synthesize isOpen=_isOpen - In the implementation block
@property (retain) NSArray * pendingObserverUpdates;                       //@synthesize pendingObserverUpdates=_pendingObserverUpdates - In the implementation block
@property (retain) NSArray * pendingGroupUpdates;                          //@synthesize pendingGroupUpdates=_pendingGroupUpdates - In the implementation block
@property (__weak) CUIKEditingContextGroup * group;                        //@synthesize group=_group - In the implementation block
@property (__weak) CUIKEditingManager * editingManager;                    //@synthesize editingManager=_editingManager - In the implementation block
@property (__weak) id<CUIKDecisionDelegate> decisionDelegate;              //@synthesize decisionDelegate=_decisionDelegate - In the implementation block
@property (__weak) id<CUIKUndoDelegate> undoDelegate;                      //@synthesize undoDelegate=_undoDelegate - In the implementation block
@property (__weak) id<CUIKCommitDelegate> commitDelegate;                  //@synthesize commitDelegate=_commitDelegate - In the implementation block
-(id<CUIKEditingContextObserver>)observer;
-(void)setGroup:(CUIKEditingContextGroup *)arg1 ;
-(BOOL)isActive;
-(void)setObserver:(id<CUIKEditingContextObserver>)arg1 ;
-(BOOL)isOpen;
-(CUIKEditingContextGroup *)group;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setInterfaceType:(unsigned long long)arg1 ;
-(unsigned long long)interfaceType;
-(void)setIsOpen:(BOOL)arg1 ;
-(CUIKEditingManager *)editingManager;
-(void)setEditingManager:(CUIKEditingManager *)arg1 ;
-(id<CUIKDecisionDelegate>)decisionDelegate;
-(void)setDecisionDelegate:(id<CUIKDecisionDelegate>)arg1 ;
-(id<CUIKUndoDelegate>)undoDelegate;
-(void)setUndoDelegate:(id<CUIKUndoDelegate>)arg1 ;
-(id<CUIKCommitDelegate>)commitDelegate;
-(void)setCommitDelegate:(id<CUIKCommitDelegate>)arg1 ;
-(NSArray *)objectsBeingEdited;
-(void)setObjectsBeingEdited:(NSArray *)arg1 ;
-(NSArray *)pendingObserverUpdates;
-(void)setPendingObserverUpdates:(NSArray *)arg1 ;
-(NSArray *)pendingGroupUpdates;
-(void)setPendingGroupUpdates:(NSArray *)arg1 ;
@end

