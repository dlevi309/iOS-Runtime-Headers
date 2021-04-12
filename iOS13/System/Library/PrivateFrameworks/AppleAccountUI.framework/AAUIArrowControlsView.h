/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AAUIArrowControlsViewDelegate;
@class UIButton;

@interface AAUIArrowControlsView : UIView {

	UIButton* _upButton;
	UIButton* _downButton;
	id<AAUIArrowControlsViewDelegate> _delegate;
	long long _interfaceOrientation;

}

@property (assign,nonatomic) id<AAUIArrowControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * downButton;                                 //@synthesize downButton=_downButton - In the implementation block
@property (nonatomic,readonly) UIButton * upButton;                                   //@synthesize upButton=_upButton - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                          //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(double)defaultWidthForOrientation:(long long)arg1 ;
-(id<AAUIArrowControlsViewDelegate>)delegate;
-(void)setDelegate:(id<AAUIArrowControlsViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)interfaceOrientation;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)_arrowButtonWasTapped:(id)arg1 ;
-(UIButton *)downButton;
-(UIButton *)upButton;
@end

