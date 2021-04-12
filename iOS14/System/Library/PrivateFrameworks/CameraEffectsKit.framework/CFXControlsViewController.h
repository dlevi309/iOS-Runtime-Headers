/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEffectsPickerDrawer:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)setUsesInternalCaptureSession:(BOOL)arg1 ;
-(UIView *)effectsPickerDrawer;
-(UIView *)controlsContainerView;
-(CFXEffectBrowserContentPresenterViewController *)effectBrowserContentPresenterViewController;
-(NSLayoutConstraint *)controlsContainerViewTopConstraint;
-(NSLayoutConstraint *)controlsContainerViewLeadingConstraint;
-(NSLayoutConstraint *)controlsContainerViewTrailingConstraint;
-(NSLayoutConstraint *)controlsContainerViewWidthConstraint;
-(NSLayoutConstraint *)controlsContainerViewHeightConstraint;
-(void)setEffectsBrowser:(UIView *)arg1 ;
-(id)effectsPickerSnapshot;
-(CGPoint)effectsPickerCenter;
-(BOOL)usesInternalCaptureSession;
-(void)setEffectBrowserContentPresenterViewController:(CFXEffectBrowserContentPresenterViewController *)arg1 ;
-(UIView *)effectsBrowser;
-(void)setControlsContainerView:(UIView *)arg1 ;
-(void)setControlsContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setControlsContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setControlsContainerViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setControlsContainerViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setControlsContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
@end

