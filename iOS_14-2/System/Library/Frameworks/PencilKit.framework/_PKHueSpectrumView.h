/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, CAShapeLayer;

@interface _PKHueSpectrumView : UIView {

	BOOL _isCompact;
	BOOL _isEmbossed;
	BOOL _isSelected;
	UIImageView* _imageView;
	CAShapeLayer* _maskLayer;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * maskLayer;              //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic) BOOL isCompact;                        //@synthesize isCompact=_isCompact - In the implementation block
@property (assign,nonatomic) BOOL isEmbossed;                       //@synthesize isEmbossed=_isEmbossed - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                       //@synthesize isSelected=_isSelected - In the implementation block
+(id)colorWheelImage:(BOOL)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(BOOL)isCompact;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setMaskLayer:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(CAShapeLayer *)maskLayer;
-(void)setIsCompact:(BOOL)arg1 ;
-(void)setIsEmbossed:(BOOL)arg1 ;
-(BOOL)isEmbossed;
@end

