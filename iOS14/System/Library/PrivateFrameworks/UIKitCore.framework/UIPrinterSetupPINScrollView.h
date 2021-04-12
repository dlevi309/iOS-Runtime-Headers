/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVisibleHeight:(double)arg1 ;
-(double)visibleHeight;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)dealloc;
@end

