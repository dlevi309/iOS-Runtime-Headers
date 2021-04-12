/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AXGestureRecorderControlsViewDelegate;
@class UIButton, ASTBiggerProgressView;

@interface AXGestureRecorderControlsView : UIView {

	UIButton* _leftButton;
	UIButton* _rightButton;
	ASTBiggerProgressView* _progressView;
	id<AXGestureRecorderControlsViewDelegate> _delegate;
	UIButton* _middleButton;

}

@property (nonatomic,retain) UIButton * leftButton;                                                  //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                                 //@synthesize rightButton=_rightButton - In the implementation block
@property (assign,nonatomic,__weak) id<AXGestureRecorderControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float progress; 
@property (assign,getter=isLeftButtonEnabled,nonatomic) BOOL leftButtonEnabled; 
@property (assign,getter=isRightButtonEnabled,nonatomic) BOOL rightButtonEnabled; 
@property (nonatomic,retain) UIButton * middleButton;                                                //@synthesize middleButton=_middleButton - In the implementation block
+(double)defaultHeight;
-(id<AXGestureRecorderControlsViewDelegate>)delegate;
-(void)setDelegate:(id<AXGestureRecorderControlsViewDelegate>)arg1 ;
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)leftButton;
-(void)setLeftButton:(UIButton *)arg1 ;
-(id)makeButton;
-(void)setMiddleButton:(UIButton *)arg1 ;
-(void)setLeftButtonColor:(int)arg1 title:(id)arg2 enabled:(BOOL)arg3 rightButtonColor:(int)arg4 title:(id)arg5 enabled:(BOOL)arg6 animationDuration:(double)arg7 completion:(/*^block*/id)arg8 ;
-(UIButton *)rightButton;
-(void)setRightButton:(UIButton *)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(BOOL)isLeftButtonEnabled;
-(void)setLeftButtonEnabled:(BOOL)arg1 ;
-(BOOL)isRightButtonEnabled;
-(void)setRightButtonEnabled:(BOOL)arg1 ;
-(UIButton *)middleButton;
@end

