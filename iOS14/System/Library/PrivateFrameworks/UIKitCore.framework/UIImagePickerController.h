/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKitCore/_UIRemoteViewControllerContaining.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSMutableDictionary, UIViewController, NSExtension, NSString, UIView, _UIRemoteViewController;

@interface UIImagePickerController : UINavigationController <_UIRemoteViewControllerContaining, NSCoding> {

	long long _sourceType;
	id _image;
	CGRect _cropRect;
	NSArray* _mediaTypes;
	NSMutableDictionary* _properties;
	int _previousStatusBarStyle;
	BOOL _previousStatusBarHidden;
	Class _photoPickerRequestOptionsClass;
	/*^block*/id _photoPickerDisplayCompletion;
	/*^block*/id _photoPickerPreviewDisplayCompletion;
	BOOL _photoPickerDidStartDelayingPresentation;
	BOOL _photoPickerDidEndDelayingPresentation;
	BOOL _photoPickerIsPreheating;
	UIViewController* _photoPickerPreheatedViewController;
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned didRevertStatusBar : 1;
	}  _imagePickerFlags;
	unsigned long long _savingOptions;
	NSExtension* _photosExtension;

}

@property (nonatomic,retain) NSExtension * photosExtension;                                                                    //@synthesize photosExtension=_photosExtension - In the implementation block
@property (nonatomic,readonly) Class photoPickerRequestOptionsClass; 
@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; 
@property (assign,nonatomic) long long sourceType; 
@property (nonatomic,copy) NSArray * mediaTypes; 
@property (assign,nonatomic) BOOL allowsEditing; 
@property (assign,nonatomic) BOOL allowsImageEditing; 
@property (assign,nonatomic) long long imageExportPreset; 
@property (assign,nonatomic) double videoMaximumDuration; 
@property (assign,nonatomic) long long videoQuality; 
@property (nonatomic,copy) NSString * videoExportPreset; 
@property (assign,nonatomic) BOOL showsCameraControls; 
@property (nonatomic,retain) UIView * cameraOverlayView; 
@property (assign,nonatomic) CGAffineTransform cameraViewTransform; 
@property (assign,nonatomic) long long cameraCaptureMode; 
@property (assign,nonatomic) long long cameraDevice; 
@property (assign,nonatomic) long long cameraFlashMode; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSourceTypeAvailable:(long long)arg1 ;
+(BOOL)_reviewCapturedItems;
+(BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2 ;
+(BOOL)isCameraDeviceAvailable:(long long)arg1 ;
+(id)availableMediaTypesForSourceType:(long long)arg1 ;
+(id)availableCaptureModesForCameraDevice:(long long)arg1 ;
+(BOOL)isFlashAvailableForCameraDevice:(long long)arg1 ;
-(long long)sourceType;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_handleInstantiatedRemoteViewController:(id)arg1 request:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1 ;
-(BOOL)allowsEditing;
-(void)_handleMatchingExtension:(id)arg1 viewControllerClassName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_properties;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setupControllersForCurrentSourceTypeWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)_allowsIris;
-(void)setCameraCaptureMode:(long long)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)viewWillUnload;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(void)takePicture;
-(void)_initializeProperties;
-(NSArray *)mediaTypes;
-(void)_setStaticPrompt:(id)arg1 ;
-(BOOL)_sourceTypeIsCamera;
-(long long)imageExportPreset;
-(id)_cameraViewController;
-(id)_staticPrompt;
-(NSString *)videoExportPreset;
-(UIView *)cameraOverlayView;
-(BOOL)startVideoCapture;
-(long long)cameraCaptureMode;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSExtension *)photosExtension;
-(void)cancelPhotoPicker;
-(id)_valueForProperty:(id)arg1 ;
-(void)_autoDismiss;
-(BOOL)_showsPrompt;
-(long long)videoQuality;
-(long long)cameraDevice;
-(void)_setAllowsIris:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)_allowsImageEditing;
-(void)_imagePickerDidCancel;
-(void)_setProperties:(id)arg1 ;
-(void)_setAllowsImageEditing:(BOOL)arg1 ;
-(void)_updateCameraCaptureMode;
-(void)setImageExportPreset:(long long)arg1 ;
-(void)_setupControllersForCurrentMediaTypes;
-(void)setVideoExportPreset:(NSString *)arg1 ;
-(void)setCameraOverlayView:(UIView *)arg1 ;
-(BOOL)_didRevertStatusBar;
-(BOOL)_isCameraCaptureModeValid:(long long)arg1 ;
-(void)_removeAllChildren;
-(unsigned long long)_multipleSelectionLimit;
-(BOOL)_shouldDelayPresentation;
-(void)_handleTopViewControllerReadyForDisplay:(id)arg1 ;
-(void)setPhotosExtension:(NSExtension *)arg1 ;
-(BOOL)_onlyShowAutoloops;
-(void)_invalidatePhotoPickerServices;
-(long long)cameraFlashMode;
-(void)_setPhotoPickerDisplayCompletion:(/*^block*/id)arg1 ;
-(void)_setPhotoPickerPreviewDisplayCompletion:(/*^block*/id)arg1 ;
-(BOOL)allowsImageEditing;
-(BOOL)_showsFileSizePicker;
-(BOOL)showsCameraControls;
-(id)_propertiesForPhotoPickerExtension;
-(Class)photoPickerRequestOptionsClass;
-(void)_setTargetForPrompt:(id)arg1 ;
-(void)_handleEndingPhotoPickerPresentationDelay;
-(BOOL)_allowsMultipleSelection;
-(unsigned long long)_imagePickerSavingOptions;
-(double)videoMaximumDuration;
-(void)_handlePushViewController:(id)arg1 ;
-(CGAffineTransform)cameraViewTransform;
-(/*^block*/id)_photoPickerDisplayCompletion;
-(void)_setShowsPrompt:(BOOL)arg1 ;
-(/*^block*/id)_photoPickerPreviewDisplayCompletion;
-(void)_imagePickerDidCompleteWithInfo:(id)arg1 ;
-(void)_imagePickerDidCompleteWithInfoArray:(id)arg1 ;
-(void)_createInitialControllerWithCompletion:(/*^block*/id)arg1 ;
-(long long)_preferredModalPresentationStyle;
-(id)_initWithSourceImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(void)_setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)_setMultipleSelectionLimit:(unsigned long long)arg1 ;
-(BOOL)_requiresPickingConfirmation;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)_setRequiresPickingConfirmation:(BOOL)arg1 ;
-(void)_setShowsFileSizePicker:(BOOL)arg1 ;
-(void)_setOnlyShowAutoloops:(BOOL)arg1 ;
-(BOOL)_convertAutoloopsToGIF;
-(void)_setConvertAutoloopsToGIF:(BOOL)arg1 ;
-(void)setCameraFlashMode:(long long)arg1 ;
-(void)setAllowsImageEditing:(BOOL)arg1 ;
-(void)setShowsCameraControls:(BOOL)arg1 ;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(void)_setImagePickerSavingOptions:(unsigned long long)arg1 ;
-(void)stopVideoCapture;
-(void)setCameraViewTransform:(CGAffineTransform)arg1 ;
-(void)_viewControllerPresentationDidInitiate;
-(void)_testPerformPreviewOfFirstPhoto;
-(void)setPhotoPickerViewControllerTitle:(id)arg1 ;
-(void)didDisplayPhotoPickerSourceType:(id)arg1 ;
-(void)didDisplayPhotoPickerPreview;
-(void)didSelectMediaWithInfoDictionary:(id)arg1 ;
-(CGSize)_adjustedContentSizeForPopover:(CGSize)arg1 ;
-(void)_populateArchivedChildViewControllers:(id)arg1 ;
-(id)_targetForPrompt;
-(void)setVideoQuality:(long long)arg1 ;
-(void)setCameraDevice:(long long)arg1 ;
@end

