/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)firstVisibleIndexPath;
-(long long)selectedItem;
-(BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
-(void)setInLayout:(BOOL)arg1 ;
-(CGSize)lastCollectionViewSize;
-(void)setLastCollectionViewSize:(CGSize)arg1 ;
-(id)sortedIndexPathsForVisibleItems;
-(BOOL)inLayout;
-(id)visibleSections;
@end

