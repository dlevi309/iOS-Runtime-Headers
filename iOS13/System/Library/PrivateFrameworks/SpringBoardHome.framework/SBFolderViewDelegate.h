/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBFolderViewDelegate <NSObject>
@optional
-(double)minimumHomeScreenScaleForFolderView:(id)arg1;
-(UIEdgeInsets*)contentOverlayInsetsFromParentIfAvailableForFolderView:(id)arg1;
-(id)folderView:(id)arg1 accessibilityTintColorForRect:(CGRect)arg2;

@required
-(Class)iconListViewClassForFolderView:(id)arg1;
-(id)iconLocationForFolderView:(id)arg1;
-(BOOL)folderView:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
-(void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
-(void)folderViewWillBeginDragging:(id)arg1;
-(void)folderViewWillBeginScrolling:(id)arg1;
-(void)folderViewWillEndDragging:(id)arg1;
-(void)folderViewWillUpdatePageDuringScrolling:(id)arg1;
-(void)folderViewDidScroll:(id)arg1;
-(void)folderViewDidEndScrolling:(id)arg1;
-(void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2;
-(void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
-(void)folderViewShouldBeginEditing:(id)arg1;
-(void)folderViewShouldEndEditing:(id)arg1;
-(BOOL)folderView:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
-(void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
-(id)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
-(void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4;
-(void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
-(void)folderView:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
-(id)folderView:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
-(void)folderView:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
-(BOOL)folderView:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
-(void)folderView:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
-(void)folderViewDidChangeOrientation:(id)arg1;

@end

