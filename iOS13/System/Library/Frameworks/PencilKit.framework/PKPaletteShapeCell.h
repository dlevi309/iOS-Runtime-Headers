/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, PKPaletteShape;

@interface PKPaletteShapeCell : UICollectionViewCell {

	UIImageView* _imageView;
	PKPaletteShape* _shape;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PKPaletteShape * shape;                 //@synthesize shape=_shape - In the implementation block
-(PKPaletteShape *)shape;
-(void)setShape:(PKPaletteShape *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
@end

