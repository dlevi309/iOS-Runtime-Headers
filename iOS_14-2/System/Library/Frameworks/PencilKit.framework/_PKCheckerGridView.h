/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setGridSize:(double)arg1 ;
-(UIColor *)colorA;
-(void)setColorA:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setColorB:(UIColor *)arg1 ;
-(double)gridSize;
-(UIColor *)colorB;
-(id)gridTileImage;
@end

