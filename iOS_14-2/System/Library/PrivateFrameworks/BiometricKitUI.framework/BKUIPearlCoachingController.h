/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol BKUIPearlCoachingControllerDelegate;
@class BKUIPearlCoachingDeviceView, BKUIPearlInstructionView, UIButton;

@interface BKUIPearlCoachingController : UIViewController {

	BOOL _inBuddy;
	BOOL _inSheet;
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
@property (assign,nonatomic) BOOL inSheet;                                                         //@synthesize inSheet=_inSheet - In the implementation block
@property (assign,nonatomic) BOOL isDisplayZoomEnabled;                                            //@synthesize isDisplayZoomEnabled=_isDisplayZoomEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<BKUIPearlCoachingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BKUIPearlCoachingControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<BKUIPearlCoachingControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)deviceOrientationChanged;
-(long long)orientation;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)inBuddy;
-(BOOL)inSheet;
-(void)setOrientation:(long long)arg1 ;
-(BKUIPearlInstructionView *)instructionView;
-(void)setInBuddy:(BOOL)arg1 ;
-(void)setInSheet:(BOOL)arg1 ;
-(BOOL)isDisplayZoomEnabled;
-(void)setIsDisplayZoomEnabled:(BOOL)arg1 ;
-(void)setInstructionView:(BKUIPearlInstructionView *)arg1 ;
-(BOOL)needsToShow;
-(void)stopCoachingAnimation;
-(void)setDeviceView:(BKUIPearlCoachingDeviceView *)arg1 ;
-(BKUIPearlCoachingDeviceView *)deviceView;
-(void)updateInstructionText;
-(void)setEscapeHatchButton:(UIButton *)arg1 ;
-(UIButton *)escapeHatchButton;
-(void)escapeHatchButtonPressed:(id)arg1 ;
-(BOOL)resetDeviceView;
-(BOOL)didOrientationChange;
-(BOOL)isDeviceFlat;
-(void)handleRotation;
@end

