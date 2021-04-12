/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_PKColorPickerImplementationDelegate.h>

@protocol _PKColorPickerViewDelegate;
@class UIColor, UIPanGestureRecognizer, PKColorPickerCrosshairView, PKColorMatrixView, NSString;

@interface _PKColorPickerView : UIView <_PKColorPickerImplementationDelegate> {

	id<_PKColorPickerViewDelegate> _delegate;
	UIColor* _selectedColor;
	UIColor* _initialColor;
	UIPanGestureRecognizer* _crosshairPanGR;
	PKColorPickerCrosshairView* _crosshairView;
	PKColorMatrixView* _gridColorPicker;

}

@property (assign,nonatomic,__weak) id<_PKColorPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;                                     //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) UIColor * initialColor;                                      //@synthesize initialColor=_initialColor - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * crosshairPanGR;                     //@synthesize crosshairPanGR=_crosshairPanGR - In the implementation block
@property (nonatomic,retain) PKColorPickerCrosshairView * crosshairView;                  //@synthesize crosshairView=_crosshairView - In the implementation block
@property (nonatomic,retain) PKColorMatrixView * gridColorPicker;                         //@synthesize gridColorPicker=_gridColorPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_PKColorPickerViewDelegate>)delegate;
-(void)setDelegate:(id<_PKColorPickerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)colorPickerImplementationDidChangeSelectedColor:(id)arg1 ;
-(void)colorPickerImplementationUserDidTouchUpInside:(id)arg1 ;
-(void)didPanCrosshair:(id)arg1 ;
-(PKColorPickerCrosshairView *)crosshairView;
-(PKColorMatrixView *)gridColorPicker;
-(void)_setSelectedColorForPoint:(CGPoint)arg1 ;
-(BOOL)pointIsSignificantlyOutside:(CGPoint)arg1 ;
-(UIColor *)initialColor;
-(void)setInitialColor:(UIColor *)arg1 ;
-(UIPanGestureRecognizer *)crosshairPanGR;
-(void)setCrosshairPanGR:(UIPanGestureRecognizer *)arg1 ;
-(void)setCrosshairView:(PKColorPickerCrosshairView *)arg1 ;
-(void)setGridColorPicker:(PKColorMatrixView *)arg1 ;
@end

