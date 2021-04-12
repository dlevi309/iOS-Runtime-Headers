/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol BKUIPearlCoachingControllerDelegate;
@class BKUIPearlCoachingDeviceView, BKUIPearlInstructionView, UIButton;

@interface BKUIPearlCoachingController : UIViewController {

	BOOL _inBuddy;
	BOOL _isDisplayZoomEnabled;
	long long _orientation;
	id<BKUIPearlCoachingControllerDelegate> _delegate;
	BKUIPearlCoachingDeviceView* _deviceView;
	BKUIPearlInstructionView* _instructionView;
	UIButton* _escapeHatchButton;

}

@property (nonatomic,retain) BKUIPearlCoachingDeviceView * deviceView;                             //@synthesize deviceView=_deviceView - In the implementation block
@property (nonatomic,retain) BKUIPearlInstructionView * instructionView;                           //@synthesize instructionView=_instructionView - In the implementation block
@property (nonatomic,retain) UIButton * escapeHatchButton;                                         //@synthesize escapeHatchButton=_escapeHatchButton - In the implementation block
@property (getter=isDeviceFlat,nonatomic,readonly) BOOL deviceFlat; 
@property (assign) long long orientation;                                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL inBuddy;                                                         //@synthesize inBuddy=_inBuddy - In the implementation block
@property (assign,nonatomic) BOOL isDisplayZoomEnabled;                                            //@synthesize isDisplayZoomEnabled=_isDisplayZoomEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<BKUIPearlCoachingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BKUIPearlCoachingControllerDelegate>)delegate;
-(void)setDelegate:(id<BKUIPearlCoachingControllerDelegate>)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)deviceOrientationChanged;
-(void)setInBuddy:(BOOL)arg1 ;
-(BKUIPearlInstructionView *)instructionView;
-(BOOL)inBuddy;
-(BOOL)isDisplayZoomEnabled;
-(void)setIsDisplayZoomEnabled:(BOOL)arg1 ;
-(BOOL)needsToShow;
-(void)stopCoachingAnimation;
-(void)setDeviceView:(BKUIPearlCoachingDeviceView *)arg1 ;
-(BKUIPearlCoachingDeviceView *)deviceView;
-(void)setInstructionView:(BKUIPearlInstructionView *)arg1 ;
-(void)updateInstructionText;
-(void)setEscapeHatchButton:(UIButton *)arg1 ;
-(UIButton *)escapeHatchButton;
-(void)escapeHatchButtonPressed:(id)arg1 ;
-(BOOL)resetDeviceView;
-(BOOL)didOrientationChange;
-(BOOL)isDeviceFlat;
-(void)handleRotation;
@end

