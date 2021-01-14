/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIconListLayoutDelegate <NSObject>
@optional
-(id)iconListView:(id)arg1 animatorForRemovingIcons:(id)arg2 proposedAnimator:(id)arg3;
-(unsigned long long)iconListView:(id)arg1 rowAtPoint:(CGPoint)arg2 metrics:(id)arg3 proposedRow:(unsigned long long)arg4;
-(CGSize*)iconListView:(id)arg1 sizeThatFits:(CGSize)arg2 metrics:(id)arg3 proposedSize:(CGSize)arg4;
-(void)iconListView:(id)arg1 willLayoutIconView:(id)arg2;
-(void)iconListViewDidLayoutIcons:(id)arg1;
-(CGPoint*)iconListView:(id)arg1 originForIconCoordinate:(SBIconCoordinate)arg2 metrics:(id)arg3 proposedOrigin:(CGPoint)arg4;

@end

