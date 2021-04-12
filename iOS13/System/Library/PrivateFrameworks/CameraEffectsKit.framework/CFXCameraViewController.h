/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXCaptureViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXRemoteCommandServerDelegate.h>
#import <libobjc.A.dylib/CFXEffectBrowserContentPresenterViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXEffectBrowserViewControllerDelegate.h>

@protocol CFXCameraViewControllerDelegate, OS_dispatch_queue;
@class CFXCaptureViewController, CFXEffectBrowserViewController, CFXCameraControlsViewController, NSString, CFXRemoteCommandServer, CFXCounterRotationView, UIView, NSObject, JTPixelRotationSession, JTThreadSafeDictionary;

@interface CFXCameraViewController : UIViewController <CFXCaptureViewControllerDelegate, CFXRemoteCommandServerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate> {

	long long _logDebug_cameraPosition;
	BOOL _showsViewfinder;
	BOOL _usesInternalCaptureSession;
	BOOL _cameraControlsShown;
	long long _aspectRatioCrop;
	long long _captureMode;
	id<CFXCameraViewControllerDelegate> _delegate;
	CFXCaptureViewController* _captureViewController;
	CFXEffectBrowserViewController* _effectBrowserViewController;
	CFXCameraControlsViewController* _cameraControlsViewController;
	long long _initialFlashMode;
	NSString* _effectBrowserPresentedAppIdentifier;
	CFXRemoteCommandServer* _remoteCommandServer;
	CFXCounterRotationView* _bottomControlsSnapshotContainer;
	UIView* _effectsPickerSnapshotContainerView;
	NSObject*<OS_dispatch_queue> _externalCaptureSessionInputDeserializationQueue;
	NSObject*<OS_dispatch_queue> _externalCaptureSessionInputProcessingQueue;
	NSObject*<OS_dispatch_queue> _externalCaptureSessionOutputProcessingQueue;
	JTPixelRotationSession* _externalCaptureSessionRotationSession;
	long long _externalCaptureSessionCameraPosition;
	JTThreadSafeDictionary* _externalCaptureSessionInputFrameTimestamps;
	CGRect _externalPresentationRect;
	CGRect _externalContentRect;

}

@property (nonatomic,retain) CFXCaptureViewController * captureViewController;                                            //@synthesize captureViewController=_captureViewController - In the implementation block
@property (nonatomic,retain) CFXEffectBrowserViewController * effectBrowserViewController;                                //@synthesize effectBrowserViewController=_effectBrowserViewController - In the implementation block
@property (nonatomic,retain) CFXCameraControlsViewController * cameraControlsViewController;                              //@synthesize cameraControlsViewController=_cameraControlsViewController - In the implementation block
@property (assign,nonatomic) long long initialFlashMode;                                                                  //@synthesize initialFlashMode=_initialFlashMode - In the implementation block
@property (assign,nonatomic) BOOL cameraControlsShown;                                                                    //@synthesize cameraControlsShown=_cameraControlsShown - In the implementation block
@property (nonatomic,retain) NSString * effectBrowserPresentedAppIdentifier;                                              //@synthesize effectBrowserPresentedAppIdentifier=_effectBrowserPresentedAppIdentifier - In the implementation block
@property (nonatomic,retain) CFXRemoteCommandServer * remoteCommandServer;                                                //@synthesize remoteCommandServer=_remoteCommandServer - In the implementation block
@property (nonatomic,retain) CFXCounterRotationView * bottomControlsSnapshotContainer;                                    //@synthesize bottomControlsSnapshotContainer=_bottomControlsSnapshotContainer - In the implementation block
@property (nonatomic,retain) UIView * effectsPickerSnapshotContainerView;                                                 //@synthesize effectsPickerSnapshotContainerView=_effectsPickerSnapshotContainerView - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> externalCaptureSessionInputDeserializationQueue;              //@synthesize externalCaptureSessionInputDeserializationQueue=_externalCaptureSessionInputDeserializationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> externalCaptureSessionInputProcessingQueue;                   //@synthesize externalCaptureSessionInputProcessingQueue=_externalCaptureSessionInputProcessingQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> externalCaptureSessionOutputProcessingQueue;                  //@synthesize externalCaptureSessionOutputProcessingQueue=_externalCaptureSessionOutputProcessingQueue - In the implementation block
@property (nonatomic,retain) JTPixelRotationSession * externalCaptureSessionRotationSession;                              //@synthesize externalCaptureSessionRotationSession=_externalCaptureSessionRotationSession - In the implementation block
@property (assign,nonatomic) long long externalCaptureSessionCameraPosition;                                              //@synthesize externalCaptureSessionCameraPosition=_externalCaptureSessionCameraPosition - In the implementation block
@property (nonatomic,retain) JTThreadSafeDictionary * externalCaptureSessionInputFrameTimestamps;                         //@synthesize externalCaptureSessionInputFrameTimestamps=_externalCaptureSessionInputFrameTimestamps - In the implementation block
@property (assign,nonatomic) CGRect externalPresentationRect;                                                             //@synthesize externalPresentationRect=_externalPresentationRect - In the implementation block
@property (assign,nonatomic) CGRect externalContentRect;                                                                  //@synthesize externalContentRect=_externalContentRect - In the implementation block
@property (nonatomic,readonly) long long aspectRatioCrop;                                                                 //@synthesize aspectRatioCrop=_aspectRatioCrop - In the implementation block
@property (nonatomic,readonly) long long captureMode;                                                                     //@synthesize captureMode=_captureMode - In the implementation block
@property (assign,nonatomic,__weak) id<CFXCameraViewControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long devicePosition; 
@property (nonatomic,retain) UIView * effectsPickerDrawer; 
@property (getter=isEffectsPickerHidden,nonatomic,readonly) BOOL effectsPickerHidden; 
@property (nonatomic,readonly) long long effectsState; 
@property (nonatomic,readonly) long long flashMode; 
@property (nonatomic,readonly) long long mode; 
@property (assign,nonatomic) BOOL showsViewfinder;                                                                        //@synthesize showsViewfinder=_showsViewfinder - In the implementation block
@property (assign,nonatomic) double userInterfaceAlpha; 
@property (assign,nonatomic) BOOL usesInternalCaptureSession;                                                             //@synthesize usesInternalCaptureSession=_usesInternalCaptureSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)preheatWithWindow:(id)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3 aspectRatioCrop:(long long)arg4 ;
+(void)preheatWithWindow:(id)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3 ;
-(void)dealloc;
-(id<CFXCameraViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CFXCameraViewControllerDelegate>)arg1 ;
-(long long)mode;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(long long)flashMode;
-(long long)devicePosition;
-(void)setEffectsPickerDrawer:(UIView *)arg1 ;
-(long long)captureMode;
-(long long)aspectRatioCrop;
-(void)startCaptureSession;
-(void)stopCaptureSession;
-(BOOL)shouldRotateCellsForDeviceOrientation;
-(id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3 ;
-(id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3 aspectRatioCrop:(long long)arg4 ;
-(id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(CFXCaptureViewController *)captureViewController;
-(void)setCaptureViewController:(CFXCaptureViewController *)arg1 ;
-(long long)initialFlashMode;
-(void)setCameraControlsViewController:(CFXCameraControlsViewController *)arg1 ;
-(CFXCameraControlsViewController *)cameraControlsViewController;
-(void)setEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1 ;
-(CFXEffectBrowserViewController *)effectBrowserViewController;
-(CFXCounterRotationView *)bottomControlsSnapshotContainer;
-(void)setBottomControlsSnapshotContainer:(CFXCounterRotationView *)arg1 ;
-(void)setEffectsPickerSnapshotContainerView:(UIView *)arg1 ;
-(UIView *)effectsPickerDrawer;
-(UIView *)effectsPickerSnapshotContainerView;
-(NSString *)effectBrowserPresentedAppIdentifier;
-(double)userInterfaceAlpha;
-(void)setUserInterfaceAlpha:(double)arg1 ;
-(void)setCameraControlsShown:(BOOL)arg1 ;
-(BOOL)cameraControlsShown;
-(void)noteInputFrameWithTimestamp:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)externalCaptureSessionInputProcessingQueue;
-(void)setExternalCaptureSessionRotationSession:(JTPixelRotationSession *)arg1 ;
-(CGRect)externalPresentationRect;
-(CGRect)externalContentRect;
-(void)setExternalPresentationRect:(CGRect)arg1 ;
-(void)setExternalContentRect:(CGRect)arg1 ;
-(long long)externalCaptureSessionCameraPosition;
-(void)setExternalCaptureSessionCameraPosition:(long long)arg1 ;
-(BOOL)usesInternalCaptureSession;
-(id)renderFrameWithImageDataArchive:(id)arg1 pixelBuffer:(CVBufferRef)arg2 orientation:(long long)arg3 presentationRect:(CGRect)arg4 contentsRect:(CGRect)arg5 ;
-(void)renderFrameWithImageDataArchive:(id)arg1 imagePixelBuffer:(CVBufferRef)arg2 depthPixelBuffer:(CVBufferRef)arg3 orientation:(long long)arg4 presentationRect:(CGRect)arg5 contentsRect:(CGRect)arg6 ;
-(NSObject*<OS_dispatch_queue>)externalCaptureSessionInputDeserializationQueue;
-(void)renderFrameWithImageData:(id)arg1 orientation:(long long)arg2 presentationRect:(CGRect)arg3 contentsRect:(CGRect)arg4 ;
-(void)effectBrowserViewController:(id)arg1 didSelectAppWithIdentifier:(id)arg2 ;
-(void)setEffectBrowserPresentedAppIdentifier:(NSString *)arg1 ;
-(long long)effectsState;
-(NSObject*<OS_dispatch_queue>)externalCaptureSessionOutputProcessingQueue;
-(JTPixelRotationSession *)externalCaptureSessionRotationSession;
-(SCD_Struct_CF2)noteOutputFrameWithTimestamp:(SCD_Struct_CF2)arg1 ;
-(void)updateUIForVideoRecording:(BOOL)arg1 ;
-(JTThreadSafeDictionary *)externalCaptureSessionInputFrameTimestamps;
-(void)captureViewController:(id)arg1 didCaptureMediaItem:(id)arg2 ;
-(void)captureViewController:(id)arg1 didChangeEffectComposition:(id)arg2 ;
-(void)captureViewController:(id)arg1 didRenderFrame:(id)arg2 ;
-(void)captureViewControllerDoneButtonWasTapped:(id)arg1 ;
-(void)captureViewControllerEffectsButtonWasTapped:(id)arg1 ;
-(void)captureViewControllerPresentationRectWasDoubleTapped:(id)arg1 ;
-(void)captureViewController:(id)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4 ;
-(void)captureViewControllerStartCaptureSession:(id)arg1 ;
-(void)captureViewControllerStopCaptureSession:(id)arg1 ;
-(void)captureViewControllerCameraFlipButtonWasTapped:(id)arg1 ;
-(id)cameraControlsViewControllerForCaptureViewController:(id)arg1 ;
-(void)captureViewControllerDidStartVideoRecording:(id)arg1 ;
-(void)captureViewControllerDidStopVideoRecording:(id)arg1 ;
-(void)remoteCommandServer:(id)arg1 didReceiveAddShapeCommandWithIdentifier:(id)arg2 ;
-(void)remoteCommandServer:(id)arg1 didReceiveAddStickerCommandWithURL:(id)arg2 offset:(CGPoint)arg3 scale:(double)arg4 rotation:(double)arg5 ;
-(void)remoteCommandServer:(id)arg1 didReceiveAddTextCommandWithIdentifier:(id)arg2 string:(id)arg3 ;
-(void)remoteCommandServer:(id)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(id)arg2 ;
-(void)remoteCommandServer:(id)arg1 didReceiveSetAnimojiCommandWithIdentifier:(id)arg2 ;
-(void)remoteCommandServer:(id)arg1 didReceiveSetFilterCommandWithIdentifier:(id)arg2 ;
-(double)effectBrowserViewController:(id)arg1 screenTopBarHeightForWindowBounds:(CGRect)arg2 orientation:(long long)arg3 ;
-(void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2 ;
-(BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg1 didDropOverlayEffect:(id)arg2 atScreenLocation:(CGPoint)arg3 atScreenSize:(CGSize)arg4 rotationAngle:(double)arg5 ;
-(void)effectBrowserViewController:(id)arg1 didRemoveAllEffectsOfType:(id)arg2 ;
-(void)effectBrowserViewController:(id)arg1 didSelectEffect:(id)arg2 ;
-(void)effectBrowserViewController:(id)arg1 filterPickerPreviewBackgroundImageAtSizeInPixels:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(id)selectedFilterIdentifierForEffectBrowserViewController:(id)arg1 ;
-(id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg1 ;
-(id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg1 ;
-(BOOL)allowLandscapeForEffectBrowserViewController:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg1 didSelectApp:(id)arg2 ;
-(void)effectBrowserViewControllerDidStartCaptureSession:(id)arg1 ;
-(void)effectBrowserViewControllerDidStopCaptureSession:(id)arg1 ;
-(void)setShowsViewfinder:(BOOL)arg1 ;
-(void)setUsesInternalCaptureSession:(BOOL)arg1 ;
-(BOOL)isEffectsPickerHidden;
-(void)setEffectsPickerHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTransitionState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)removeAllEffects;
-(id)renderFrameWithImageDataArchive:(id)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(BOOL)showsViewfinder;
-(void)setInitialFlashMode:(long long)arg1 ;
-(CFXRemoteCommandServer *)remoteCommandServer;
-(void)setRemoteCommandServer:(CFXRemoteCommandServer *)arg1 ;
-(void)setExternalCaptureSessionInputFrameTimestamps:(JTThreadSafeDictionary *)arg1 ;
@end

