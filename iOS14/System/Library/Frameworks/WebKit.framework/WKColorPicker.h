/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormControl.h>
#import <libobjc.A.dylib/WKColorMatrixViewDelegate.h>

@class WKContentView, WKColorPopover;

@interface WKColorPicker : NSObject <WKFormControl, WKColorMatrixViewDelegate> {

	WKContentView* _view;
	WKColorPopover* _popover;
	RetainPtr<UIView>* _colorPicker;
	RetainPtr<UIView>* _colorSelectionIndicator;
	RetainPtr<CAShapeLayer>* _colorSelectionIndicatorBorder;
	RetainPtr<WKColorMatrixView>* _topColorMatrix;
	RetainPtr<WKColorMatrixView>* _mainColorMatrix;
	WeakObjCPtr<WKColorButton> _selectedColorButton;
	RetainPtr<UIPanGestureRecognizer>* _colorPanGR;

}
+(id)defaultTopColorMatrix;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithView:(id)arg1 ;
-(id)initWithView:(id)arg1 inPopover:(id)arg2 ;
-(void)colorMatrixViewDidLayoutSubviews:(id)arg1 ;
-(void)colorMatrixView:(id)arg1 didTapColorButton:(id)arg2 ;
-(void)didPanColors:(id)arg1 ;
-(void)drawSelectionIndicatorForColorButton:(id)arg1 ;
-(void)setControlValueFromUIColor:(id)arg1 ;
@end

