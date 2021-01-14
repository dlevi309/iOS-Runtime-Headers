/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionView.h>

@protocol PXPeopleDragAndDropCollectionViewDelegate;
@class PXPeopleCollectionViewCell, NSIndexPath, UIVisualEffect;

@interface PXPeopleDragAndDropCollectionView : UICollectionView {

	BOOL _interactiveMode;
	BOOL _validDrop;
	id<PXPeopleDragAndDropCollectionViewDelegate> _dragDropDelegate;
	PXPeopleCollectionViewCell* _dragSourceCell;
	NSIndexPath* _dragSourceIndexPath;
	UIVisualEffect* _blurEffect;

}

@property (assign,nonatomic) BOOL validDrop;                                                                     //@synthesize validDrop=_validDrop - In the implementation block
@property (nonatomic,retain) UIVisualEffect * blurEffect;                                                        //@synthesize blurEffect=_blurEffect - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleDragAndDropCollectionViewDelegate> dragDropDelegate;              //@synthesize dragDropDelegate=_dragDropDelegate - In the implementation block
@property (assign,nonatomic) BOOL interactiveMode;                                                               //@synthesize interactiveMode=_interactiveMode - In the implementation block
@property (nonatomic,retain) PXPeopleCollectionViewCell * dragSourceCell;                                        //@synthesize dragSourceCell=_dragSourceCell - In the implementation block
@property (nonatomic,retain) NSIndexPath * dragSourceIndexPath;                                                  //@synthesize dragSourceIndexPath=_dragSourceIndexPath - In the implementation block
-(PXPeopleCollectionViewCell *)dragSourceCell;
-(void)resetTransformForSourceIndex:(id)arg1 ;
-(id)sortedIndexPathsForSelectedItems;
-(BOOL)beginInteractiveMovementAtLocation:(CGPoint)arg1 forItemAtIndexPath:(id)arg2 ;
-(double)_highestVisibleCellZOrder;
-(id)_footerAttributes;
-(long long)sectionAtPoint:(CGPoint)arg1 ;
-(id<PXPeopleDragAndDropCollectionViewDelegate>)dragDropDelegate;
-(void)setDragDropDelegate:(id<PXPeopleDragAndDropCollectionViewDelegate>)arg1 ;
-(BOOL)interactiveMode;
-(void)setInteractiveMode:(BOOL)arg1 ;
-(void)setDragSourceCell:(PXPeopleCollectionViewCell *)arg1 ;
-(NSIndexPath *)dragSourceIndexPath;
-(void)setDragSourceIndexPath:(NSIndexPath *)arg1 ;
-(void)setValidDrop:(BOOL)arg1 ;
-(UIVisualEffect *)blurEffect;
-(void)setBlurEffect:(UIVisualEffect *)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(BOOL)validDrop;
-(void)cancelInteractiveMovement;
-(void)endInteractiveMovement;
@end

