/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIconListViewDragDelegate <NSObject>
@required
-(void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
-(BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;
-(void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3;
-(id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
-(BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
-(void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
-(void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
-(id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
-(void)iconListView:(id)arg1 performIconDrop:(id)arg2;
-(void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3;

@end

