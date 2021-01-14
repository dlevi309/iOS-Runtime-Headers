/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIButton *)downButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<AAUIArrowControlsViewDelegate>)delegate;
-(UIButton *)upButton;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setDelegate:(id<AAUIArrowControlsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(long long)interfaceOrientation;
-(void)_arrowButtonWasTapped:(id)arg1 ;
@end

