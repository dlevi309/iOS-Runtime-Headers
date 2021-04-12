/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface UIPrinterSetupPINScrollView : UIScrollView {

	UIView* _contentView;
	double _visibleHeight;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double visibleHeight;              //@synthesize visibleHeight=_visibleHeight - In the implementation block
-(void)dealloc;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(double)visibleHeight;
-(void)setVisibleHeight:(double)arg1 ;
@end

