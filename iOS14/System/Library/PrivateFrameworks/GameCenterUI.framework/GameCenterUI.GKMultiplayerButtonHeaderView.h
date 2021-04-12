/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface GameCenterUI.GKMultiplayerButtonHeaderView : UIView {

	 titleLabel;
	 stepper;
	 iconView;
	 cancelButton;
	 cancelButtonHandler;
	 wantsMaterialBackground;
	 backgroundView;

}

@property (assign,nonatomic) BOOL isStepperHidden; 
@property (assign,nonatomic) BOOL wantsMaterialBackground; 
@property (assign,nonatomic) long long minimumValue; 
@property (assign,nonatomic) long long maximumValue; 
-(long long)maximumValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMinimumValue:(long long)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(BOOL)isStepperHidden;
-(BOOL)wantsMaterialBackground;
-(void)setWantsMaterialBackground:(BOOL)arg1 ;
-(void)applyGame:(id)arg1 ;
-(void)setIsStepperHidden:(BOOL)arg1 ;
-(void)updateStepperWithValue:(long long)arg1 ;
-(id)initWithMinimumValue:(long long)arg1 maximumValue:(long long)arg2 initialValue:(long long)arg3 titleChangedHandler:(/*^block*/id)arg4 valueChangedHandler:(/*^block*/id)arg5 cancelButtonHandler:(/*^block*/id)arg6 ;
-(id)initWithCancelButtonHandler:(/*^block*/id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)cancelPressed:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)minimumValue;
-(void)setMaximumValue:(long long)arg1 ;
@end

