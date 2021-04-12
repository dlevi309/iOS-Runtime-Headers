/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBFolderControllerDelegate <NSObject>
@optional
-(double)minimumHomeScreenScaleForFolderController:(id)arg1;
-(void)folderControllerWillOpen:(id)arg1;
-(void)folderControllerDidOpen:(id)arg1;
-(void)folderControllerWillClose:(id)arg1;
-(void)folderControllerDidClose:(id)arg1;
-(UIEdgeInsets*)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
-(id)folderControllerWantsToHideStatusBar:(id)arg1;
-(id)fakeStatusBarForFolderController:(id)arg1;
-(void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2;
-(id)statusBarStyleRequestForFolderController:(id)arg1;
-(UIEdgeInsets*)statusBarEdgeInsetsForFolderController:(id)arg1;
-(id)folderController:(id)arg1 iconAnimatorForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 initialDelay:(double*)arg5;
-(void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(BOOL)arg5;
-(id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2;
-(void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2;

@required
-(Class)controllerClassForFolder:(id)arg1;
-(BOOL)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
-(BOOL)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
-(void)folderControllerShouldBeginEditing:(id)arg1;
-(void)folderControllerShouldEndEditing:(id)arg1;
-(void)folderControllerWillBeginScrolling:(id)arg1;
-(void)folderControllerDidEndScrolling:(id)arg1;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
-(id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
-(void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
-(id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
-(void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;

@end

