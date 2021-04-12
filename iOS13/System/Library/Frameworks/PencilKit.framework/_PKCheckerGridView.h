/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImageView;

@interface _PKCheckerGridView : UIView {

	double _gridSize;
	UIColor* _colorA;
	UIColor* _colorB;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double gridSize;                      //@synthesize gridSize=_gridSize - In the implementation block
@property (nonatomic,retain) UIColor * colorA;                     //@synthesize colorA=_colorA - In the implementation block
@property (nonatomic,retain) UIColor * colorB;                     //@synthesize colorB=_colorB - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIColor *)colorB;
-(void)setColorB:(UIColor *)arg1 ;
-(UIColor *)colorA;
-(void)setColorA:(UIColor *)arg1 ;
-(id)gridTileImage;
-(double)gridSize;
-(void)setGridSize:(double)arg1 ;
@end

