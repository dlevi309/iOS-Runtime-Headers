/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface GameCenterUI.GKMultiplayerStepperView : UIView {

	 downButton;
	 upButton;
	 label;
	 backgroundView;
	 model;
	 isStepperHidden;

}

@property (readonly,nonatomic) UIButton * accessibilityDownButton; 
@property (readonly,nonatomic) UIButton * accessibilityUpButton; 
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(void)didTapDown:(id)arg1 ;
-(void)didTapUp:(id)arg1 ;
-(UIButton *)accessibilityDownButton;
-(UIButton *)accessibilityUpButton;
-(void)accessibilityUpdateStepperWithValue:(long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
@end

