/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, NSLayoutConstraint, CFXEffectBrowserContentPresenterViewController;

@interface CFXControlsViewController : UIViewController {

	BOOL _usesInternalCaptureSession;
	UIView* _controlsContainerView;
	UIView* _effectsPickerDrawer;
	UIView* _effectsBrowser;
	NSLayoutConstraint* _controlsContainerViewHeightConstraint;
	NSLayoutConstraint* _controlsContainerViewWidthConstraint;
	NSLayoutConstraint* _controlsContainerViewTrailingConstraint;
	NSLayoutConstraint* _controlsContainerViewLeadingConstraint;
	NSLayoutConstraint* _controlsContainerViewTopConstraint;
	CFXEffectBrowserContentPresenterViewController* _effectBrowserContentPresenterViewController;

}

@property (assign,nonatomic,__weak) UIView * controlsContainerView;                                                                     //@synthesize controlsContainerView=_controlsContainerView - In the implementation block
@property (nonatomic,retain) UIView * effectsPickerDrawer;                                                                              //@synthesize effectsPickerDrawer=_effectsPickerDrawer - In the implementation block
@property (nonatomic,retain) UIView * effectsBrowser;                                                                                   //@synthesize effectsBrowser=_effectsBrowser - In the implementation block
@property (assign,nonatomic) BOOL usesInternalCaptureSession;                                                                           //@synthesize usesInternalCaptureSession=_usesInternalCaptureSession - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * controlsContainerViewHeightConstraint;                                                //@synthesize controlsContainerViewHeightConstraint=_controlsContainerViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * controlsContainerViewWidthConstraint;                                                 //@synthesize controlsContainerViewWidthConstraint=_controlsContainerViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * controlsContainerViewTrailingConstraint;                                              //@synthesize controlsContainerViewTrailingConstraint=_controlsContainerViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * controlsContainerViewLeadingConstraint;                                               //@synthesize controlsContainerViewLeadingConstraint=_controlsContainerViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * controlsContainerViewTopConstraint;                                                   //@synthesize controlsContainerViewTopConstraint=_controlsContainerViewTopConstraint - In the implementation block
@property (nonatomic,retain) CFXEffectBrowserContentPresenterViewController * effectBrowserContentPresenterViewController;              //@synthesize effectBrowserContentPresenterViewController=_effectBrowserContentPresenterViewController - In the implementation block
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setEffectsPickerDrawer:(UIView *)arg1 ;
-(NSLayoutConstraint *)controlsContainerViewTopConstraint;
-(NSLayoutConstraint *)controlsContainerViewLeadingConstraint;
-(NSLayoutConstraint *)controlsContainerViewTrailingConstraint;
-(NSLayoutConstraint *)controlsContainerViewWidthConstraint;
-(NSLayoutConstraint *)controlsContainerViewHeightConstraint;
-(UIView *)controlsContainerView;
-(CFXEffectBrowserContentPresenterViewController *)effectBrowserContentPresenterViewController;
-(void)setEffectsBrowser:(UIView *)arg1 ;
-(id)effectsPickerSnapshot;
-(CGPoint)effectsPickerCenter;
-(UIView *)effectsPickerDrawer;
-(BOOL)usesInternalCaptureSession;
-(void)setUsesInternalCaptureSession:(BOOL)arg1 ;
-(void)setEffectBrowserContentPresenterViewController:(CFXEffectBrowserContentPresenterViewController *)arg1 ;
-(UIView *)effectsBrowser;
-(void)setControlsContainerView:(UIView *)arg1 ;
-(void)setControlsContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setControlsContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setControlsContainerViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setControlsContainerViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setControlsContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
@end

