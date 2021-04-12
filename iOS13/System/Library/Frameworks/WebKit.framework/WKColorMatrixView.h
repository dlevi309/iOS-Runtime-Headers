/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WKColorMatrixViewDelegate;
@interface WKColorMatrixView : UIView {

	RetainPtr<NSArray<NSArray<UIColor *> *> >* _colorMatrix;
	RetainPtr<NSArray<NSArray<WKColorButton *> *> >* _colorButtons;
	id<WKColorMatrixViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WKColorMatrixViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WKColorMatrixViewDelegate>)delegate;
-(void)setDelegate:(id<WKColorMatrixViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 colorMatrix:(id)arg2 ;
-(void)colorButtonTapped:(id)arg1 ;
@end

