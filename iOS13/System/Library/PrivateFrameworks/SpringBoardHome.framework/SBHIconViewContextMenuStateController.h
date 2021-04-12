/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class NSHashTable, NSMutableSet, NSMutableArray;

@interface SBHIconViewContextMenuStateController : NSObject {

	NSHashTable* _iconViews;
	NSMutableSet* _presentedWidgetsBundleIdentifiers;
	NSHashTable* _iconViewsPresentingContextMenues;
	NSHashTable* _iconViewsAnimatingContextMenues;
	NSMutableArray* _pendingIconAnimationCompletionBlocks;

}
+(id)sharedInstance;
-(id)init;
-(void)noteFolderControllerWillClose:(id)arg1 ;
-(void)registerIconView:(id)arg1 ;
-(void)unregisterIconView:(id)arg1 ;
-(void)dismissAppIconForceTouchControllers:(/*^block*/id)arg1 ;
-(void)floatyFolderViewDidScrollHiddenIconViewAway:(id)arg1 ;
-(void)iconViewWillPresentContextMenu:(id)arg1 ;
-(void)iconViewWillDismissContextMenu:(id)arg1 ;
-(void)iconViewWillAnimateContextMenu:(id)arg1 ;
-(void)iconViewDidAnimateContextMenu:(id)arg1 ;
-(BOOL)areAnyIconViewContextMenusAnimating;
-(BOOL)areAnyIconViewContextMenusShowing;
-(void)performAfterContextMenuAnimationsHaveCompleted:(/*^block*/id)arg1 ;
-(void)earlyTerminateAnyContextMenuAnimations;
@end

