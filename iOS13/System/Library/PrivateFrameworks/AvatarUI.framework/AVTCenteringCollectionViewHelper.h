/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


#import <AvatarUI/AvatarUI-Structs.h>
@interface AVTCenteringCollectionViewHelper : NSObject
+(CGPoint)contentOffsetForCenteringPoint:(CGPoint)arg1 collectionView:(id)arg2 ;
+(id)indexPathForNearestItemToCenterWithOffset:(CGPoint)arg1 collectionView:(id)arg2 ;
+(UIEdgeInsets)insetsForBounds:(CGRect)arg1 withFirstCellSize:(CGSize)arg2 lastCellSize:(CGSize)arg3 ;
+(id)indexPathForItemBeingScrolledTowardFromOffset:(CGPoint)arg1 currentOffset:(CGPoint)arg2 nearestItemToCenter:(id)arg3 itemCount:(unsigned long long)arg4 itemOffsetProvider:(/*^block*/id)arg5 ratio:(double*)arg6 ;
@end

