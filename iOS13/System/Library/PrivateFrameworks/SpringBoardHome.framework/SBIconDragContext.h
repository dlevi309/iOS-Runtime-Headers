/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableSet, NSMapTable, NSCountedSet, NSMutableDictionary, SBPlaceholderIcon, NSArray, NSSet, SBIconView, NSDate, NSTimer, NSString;

@interface SBIconDragContext : NSObject <BSDescriptionProviding> {

	NSMutableSet* _sourceIconViews;
	NSMapTable* _iconToExpandAfterDropAnimation;
	NSMutableSet* _destinationIconViews;
	NSCountedSet* _messageExpectations;
	NSMutableSet* _enteredIconListViews;
	NSMapTable* _targetsForCancellingIconViews;
	NSMapTable* _dragPreviewForIconViews;
	NSMutableSet* _appLocalContexts;
	NSMutableDictionary* _destinationFolderIconViews;
	NSMutableSet* _dropAnimatingDragItems;
	NSMutableDictionary* _initialIconPaths;
	NSMapTable* _bouncedIcons;
	NSMapTable* _appDragLocalContexts;
	NSMapTable* _iconViewDropAssertions;
	BOOL _performedIconDrop;
	BOOL _cancelled;
	BOOL _notifiedDelegateForDropSession;
	long long _state;
	SBPlaceholderIcon* _iconPlaceholder;
	NSArray* _grabbedIconViews;
	NSSet* _itemIdentifiers;
	NSSet* _sourceIcons;
	SBIconView* _primaryIconView;
	SBIconView* _recipientIconView;
	NSDate* _lastUserInteractionDate;
	NSTimer* _watchdogTimer;

}

@property (assign,nonatomic) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (getter=isUserActive,nonatomic,readonly) BOOL userActive; 
@property (nonatomic,readonly) BOOL hasUserDragged; 
@property (nonatomic,retain) SBPlaceholderIcon * iconPlaceholder;                              //@synthesize iconPlaceholder=_iconPlaceholder - In the implementation block
@property (nonatomic,copy) NSArray * grabbedIconViews;                                         //@synthesize grabbedIconViews=_grabbedIconViews - In the implementation block
@property (nonatomic,copy) NSSet * itemIdentifiers;                                            //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * sourceIcons;                                                //@synthesize sourceIcons=_sourceIcons - In the implementation block
@property (nonatomic,retain) SBIconView * primaryIconView;                                     //@synthesize primaryIconView=_primaryIconView - In the implementation block
@property (getter=isWaitingForMessage,nonatomic,readonly) BOOL waitingForMessage; 
@property (nonatomic,copy,readonly) NSSet * expectedMessages; 
@property (assign,nonatomic) BOOL performedIconDrop;                                           //@synthesize performedIconDrop=_performedIconDrop - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) SBIconView * recipientIconView;                                   //@synthesize recipientIconView=_recipientIconView - In the implementation block
@property (nonatomic,copy,readonly) NSSet * appLocalContexts; 
@property (nonatomic,copy) NSDate * lastUserInteractionDate;                                   //@synthesize lastUserInteractionDate=_lastUserInteractionDate - In the implementation block
@property (nonatomic,retain) NSTimer * watchdogTimer;                                          //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (assign,nonatomic) BOOL notifiedDelegateForDropSession;                              //@synthesize notifiedDelegateForDropSession=_notifiedDelegateForDropSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(BOOL)isCancelled;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSSet *)itemIdentifiers;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setItemIdentifiers:(NSSet *)arg1 ;
-(void)addItemIdentifier:(id)arg1 ;
-(BOOL)hasSourceIconView:(id)arg1 ;
-(BOOL)isUserActive;
-(SBIconView *)primaryIconView;
-(NSDate *)lastUserInteractionDate;
-(BOOL)hasUserDragged;
-(void)enumerateSourceIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(NSTimer *)watchdogTimer;
-(void)setWatchdogTimer:(NSTimer *)arg1 ;
-(BOOL)isWaitingForMessage;
-(NSSet *)expectedMessages;
-(void)resetLastUserInteractionDate;
-(void)setAppDragLocalContext:(id)arg1 forDragItem:(id)arg2 ;
-(id)appDragLocalContextForDragItem:(id)arg1 ;
-(NSSet *)sourceIcons;
-(SBPlaceholderIcon *)iconPlaceholder;
-(void)setIconPlaceholder:(SBPlaceholderIcon *)arg1 ;
-(NSArray *)grabbedIconViews;
-(void)setGrabbedIconViews:(NSArray *)arg1 ;
-(void)setInitialIndexPath:(id)arg1 forIcon:(id)arg2 ;
-(id)initialIndexPathForIcon:(id)arg1 ;
-(id)initialIndexPathForIconWithIdentifier:(id)arg1 ;
-(BOOL)hasItemIdentifier:(id)arg1 ;
-(void)swapSourceIconWithIdentifier:(id)arg1 withIcon:(id)arg2 ;
-(void)removeAllMessageExpectations;
-(void)setRecipientIconView:(SBIconView *)arg1 ;
-(void)addMessageExpectationNamed:(id)arg1 ;
-(void)setPrimaryIconView:(SBIconView *)arg1 ;
-(void)addSourceIcon:(id)arg1 ;
-(void)addSourceIconView:(id)arg1 ;
-(void)addGrabbedIconView:(id)arg1 ;
-(void)removeMessageExpectationNamed:(id)arg1 ;
-(BOOL)performedIconDrop;
-(void)setTargetIconView:(id)arg1 forCancellingIconView:(id)arg2 ;
-(id)targetIconViewForCancellingIconView:(id)arg1 ;
-(void)setDragPreview:(id)arg1 forIconView:(id)arg2 ;
-(void)enumerateDragPreviewsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEnteredIconListView:(id)arg1 ;
-(void)addEnteredIconListView:(id)arg1 ;
-(BOOL)notifiedDelegateForDropSession;
-(void)setNotifiedDelegateForDropSession:(BOOL)arg1 ;
-(SBIconView *)recipientIconView;
-(void)setBouncedIcon:(id)arg1 forListModel:(id)arg2 ;
-(id)listModelEnumeratorForBouncedIcons;
-(id)bouncedIconForListModel:(id)arg1 ;
-(void)setIcon:(id)arg1 shouldExpandAfterDropAnimationForDragItems:(id)arg2 ;
-(void)setDestinationFolderIconView:(id)arg1 forIconWithIdentifier:(id)arg2 ;
-(void)addDestinationIconView:(id)arg1 ;
-(void)enumerateDestinationIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)setPerformedIconDrop:(BOOL)arg1 ;
-(id)destinationFolderIconViewForIconWithIdentifier:(id)arg1 ;
-(void)addDropAnimatingDragItem:(id)arg1 ;
-(id)iconToExpandAfterDropAnimationForDragItem:(id)arg1 ;
-(BOOL)isAnimatingDropForDragItem:(id)arg1 ;
-(void)clearDropAssertionForIconView:(id)arg1 ;
-(void)setSourceIcons:(NSSet *)arg1 ;
-(void)setLastUserInteractionDate:(NSDate *)arg1 ;
-(void)addAppLocalContext:(id)arg1 ;
-(void)addSourceIcons:(id)arg1 ;
-(BOOL)hasMessageExpectationNamed:(id)arg1 ;
-(NSSet *)appLocalContexts;
@end

