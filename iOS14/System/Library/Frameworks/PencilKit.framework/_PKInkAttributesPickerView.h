/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_PKColorAlphaSliderDelegate.h>

@protocol _PKInkAttributesPickerViewDelegate;
@class PKInk, _PKInkThicknessPicker, _PKColorAlphaSlider, UIView, NSString;

@interface _PKInkAttributesPickerView : UIView <_PKColorAlphaSliderDelegate> {

	id<_PKInkAttributesPickerViewDelegate> _delegate;
	PKInk* _ink;
	unsigned long long _displayMode;
	double _minimumOpacityValue;
	_PKInkThicknessPicker* _thicknessPicker;
	_PKColorAlphaSlider* _colorAlphaSlider;
	UIView* _separatorView;

}

@property (nonatomic,retain) _PKInkThicknessPicker * thicknessPicker;                             //@synthesize thicknessPicker=_thicknessPicker - In the implementation block
@property (nonatomic,retain) _PKColorAlphaSlider * colorAlphaSlider;                              //@synthesize colorAlphaSlider=_colorAlphaSlider - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                              //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic,__weak) id<_PKInkAttributesPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                                         //@synthesize ink=_ink - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;                                      //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@property (assign,nonatomic) double minimumOpacityValue;                                          //@synthesize minimumOpacityValue=_minimumOpacityValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKInk *)ink;
-(UIView *)separatorView;
-(id<_PKInkAttributesPickerViewDelegate>)delegate;
-(unsigned long long)displayMode;
-(void)setDelegate:(id<_PKInkAttributesPickerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setInk:(PKInk *)arg1 ;
-(void)_updateUI;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(id)initWithInk:(id)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)setMinimumOpacityValue:(double)arg1 ;
-(double)minimumOpacityValue;
-(void)setInk:(id)arg1 animated:(BOOL)arg2 ;
-(void)_thicknessValueChanged:(id)arg1 ;
-(_PKInkThicknessPicker *)thicknessPicker;
-(void)_opacityValueChanged:(id)arg1 ;
-(_PKColorAlphaSlider *)colorAlphaSlider;
-(void)_colorAlphaSliderUserDidStartDraggingSlider:(id)arg1 ;
-(void)_colorAlphaSliderUserDidEndDraggingSlider:(id)arg1 ;
-(void)setThicknessPicker:(_PKInkThicknessPicker *)arg1 ;
-(void)setColorAlphaSlider:(_PKColorAlphaSlider *)arg1 ;
@end

