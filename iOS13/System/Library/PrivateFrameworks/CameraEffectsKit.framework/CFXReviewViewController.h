/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXEffectBrowserContentPresenterViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXEffectBrowserViewControllerDelegate.h>

@protocol CFXReviewViewControllerDelegate, OS_dispatch_group;
@class CFXEffectBrowserViewController, CFXPreviewViewController, CFXReviewControlsViewController, CFXMediaItem, NSObject, CFXCounterRotationView, NSData, UIView, NSString;

@interface CFXReviewViewController : UIViewController <CFXPreviewViewControllerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate> {

	BOOL _mediaCapturedInFunCam_metadata;
	id<CFXReviewViewControllerDelegate> _delegate;
	CFXEffectBrowserViewController* _effectBrowserViewController;
	CFXPreviewViewController* _internalPreviewViewController;
	CFXReviewControlsViewController* _reviewControlsViewController;
	CFXMediaItem* _mediaItem;
	NSObject*<OS_dispatch_group> _metadataReaderGroup;
	long long _mediaCaptureDevicePosition_metadata;
	long long _mediaCaptureInterfaceOrientation_metadata;
	long long _cameraModeUsedForCapture;
	CFXCounterRotationView* _bottomControlsSnapshotContainer;

}

@property (nonatomic,retain) CFXEffectBrowserViewController * effectBrowserViewController;                //@synthesize effectBrowserViewController=_effectBrowserViewController - In the implementation block
@property (nonatomic,retain) CFXPreviewViewController * internalPreviewViewController;                    //@synthesize internalPreviewViewController=_internalPreviewViewController - In the implementation block
@property (nonatomic,retain) CFXReviewControlsViewController * reviewControlsViewController;              //@synthesize reviewControlsViewController=_reviewControlsViewController - In the implementation block
@property (nonatomic,retain) CFXMediaItem * mediaItem;                                                    //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> metadataReaderGroup;                            //@synthesize metadataReaderGroup=_metadataReaderGroup - In the implementation block
@property (nonatomic,readonly) BOOL mediaCapturedInFunCam; 
@property (assign,nonatomic) BOOL mediaCapturedInFunCam_metadata;                                         //@synthesize mediaCapturedInFunCam_metadata=_mediaCapturedInFunCam_metadata - In the implementation block
@property (nonatomic,readonly) long long mediaCaptureDevicePosition; 
@property (assign,nonatomic) long long mediaCaptureDevicePosition_metadata;                               //@synthesize mediaCaptureDevicePosition_metadata=_mediaCaptureDevicePosition_metadata - In the implementation block
@property (nonatomic,readonly) long long mediaCaptureInterfaceOrientation; 
@property (assign,nonatomic) long long mediaCaptureInterfaceOrientation_metadata;                         //@synthesize mediaCaptureInterfaceOrientation_metadata=_mediaCaptureInterfaceOrientation_metadata - In the implementation block
@property (assign,nonatomic) long long cameraModeUsedForCapture;                                          //@synthesize cameraModeUsedForCapture=_cameraModeUsedForCapture - In the implementation block
@property (nonatomic,retain) CFXCounterRotationView * bottomControlsSnapshotContainer;                    //@synthesize bottomControlsSnapshotContainer=_bottomControlsSnapshotContainer - In the implementation block
@property (nonatomic,copy,readonly) NSData * adjustmentsData; 
@property (assign,nonatomic,__weak) id<CFXReviewViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * effectsPickerDrawer; 
@property (nonatomic,readonly) BOOL mediaItemRequiresExport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id<CFXReviewViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CFXReviewViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CFXMediaItem *)mediaItem;
-(void)setMediaItem:(CFXMediaItem *)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(NSData *)adjustmentsData;
-(void)exportMediaItemToFileURL:(id)arg1 ;
-(void)setEffectsPickerDrawer:(UIView *)arg1 ;
-(void)setEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1 ;
-(CFXEffectBrowserViewController *)effectBrowserViewController;
-(CFXCounterRotationView *)bottomControlsSnapshotContainer;
-(void)setBottomControlsSnapshotContainer:(CFXCounterRotationView *)arg1 ;
-(UIView *)effectsPickerDrawer;
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
-(void)effectBrowserViewController:(id)arg1 didDismissPickerForEffectType:(id)arg2 ;
-(void)effectBrowserViewController:(id)arg1 didPresentPickerForEffectType:(id)arg2 ;
-(id)mediaItemForEffectBrowserViewController:(id)arg1 ;
-(long long)orientationUsedForCapture;
-(long long)cameraModeUsedForCapture;
-(void)previewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2 ;
-(id)selectedAppIdentifierForPreviewViewController:(id)arg1 ;
-(void)previewViewControllerDidStartEditingText:(id)arg1 ;
-(void)previewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3 ;
-(void)previewViewControllerDidHideUserInterface:(id)arg1 ;
-(void)previewViewControllerDidShowUserInterface:(id)arg1 ;
-(void)previewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3 ;
-(BOOL)mediaCapturedInFunCam;
-(void)previewViewControllerDidStopEditingText:(id)arg1 ;
-(void)CFX_resetAndLoadPreviewViewController;
-(CFXPreviewViewController *)internalPreviewViewController;
-(NSObject*<OS_dispatch_group>)metadataReaderGroup;
-(long long)mediaCaptureDevicePosition_metadata;
-(long long)mediaCaptureInterfaceOrientation_metadata;
-(long long)mediaCaptureDevicePosition;
-(void)CFX_updateAnalyticsForSentMediaItem:(id)arg1 ;
-(long long)mediaCaptureInterfaceOrientation;
-(BOOL)mediaCapturedInFunCam_metadata;
-(void)setInternalPreviewViewController:(CFXPreviewViewController *)arg1 ;
-(BOOL)mediaItemRequiresExport;
-(CFXReviewControlsViewController *)reviewControlsViewController;
-(void)setReviewControlsViewController:(CFXReviewControlsViewController *)arg1 ;
-(void)setMetadataReaderGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setMediaCapturedInFunCam_metadata:(BOOL)arg1 ;
-(void)setMediaCaptureDevicePosition_metadata:(long long)arg1 ;
-(void)setMediaCaptureInterfaceOrientation_metadata:(long long)arg1 ;
-(void)setCameraModeUsedForCapture:(long long)arg1 ;
@end

