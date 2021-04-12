/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)supportsReordering;
-(BOOL)checkedSupportsReordering;
-(void)setCheckedSupportsReordering:(BOOL)arg1 ;
@end

