/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBIconListViewDragDelegate <NSObject>
@required
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
-(BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
-(void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
-(id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
-(void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3;
-(void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
-(void)iconListView:(id)arg1 performIconDrop:(id)arg2;
-(BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;
-(void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;

@end

