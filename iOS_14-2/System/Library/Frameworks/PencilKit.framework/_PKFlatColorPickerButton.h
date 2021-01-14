/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/_PKInkColorButton.h>

@class _PKHueSpectrumView, CAShapeLayer;

@interface _PKFlatColorPickerButton : _PKInkColorButton {

	_PKHueSpectrumView* _hueSpectrumView;
	CAShapeLayer* _selectedColorLayer;
	CAShapeLayer* _strokeShapeLayer;
	CGRect _lastRenderedBounds;

}

@property (nonatomic,retain) _PKHueSpectrumView * hueSpectrumView;              //@synthesize hueSpectrumView=_hueSpectrumView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedColorLayer;                 //@synthesize selectedColorLayer=_selectedColorLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * strokeShapeLayer;                   //@synthesize strokeShapeLayer=_strokeShapeLayer - In the implementation block
@property (assign,nonatomic) CGRect lastRenderedBounds;                         //@synthesize lastRenderedBounds=_lastRenderedBounds - In the implementation block
-(void)layoutSubviews;
-(id)initWithColor:(id)arg1 isCompact:(BOOL)arg2 ;
-(_PKHueSpectrumView *)hueSpectrumView;
-(CAShapeLayer *)selectedColorLayer;
-(CAShapeLayer *)strokeShapeLayer;
-(void)setHueSpectrumView:(_PKHueSpectrumView *)arg1 ;
-(void)setSelectedColorLayer:(CAShapeLayer *)arg1 ;
-(void)setStrokeShapeLayer:(CAShapeLayer *)arg1 ;
-(CGRect)lastRenderedBounds;
-(void)setLastRenderedBounds:(CGRect)arg1 ;
@end

