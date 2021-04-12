/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UICollectionViewDropProposal;


@protocol _UICollectionViewDropCoordinator <UICollectionViewDropCoordinator>
@property (nonatomic,readonly) UICollectionViewDropProposal * dropProposal; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@required
-(void)dropToItemAtIndexPath:(id)arg1 forDragItem:(id)arg2;
-(id)dropToPlaceholderInsertedAtIndexPath:(id)arg1 reuseIdentifier:(id)arg2 forDragItem:(id)arg3 cellUpdateHandler:(/*^block*/id)arg4;
-(void)dropToTarget:(id)arg1 forDragItem:(id)arg2;
-(UICollectionViewDropProposal *)dropProposal;
-(id<UIDropSession>)dropSession;

@end

