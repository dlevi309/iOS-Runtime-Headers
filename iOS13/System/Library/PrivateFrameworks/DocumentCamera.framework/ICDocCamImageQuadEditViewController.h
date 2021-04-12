/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/ICDocCamImageQuadEditOverlayDelegate.h>
#import <libobjc.A.dylib/DCUnsavedDataDelegate.h>

@protocol DCScanDataDelegate;
@class UIScrollView, ICDocCamImageQuadEditImageView, UIView, ICDocCamImageQuadEditOverlay, UIColor, UIImage, CAShapeLayer, UIBezierPath, ICDocCamImageQuad, UIButton, UILabel, NSLayoutConstraint, NSNumber, NSString;

@interface ICDocCamImageQuadEditViewController : UIViewController <UIScrollViewDelegate, ICDocCamImageQuadEditOverlayDelegate, DCUnsavedDataDelegate> {

	BOOL _showImageAsAspectFit;
	BOOL _inCaptureMode;
	BOOL _didAdjustQuad;
	BOOL _shouldAdjustForApectFitIfNecessary;
	BOOL _invisibleButtonContainer;
	BOOL _didPressSave;
	BOOL _didCallCompletion;
	UIScrollView* _scrollView;
	ICDocCamImageQuadEditImageView* _imageView;
	ICDocCamImageQuadEditImageView* _backgroundImageView;
	UIView* _buttonContainer;
	ICDocCamImageQuadEditOverlay* _overlay;
	double _knobHeight;
	UIColor* _knobColor;
	UIView* _placard;
	UIImage* _image;
	id<DCScanDataDelegate> _scanDataDelegate;
	CAShapeLayer* _overlayMask;
	UIBezierPath* _overlayMaskPath;
	ICDocCamImageQuad* _quad;
	ICDocCamImageQuad* _initialQuad;
	long long _orientation;
	/*^block*/id _completionHandler;
	UIButton* _cancelButton;
	UIButton* _saveButton;
	UILabel* _userPromptLabel;
	NSLayoutConstraint* _buttonContainerHeightConstraint;
	NSNumber* _startOrientationIsPortrait;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) ICDocCamImageQuadEditImageView * imageView;                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) ICDocCamImageQuadEditImageView * backgroundImageView;                     //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * overlayMask;                                               //@synthesize overlayMask=_overlayMask - In the implementation block
@property (nonatomic,retain) UIBezierPath * overlayMaskPath;                                           //@synthesize overlayMaskPath=_overlayMaskPath - In the implementation block
@property (nonatomic,retain) ICDocCamImageQuad * quad;                                                 //@synthesize quad=_quad - In the implementation block
@property (nonatomic,retain) ICDocCamImageQuad * initialQuad;                                          //@synthesize initialQuad=_initialQuad - In the implementation block
@property (assign,nonatomic) long long orientation;                                                    //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) UIButton * cancelButton;                                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * saveButton;                                             //@synthesize saveButton=_saveButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * userPromptLabel;                                         //@synthesize userPromptLabel=_userPromptLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * buttonContainerHeightConstraint;              //@synthesize buttonContainerHeightConstraint=_buttonContainerHeightConstraint - In the implementation block
@property (nonatomic,retain) NSNumber * startOrientationIsPortrait;                                    //@synthesize startOrientationIsPortrait=_startOrientationIsPortrait - In the implementation block
@property (assign,nonatomic) BOOL didAdjustQuad;                                                       //@synthesize didAdjustQuad=_didAdjustQuad - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustForApectFitIfNecessary;                                  //@synthesize shouldAdjustForApectFitIfNecessary=_shouldAdjustForApectFitIfNecessary - In the implementation block
@property (assign,nonatomic) BOOL invisibleButtonContainer;                                            //@synthesize invisibleButtonContainer=_invisibleButtonContainer - In the implementation block
@property (assign,nonatomic) BOOL didPressSave;                                                        //@synthesize didPressSave=_didPressSave - In the implementation block
@property (assign,nonatomic) BOOL didCallCompletion;                                                   //@synthesize didCallCompletion=_didCallCompletion - In the implementation block
@property (assign,nonatomic,__weak) UIView * buttonContainer;                                          //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) ICDocCamImageQuadEditOverlay * overlay;                                   //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,readonly) double knobHeight;                                                      //@synthesize knobHeight=_knobHeight - In the implementation block
@property (nonatomic,readonly) UIColor * knobColor;                                                    //@synthesize knobColor=_knobColor - In the implementation block
@property (assign,nonatomic,__weak) UIView * placard;                                                  //@synthesize placard=_placard - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) id<DCScanDataDelegate> scanDataDelegate;                                //@synthesize scanDataDelegate=_scanDataDelegate - In the implementation block
@property (assign,nonatomic) BOOL showImageAsAspectFit;                                                //@synthesize showImageAsAspectFit=_showImageAsAspectFit - In the implementation block
@property (assign,nonatomic) BOOL inCaptureMode;                                                       //@synthesize inCaptureMode=_inCaptureMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)orientation;
-(ICDocCamImageQuadEditOverlay *)overlay;
-(UIImage *)image;
-(void)setOrientation:(long long)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(ICDocCamImageQuadEditImageView *)imageView;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(ICDocCamImageQuadEditImageView *)backgroundImageView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(UIColor *)knobColor;
-(void)setImageView:(ICDocCamImageQuadEditImageView *)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(ICDocCamImageQuad *)quad;
-(void)setQuad:(ICDocCamImageQuad *)arg1 ;
-(void)updateFonts;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setSaveButton:(UIButton *)arg1 ;
-(UIButton *)saveButton;
-(void)setBackgroundImageView:(ICDocCamImageQuadEditImageView *)arg1 ;
-(void)setOverlay:(ICDocCamImageQuadEditOverlay *)arg1 ;
-(UIView *)buttonContainer;
-(void)setButtonContainer:(UIView *)arg1 ;
-(void)prepareForDismissal;
-(void)scanWasDeleted:(id)arg1 ;
-(void)setupAccessibility;
-(id<DCScanDataDelegate>)scanDataDelegate;
-(id)quadForOverlay;
-(UIView *)placard;
-(id)finalQuadFromOverlay;
-(id)initWithImage:(id)arg1 quad:(id)arg2 scanDataDelegate:(id)arg3 orientation:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setShowImageAsAspectFit:(BOOL)arg1 ;
-(double)knobHeight;
-(void)setUpImageView;
-(NSLayoutConstraint *)buttonContainerHeightConstraint;
-(void)updateButtonTitles;
-(void)setDidCallCompletion:(BOOL)arg1 ;
-(NSNumber *)startOrientationIsPortrait;
-(void)setStartOrientationIsPortrait:(NSNumber *)arg1 ;
-(UILabel *)userPromptLabel;
-(BOOL)inCaptureMode;
-(id)adjustedQuad;
-(BOOL)showImageAsAspectFit;
-(void)setShouldAdjustForApectFitIfNecessary:(BOOL)arg1 ;
-(void)updateToAspectFitIfNecessary;
-(void)centerAndScaleImageInScrollView;
-(void)setInvisibleButtonContainer:(BOOL)arg1 ;
-(id)uiQuadForOverlay:(id)arg1 ;
-(BOOL)invisibleButtonContainer;
-(void)setDidAdjustQuad:(BOOL)arg1 ;
-(void)updateOverlayScrimMask;
-(UIBezierPath *)overlayMaskPath;
-(CAShapeLayer *)overlayMask;
-(BOOL)shouldAdjustForApectFitIfNecessary;
-(ICDocCamImageQuad *)initialQuad;
-(BOOL)didAdjustQuad;
-(void)setDidPressSave:(BOOL)arg1 ;
-(id)finalQuad;
-(void)callCompletionHandler:(BOOL)arg1 withImage:(id)arg2 quad:(id)arg3 preparingForDismissal:(BOOL)arg4 ;
-(id)quadForOverlay:(id)arg1 ;
-(BOOL)didPressSave;
-(id)uiInitialQuadForOverlay:(id)arg1 ;
-(BOOL)didCallCompletion;
-(CGRect)unitImageRectForOverlayRect:(CGRect)arg1 ;
-(CGRect)imageFrameInOverlayCoordinates;
-(void)selectedKnobDidPanToRect:(CGRect)arg1 ;
-(void)selectedKnobDidChange:(id)arg1 ;
-(double)currentZoomFactorForOverlay;
-(void)overlayDidLayout:(id)arg1 ;
-(void)setInCaptureMode:(BOOL)arg1 ;
-(CGRect)rectAvailableForDefaultRect;
-(void)saveButtonPressed:(id)arg1 ;
-(void)setPlacard:(UIView *)arg1 ;
-(void)setOverlayMask:(CAShapeLayer *)arg1 ;
-(void)setOverlayMaskPath:(UIBezierPath *)arg1 ;
-(void)setInitialQuad:(ICDocCamImageQuad *)arg1 ;
-(void)setUserPromptLabel:(UILabel *)arg1 ;
-(void)setButtonContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

