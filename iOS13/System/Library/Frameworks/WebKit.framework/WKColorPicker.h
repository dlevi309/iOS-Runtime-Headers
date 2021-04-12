/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormControl.h>
#import <libobjc.A.dylib/WKColorMatrixViewDelegate.h>

@class WKContentView;

@interface WKColorPicker : NSObject <WKFormControl, WKColorMatrixViewDelegate> {

	WKContentView* _view;
	RetainPtr<UIView>* _colorPicker;
	RetainPtr<UIView>* _colorSelectionIndicator;
	RetainPtr<CAShapeLayer>* _colorSelectionIndicatorBorder;
	RetainPtr<WKColorMatrixView>* _topColorMatrix;
	RetainPtr<WKColorMatrixView>* _mainColorMatrix;
	WeakObjCPtr<WKColorButton> _selectedColorButton;
	RetainPtr<UIPanGestureRecognizer>* _colorPanGR;

}
+(id)defaultTopColorMatrix;
-(id)initWithView:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)colorMatrixViewDidLayoutSubviews:(id)arg1 ;
-(void)colorMatrixView:(id)arg1 didTapColorButton:(id)arg2 ;
-(void)didPanColors:(id)arg1 ;
-(void)drawSelectionIndicatorForColorButton:(id)arg1 ;
-(void)setControlValueFromUIColor:(id)arg1 ;
@end

