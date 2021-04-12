/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFMagicHeadWheelViewDelegate.h>

@protocol SFAirDropMagicHeadViewControllerDelegate;
@class NSObject, UILabel, CMMotionManager, SFMagicHeadWheelView;

@interface SFAirDropMagicHeadViewController : UIViewController <SFMagicHeadWheelViewDelegate> {

	BOOL _magicHead;
	BOOL _enabled;
	BOOL _viewVisible;
	BOOL _motionUpdatesStarted;
	NSObject*<SFAirDropMagicHeadViewControllerDelegate> _delegate;
	unsigned long long _numberOfDots;
	double _dotsRadius;
	UILabel* _nameLabel;
	UILabel* _nameLabel2;
	UILabel* _secondLabel;
	CMMotionManager* _motionManager;
	double _initialAngleDegrees;
	long long _currentOrientation;
	SFMagicHeadWheelView* _wheelView;

}

@property (nonatomic,retain) UILabel * nameLabel;                                             //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel2;                                            //@synthesize nameLabel2=_nameLabel2 - In the implementation block
@property (nonatomic,retain) UILabel * secondLabel;                                           //@synthesize secondLabel=_secondLabel - In the implementation block
@property (assign,nonatomic) BOOL viewVisible;                                                //@synthesize viewVisible=_viewVisible - In the implementation block
@property (assign,nonatomic) BOOL motionUpdatesStarted;                                       //@synthesize motionUpdatesStarted=_motionUpdatesStarted - In the implementation block
@property (nonatomic,retain) CMMotionManager * motionManager;                                 //@synthesize motionManager=_motionManager - In the implementation block
@property (assign,nonatomic) double initialAngleDegrees;                                      //@synthesize initialAngleDegrees=_initialAngleDegrees - In the implementation block
@property (assign,nonatomic) long long currentOrientation;                                    //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (nonatomic,retain) SFMagicHeadWheelView * wheelView;                                //@synthesize wheelView=_wheelView - In the implementation block
@property (__weak) NSObject*<SFAirDropMagicHeadViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfDots;                                 //@synthesize numberOfDots=_numberOfDots - In the implementation block
@property (assign,nonatomic) double dotsRadius;                                               //@synthesize dotsRadius=_dotsRadius - In the implementation block
@property (assign,getter=isMagicHead,nonatomic) BOOL magicHead;                               //@synthesize magicHead=_magicHead - In the implementation block
@property (nonatomic,readonly) BOOL shouldBeHidden; 
@property (assign,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSObject*<SFAirDropMagicHeadViewControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<SFAirDropMagicHeadViewControllerDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)update;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(long long)currentOrientation;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(UILabel *)secondLabel;
-(void)setNumberOfDots:(unsigned long long)arg1 ;
-(void)setDotsRadius:(double)arg1 ;
-(void)setMagicHead:(BOOL)arg1 ;
-(SFMagicHeadWheelView *)wheelView;
-(CMMotionManager *)motionManager;
-(void)updateLabels;
-(void)setCurrentOrientation:(long long)arg1 ;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(void)setViewVisible:(BOOL)arg1 ;
-(BOOL)shouldBeHidden;
-(BOOL)viewVisible;
-(void)setWheelView:(SFMagicHeadWheelView *)arg1 ;
-(BOOL)isMagicHead;
-(void)magicHeadSelectedHeadRequestingDisabledState:(BOOL)arg1 ;
-(void)magicHeadChangedFacingDegree:(double)arg1 ;
-(unsigned long long)numberOfDots;
-(double)dotsRadius;
-(void)magicHeadSelectedNodeTapped:(id)arg1 ;
-(void)magicHeadChangedSelectionToNode:(id)arg1 ;
-(void)magicHeadSelectedHeadRequestingSubtitleTextChangeForState:(long long)arg1 ;
-(void)magicHeadDidStartTransferForNode:(id)arg1 ;
-(void)magicHeadDidTerminateTransferForNode:(id)arg1 ;
-(void)magicHeadDidFinishTransferForNode:(id)arg1 ;
-(BOOL)motionUpdatesStarted;
-(void)setMotionUpdatesStarted:(BOOL)arg1 ;
-(void)handleDeviceMotion:(id)arg1 ;
-(void)setNameLabel2:(UILabel *)arg1 ;
-(void)resetSecondLabel;
-(void)calculatePreferredSize;
-(void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2 ;
-(UILabel *)nameLabel2;
-(id)headForRealName:(id)arg1 ;
-(void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateNodes:(id)arg1 withPersonToProgress:(id)arg2 ;
-(void)resetTransferStateWithRealName:(id)arg1 ;
-(void)userSelectedWithRealName:(id)arg1 ;
-(void)transferCancelledToPerson:(id)arg1 ;
-(double)initialAngleDegrees;
-(void)setInitialAngleDegrees:(double)arg1 ;
@end

