/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDraggingSessionDelegate.h>
#import <UIKit/UIDragSession.h>
#import <UIKitCore/_UIDragSetDownAnimationTarget.h>
#import <UIKitCore/_UIDragDropSessionInternal.h>

@class NSMutableArray, NSMapTable, NSHashTable, NSMutableSet, _UIInternalDraggingSessionSource, UIDragInteraction, NSSet, NSString, NSArray;

@interface _UIDragSessionImpl : NSObject <_UIDraggingSessionDelegate, UIDragSession, _UIDragSetDownAnimationTarget, _UIDragDropSessionInternal> {

	NSMutableArray* _allItems;
	NSMapTable* _dragSourceInteractionByItem;
	NSHashTable* _allInteractions;
	BOOL _didHandOffDragImage;
	NSMutableSet* _addedDraggingItemsWaitingForHandOffOfDragImage;
	NSMutableSet* _addedDragItemsPendingUpdate;
	BOOL _sentSessionDidBegin;
	id _localContext;
	_UIInternalDraggingSessionSource* _internalDragSession;
	UIDragInteraction* _primaryInteraction;

}

@property (setter=_setInternalDragSession:,getter=_internalDragSession,nonatomic,retain) _UIInternalDraggingSessionSource * internalDragSession;              //@synthesize internalDragSession=_internalDragSession - In the implementation block
@property (nonatomic,__weak,readonly) UIDragInteraction * primaryInteraction;                                                                                 //@synthesize primaryInteraction=_primaryInteraction - In the implementation block
@property (nonatomic,readonly) NSSet * trackedInteractions; 
@property (assign,setter=_setSentSessionDidBegin:,getter=_sentSessionDidBegin,nonatomic) BOOL sentSessionDidBegin;                                            //@synthesize sentSessionDidBegin=_sentSessionDidBegin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) BOOL allowsMoveOperation; 
@property (getter=isRestrictedToDraggingApplication,nonatomic,readonly) BOOL restrictedToDraggingApplication; 
@property (nonatomic,retain) id localContext;                                                                                                                 //@synthesize localContext=_localContext - In the implementation block
@property (nonatomic,readonly) long long _dataOwner; 
@property (getter=_allowsItemsToUpdate,nonatomic,readonly) BOOL _allowsItemsToUpdate; 
+(id)activeSessions;
+(id)_localDragSessionForSessionDestination:(id)arg1 ;
-(BOOL)_isActive;
-(NSArray *)items;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)allowsMoveOperation;
-(long long)_dataOwner;
-(void)_cancelDrag;
-(NSSet *)trackedInteractions;
-(void)_setInternalDragSession:(id)arg1 ;
-(void)addItems:(id)arg1 forDragSourceInteraction:(id)arg2 ;
-(id)initWithInteraction:(id)arg1 ;
-(id)_internalDragSession;
-(void)_setSentSessionDidBegin:(BOOL)arg1 ;
-(BOOL)_sentSessionDidBegin;
-(BOOL)_canAddItems;
-(id)_setDownAnimation:(id)arg1 windowSceneForSetDownOfDragItem:(id)arg2 ;
-(id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3 ;
-(void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3 ;
-(BOOL)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_itemsNeedUpdate:(id)arg1 ;
-(id)dragSourceInteractionForDragItem:(id)arg1 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingWithinApp:(BOOL)arg2 ;
-(BOOL)draggingSessionPrefersFullSizePreviews:(id)arg1 ;
-(BOOL)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1 ;
-(void)draggingSessionWillBegin:(id)arg1 ;
-(void)draggingSessionDidMove:(id)arg1 ;
-(void)draggingSession:(id)arg1 willAddItems:(id)arg2 ;
-(void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2 ;
-(void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2 ;
-(void)draggingSessionDidTransferItems:(id)arg1 ;
-(void)_draggingSessionHandedOffDragImage:(id)arg1 ;
-(void)_draggingSession:(id)arg1 handedOffDragImageForItem:(id)arg2 ;
-(BOOL)hasItemsConformingToTypeIdentifiers:(id)arg1 ;
-(BOOL)canLoadObjectsOfClass:(Class)arg1 ;
-(BOOL)isRestrictedToDraggingApplication;
-(id)localContext;
-(void)setLocalContext:(id)arg1 ;
-(id)_internalSession;
-(BOOL)_allowsItemsToUpdate;
-(UIDragInteraction *)primaryInteraction;
@end

