/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIView.h>

@class UICollectionView;

@interface ICDocCamThumbnailContainerView : UIView {

	UICollectionView* _collectionView;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(id)accessibilityLabel;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(BOOL)isAccessibilityElement;
-(UICollectionView *)collectionView;
-(BOOL)accessibilityElementsHidden;
-(CGRect)accessibilityFrame;
-(id)accessibilityHint;
@end

