/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface PXPeopleCollectionViewLayout : UICollectionViewFlowLayout {

	unsigned long long _firstVisibleCellIndex;

}

@property (assign,nonatomic) unsigned long long firstVisibleCellIndex;              //@synthesize firstVisibleCellIndex=_firstVisibleCellIndex - In the implementation block
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(unsigned long long)firstVisibleCellIndex;
-(void)setFirstVisibleCellIndex:(unsigned long long)arg1 ;
@end

