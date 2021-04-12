/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBFSpringLoadedInteractionBehaviorDelegate.h>
#import <libobjc.A.dylib/SBFSpringLoadedInteractionEffectDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UIDropInteractionDelegate.h>

@protocol SBIconListViewDraggingPolicyHandling;
@class NSMapTable, NSMutableSet, SBIconListView, UIDropInteraction, NSString;

@interface SBIconListViewDraggingDestinationDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, BSDescriptionProviding, UIDropInteractionDelegate> {

	NSMapTable* _dragObservers;
	NSMutableSet* _activeDropSessionIdentifiers;
	NSMutableSet* _dropSessionIdentifiersWaitingForConcludeDrop;
	BOOL _waitingForConcludeDrag;
	SBIconListView* _iconListView;
	UIDropInteraction* _dropInteraction;
	unsigned long long _currentDragType;
	id<SBIconListViewDraggingPolicyHandling> _currentPolicyHandler;
	unsigned long long _currentSpringLoadedDragType;
	id<SBIconListViewDraggingPolicyHandling> _springLoadingPolicyHandler;

}

@property (nonatomic,readonly) UIDropInteraction * dropInteraction;                                            //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (assign,nonatomic) unsigned long long currentDragType;                                               //@synthesize currentDragType=_currentDragType - In the implementation block
@property (nonatomic,retain) id<SBIconListViewDraggingPolicyHandling> currentPolicyHandler;                    //@synthesize currentPolicyHandler=_currentPolicyHandler - In the implementation block
@property (assign,nonatomic) unsigned long long currentSpringLoadedDragType;                                   //@synthesize currentSpringLoadedDragType=_currentSpringLoadedDragType - In the implementation block
@property (nonatomic,retain) id<SBIconListViewDraggingPolicyHandling> springLoadingPolicyHandler;              //@synthesize springLoadingPolicyHandler=_springLoadingPolicyHandler - In the implementation block
@property (assign,getter=isWaitingForConcludeDrag,nonatomic) BOOL waitingForConcludeDrag;                      //@synthesize waitingForConcludeDrag=_waitingForConcludeDrag - In the implementation block
@property (nonatomic,__weak,readonly) SBIconListView * iconListView;                                           //@synthesize iconListView=_iconListView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)dragTypeForDropSession:(id)arg1 ;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(UIDropInteraction *)dropInteraction;
-(id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(CGPoint)arg2 forDropSession:(id)arg3 ;
-(void)springLoadedInteractionDidFinish;
-(id)targetViewForSpringLoadingEffectForView:(id)arg1 ;
-(SBIconListView *)iconListView;
-(void)addDragObserver:(id)arg1 forDropSession:(id)arg2 ;
-(id)initWithIconListView:(id)arg1 ;
-(void)_handleSpringloadAndComplete:(id)arg1 ;
-(id)uniqueIdentifierForDropSession:(id)arg1 ;
-(unsigned long long)currentDragType;
-(void)setCurrentPolicyHandler:(id<SBIconListViewDraggingPolicyHandling>)arg1 ;
-(void)setCurrentDragType:(unsigned long long)arg1 ;
-(unsigned long long)currentSpringLoadedDragType;
-(void)setSpringLoadingPolicyHandler:(id<SBIconListViewDraggingPolicyHandling>)arg1 ;
-(void)setCurrentSpringLoadedDragType:(unsigned long long)arg1 ;
-(BOOL)updateSpringLoadedPolicyHandlerForDropSession:(id)arg1 ;
-(id<SBIconListViewDraggingPolicyHandling>)springLoadingPolicyHandler;
-(void)_resetSpringLoadingPolicyHandler;
-(BOOL)updateCurrentPolicyHandlerForDropSession:(id)arg1 ;
-(id<SBIconListViewDraggingPolicyHandling>)currentPolicyHandler;
-(void)setWaitingForConcludeDrag:(BOOL)arg1 ;
-(void)markDropSessionAsWaitingForConcludeDrop:(id)arg1 ;
-(void)enumerateDragObserversForDropSession:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeAllDragObserversForDropSession:(id)arg1 ;
-(void)unmarkDropSessionAsWaitingForConcludeDrop:(id)arg1 ;
-(BOOL)isDropSessionWaitingForConcludeDrop:(id)arg1 ;
-(BOOL)isWaitingForConcludeDrag;
@end

