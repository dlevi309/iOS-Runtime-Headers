/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroup:(CUIKEditingContextGroup *)arg1 ;
-(CUIKEditingContextGroup *)group;
-(unsigned long long)interfaceType;
-(void)setObserver:(id<CUIKEditingContextObserver>)arg1 ;
-(id<CUIKEditingContextObserver>)observer;
-(BOOL)isOpen;
-(BOOL)isActive;
-(id<CUIKDecisionDelegate>)decisionDelegate;
-(void)setDecisionDelegate:(id<CUIKDecisionDelegate>)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setCommitDelegate:(id<CUIKCommitDelegate>)arg1 ;
-(void)setInterfaceType:(unsigned long long)arg1 ;
-(id<CUIKCommitDelegate>)commitDelegate;
-(CUIKEditingManager *)editingManager;
-(void)setEditingManager:(CUIKEditingManager *)arg1 ;
-(id<CUIKUndoDelegate>)undoDelegate;
-(void)setUndoDelegate:(id<CUIKUndoDelegate>)arg1 ;
-(void)setIsOpen:(BOOL)arg1 ;
-(NSArray *)objectsBeingEdited;
-(void)setObjectsBeingEdited:(NSArray *)arg1 ;
-(NSArray *)pendingObserverUpdates;
-(void)setPendingObserverUpdates:(NSArray *)arg1 ;
-(NSArray *)pendingGroupUpdates;
-(void)setPendingGroupUpdates:(NSArray *)arg1 ;
@end

