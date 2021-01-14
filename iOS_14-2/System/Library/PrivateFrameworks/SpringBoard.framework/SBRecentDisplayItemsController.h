/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBMainDisplayWorkspaceAppInteractionEventSourceObserving.h>

@protocol BSInvalidatable, SBRecentDisplayItemsControllerDelegate;
@class NSMutableOrderedSet, NSSet, SBApplicationController, NSTimer, SBHomeGestureSettings, NSOrderedSet, NSString;

@interface SBRecentDisplayItemsController : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving> {

	NSMutableOrderedSet* _recentDisplayItems;
	long long _removalPersonality;
	long long _movePersonality;
	NSSet* _relevantTransitionFromSources;
	unsigned long long _maxDisplayItems;
	SBApplicationController* _appController;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	NSTimer* _delayAfterTransitionTimer;
	SBHomeGestureSettings* _homeGestureSettings;
	id<SBRecentDisplayItemsControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSOrderedSet * recentDisplayItems; 
@property (assign,nonatomic,__weak) id<SBRecentDisplayItemsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SBRecentDisplayItemsControllerDelegate>)delegate;
-(id)_addStateCaptureHandler;
-(void)eventSource:(id)arg1 userDeletedWebBookmark:(id)arg2 ;
-(void)setDelegate:(id<SBRecentDisplayItemsControllerDelegate>)arg1 ;
-(void)reset;
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2 ;
-(void)dealloc;
-(void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5 ;
-(id)initWithRemovalPersonality:(long long)arg1 movePersonality:(long long)arg2 transitionFromSources:(id)arg3 maxDisplayItems:(unsigned long long)arg4 eventSource:(id)arg5 applicationController:(id)arg6 ;
-(void)_removeDisplayItem:(id)arg1 ;
-(id)_allDisplayItemsPassingTest:(/*^block*/id)arg1 ;
-(id)_allDisplayItemsForBundleID:(id)arg1 ;
-(void)_clearDelayAfterTransitionTimer;
-(id)_firstDisplayItemForBundleID:(id)arg1 ;
-(void)_moveDisplayItemToFront:(id)arg1 ;
-(id)_displayItemForLayoutElement:(id)arg1 ;
-(void)_addOrMoveDisplayItemToFront:(id)arg1 ;
-(void)_setupDelayAfterTransitionTimerForActivatingElement:(id)arg1 ;
-(id)_allDisplayItemsForWebClipID:(id)arg1 ;
-(BOOL)_displayItemRepresentsAppClip:(id)arg1 ;
-(id)_webClipForIdentifier:(id)arg1 ;
-(BOOL)_displayItem:(id)arg1 matchesBundleID:(id)arg2 ;
-(id)_associatedWebClipIdentifierForAppClipIdentifier:(id)arg1 sceneIdentifier:(id)arg2 ;
-(void)_addDisplayItemToFront:(id)arg1 ;
-(BOOL)_displayItemIsExecutableOnCurrentPlatform:(id)arg1 ;
-(BOOL)_isDisallowedDisplayItem:(id)arg1 ;
-(void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2 ;
-(void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2 ;
-(void)eventSource:(id)arg1 userDeletedApplications:(id)arg2 ;
-(void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2 ;
-(void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2 ;
-(void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2 ;
-(void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5 ;
-(void)setRecentDisplayItems:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)recentDisplayItems;
-(void)removeDisplayItem:(id)arg1 ;
-(id)_firstDisplayItemForUniqueID:(id)arg1 ;
-(id)_allDisplayItemsForUniqueID:(id)arg1 ;
-(void)_allowAppToAppearWhileHidden:(id)arg1 ;
-(void)_disallowAppFromAppearingWhileHidden:(id)arg1 ;
@end
