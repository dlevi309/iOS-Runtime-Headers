/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface JTCollectionView : UICollectionView {

	BOOL _inLayout;
	CGSize _lastCollectionViewSize;

}

@property (assign,nonatomic) CGSize lastCollectionViewSize;              //@synthesize lastCollectionViewSize=_lastCollectionViewSize - In the implementation block
@property (assign,nonatomic) BOOL inLayout;                              //@synthesize inLayout=_inLayout - In the implementation block
-(void)layoutIfNeeded;
-(void)layoutSubviews;
-(long long)selectedItem;
-(BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
-(id)firstVisibleIndexPath;
-(void)setInLayout:(BOOL)arg1 ;
-(CGSize)lastCollectionViewSize;
-(void)setLastCollectionViewSize:(CGSize)arg1 ;
-(id)sortedIndexPathsForVisibleItems;
-(BOOL)inLayout;
-(id)visibleSections;
@end

