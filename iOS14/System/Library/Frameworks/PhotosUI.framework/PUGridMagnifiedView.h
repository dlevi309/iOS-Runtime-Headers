/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSIndexPath, UIImage;

@interface PUGridMagnifiedView : UIView {

	UIImageView* _imageView;
	NSIndexPath* _itemIndexPath;
	UIImage* _itemImage;
	CGSize _magnifiedImageSize;
	UIEdgeInsets _magnifiedDragEdgeInsets;

}

@property (nonatomic,retain) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) CGSize magnifiedImageSize;                         //@synthesize magnifiedImageSize=_magnifiedImageSize - In the implementation block
@property (nonatomic,retain) NSIndexPath * itemIndexPath;                       //@synthesize itemIndexPath=_itemIndexPath - In the implementation block
@property (nonatomic,retain) UIImage * itemImage;                               //@synthesize itemImage=_itemImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets magnifiedDragEdgeInsets;              //@synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets - In the implementation block
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(UIImage *)itemImage;
-(void)hideAnimate:(BOOL)arg1 ;
-(NSIndexPath *)itemIndexPath;
-(void)setItemIndexPath:(NSIndexPath *)arg1 ;
-(void)setMagnifiedDragEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGRect)imageWindFrame;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)setMagnifiedImageSize:(CGSize)arg1 ;
-(void)moveToLocation:(CGPoint)arg1 animate:(BOOL)arg2 ;
-(void)setImageAnimate:(BOOL)arg1 ;
-(void)magnifyFromImageFrame:(CGRect)arg1 toLocation:(CGPoint)arg2 animate:(BOOL)arg3 ;
-(CGRect)magnifiedFrameForParentLocation:(CGPoint)arg1 ;
-(CGRect)viewFrameForPhotoFrame:(CGRect)arg1 ;
-(CGRect)photoFrameForViewFrame:(CGRect)arg1 ;
-(CGRect)pinFrameToParentFrame:(CGRect)arg1 ;
-(UIEdgeInsets)magnifiedDragEdgeInsets;
-(CGSize)magnifiedImageSize;
@end

