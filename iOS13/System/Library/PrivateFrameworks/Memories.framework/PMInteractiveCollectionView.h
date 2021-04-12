/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UICollectionView.h>

@interface PMInteractiveCollectionView : UICollectionView {

	BOOL _supportsReordering;
	BOOL _checkedSupportsReordering;

}

@property (nonatomic,readonly) BOOL supportsReordering;                                   //@synthesize supportsReordering=_supportsReordering - In the implementation block
@property (assign,nonatomic) BOOL checkedSupportsReordering;                              //@synthesize checkedSupportsReordering=_checkedSupportsReordering - In the implementation block
@property (assign,nonatomic,__weak) id<MiroCollectionViewDelegate> delegate; 
-(BOOL)beginInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(void)cancelInteractiveMovement;
-(void)endInteractiveMovement;
-(BOOL)checkedSupportsReordering;
-(void)setCheckedSupportsReordering:(BOOL)arg1 ;
-(BOOL)supportsReordering;
@end

