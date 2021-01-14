/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShape:(PKPaletteShape *)arg1 ;
-(PKPaletteShape *)shape;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
@end

