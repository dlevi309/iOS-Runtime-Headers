/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, CAShapeLayer, _NTKCFaceDetailCollectionCellLabel, UIImage, NSString;

@interface _NTKCFaceDetailCollectionCell : UICollectionViewCell {

	UIImageView* _imageView;
	CAShapeLayer* _outlineView;
	_NTKCFaceDetailCollectionCellLabel* _label;
	BOOL _active;
	double _outlineOutset;
	UIImage* _image;
	NSString* _text;
	long long _style;
	CGRect _swatchFrame;

}

@property (assign,nonatomic) CGRect swatchFrame;                //@synthesize swatchFrame=_swatchFrame - In the implementation block
@property (assign,nonatomic) double outlineOutset;              //@synthesize outlineOutset=_outlineOutset - In the implementation block
@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long style;                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL active;                       //@synthesize active=_active - In the implementation block
+(id)reuseIdentifier;
+(double)outlineLineWidth;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setSwatchFrame:(CGRect)arg1 ;
-(void)setOutlineOutset:(double)arg1 ;
-(CGRect)swatchFrame;
-(double)outlineOutset;
@end

