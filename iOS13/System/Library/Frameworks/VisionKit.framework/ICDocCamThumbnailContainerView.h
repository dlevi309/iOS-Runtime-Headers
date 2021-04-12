/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UICollectionView;

@interface ICDocCamThumbnailContainerView : UIView {

	UICollectionView* _collectionView;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementsHidden;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

