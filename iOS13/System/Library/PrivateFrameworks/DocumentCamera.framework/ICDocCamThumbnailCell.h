/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface ICDocCamThumbnailCell : UICollectionViewCell {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)indexStringForAccessibility;
-(id)parentCollectionView;
@end

