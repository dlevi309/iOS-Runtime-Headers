/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UICollectionViewDropProposal;


@protocol _UICollectionViewDropCoordinator <UICollectionViewDropCoordinator>
@property (nonatomic,readonly) UICollectionViewDropProposal * dropProposal; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@required
-(UICollectionViewDropProposal *)dropProposal;
-(id<UIDropSession>)dropSession;
-(void)dropToTarget:(id)arg1 forDragItem:(id)arg2;
-(id)dropToPlaceholderInsertedAtIndexPath:(id)arg1 reuseIdentifier:(id)arg2 forDragItem:(id)arg3 cellUpdateHandler:(/*^block*/id)arg4;
-(void)dropToItemAtIndexPath:(id)arg1 forDragItem:(id)arg2;

@end

