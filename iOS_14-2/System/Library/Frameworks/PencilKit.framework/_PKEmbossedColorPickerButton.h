/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/_PKInkColorButton.h>

@class _PKHueSpectrumView, CAShapeLayer, UIImageView;

@interface _PKEmbossedColorPickerButton : _PKInkColorButton {

	_PKHueSpectrumView* _hueSpectrumView;
	CAShapeLayer* _selectedColorLayer;
	UIImageView* _embossImageView;
	CAShapeLayer* _strokeShapeLayer;

}

@property (nonatomic,retain) _PKHueSpectrumView * hueSpectrumView;              //@synthesize hueSpectrumView=_hueSpectrumView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedColorLayer;                 //@synthesize selectedColorLayer=_selectedColorLayer - In the implementation block
@property (nonatomic,retain) UIImageView * embossImageView;                     //@synthesize embossImageView=_embossImageView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * strokeShapeLayer;                   //@synthesize strokeShapeLayer=_strokeShapeLayer - In the implementation block
-(void)layoutSubviews;
-(id)initWithColor:(id)arg1 isCompact:(BOOL)arg2 ;
-(_PKHueSpectrumView *)hueSpectrumView;
-(CAShapeLayer *)selectedColorLayer;
-(UIImageView *)embossImageView;
-(CAShapeLayer *)strokeShapeLayer;
-(void)setHueSpectrumView:(_PKHueSpectrumView *)arg1 ;
-(void)setSelectedColorLayer:(CAShapeLayer *)arg1 ;
-(void)setEmbossImageView:(UIImageView *)arg1 ;
-(void)setStrokeShapeLayer:(CAShapeLayer *)arg1 ;
@end

