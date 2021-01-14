/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridViewController.h>
#import <libobjc.A.dylib/PUPhotoPickerFileSizeToolbarProviderDelegate.h>
#import <libobjc.A.dylib/PUPhotosGridViewSupplementalToolbarDataSource.h>
#import <libobjc.A.dylib/PUPhotoPickerServicesConsumer.h>
#import <libobjc.A.dylib/PUPhotoPickerSelectionHandler.h>
#import <libobjc.A.dylib/PUPhotoPickerTestSupportHandler.h>

@protocol PUPhotoPicker;
@class NSArray, PUSessionInfo, UIBarButtonItem, PUUIImagePickerControllerHelper, PUPhotoPickerFileSizeToolbarProvider, PUPhotoPickerResizeTaskDescriptor, NSString;

@interface PUUIMomentsGridViewController : PUPhotosGridViewController <PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler, PUPhotoPickerTestSupportHandler> {

	UIBarButtonItem* _imagePickerCancelButton;
	UIBarButtonItem* _imagePickerSelectionDoneButton;
	PUUIImagePickerControllerHelper* __imagePickerControllerHelper;
	PUPhotoPickerFileSizeToolbarProvider* _fileSizePickerToolbarProvider;
	BOOL _didDisappear;
	id<PUPhotoPicker> _photoPicker;
	NSArray* __imagePickerMediaTypes;
	double _lastKnownWidth;
	PUPhotoPickerResizeTaskDescriptor* _resizeTaskDescriptor;
	UIEdgeInsets _lastKnownSafeAreaInsets;

}

@property (readonly) PUUIImagePickerControllerHelper * _imagePickerControllerHelper; 
@property (setter=_setImagePickerMediaTypes:,nonatomic,copy) NSArray * _imagePickerMediaTypes;              //@synthesize _imagePickerMediaTypes=__imagePickerMediaTypes - In the implementation block
@property (nonatomic,readonly) BOOL referenceValuesDidChange; 
@property (assign,nonatomic) BOOL didDisappear;                                                             //@synthesize didDisappear=_didDisappear - In the implementation block
@property (assign,nonatomic) double lastKnownWidth;                                                         //@synthesize lastKnownWidth=_lastKnownWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets lastKnownSafeAreaInsets;                                          //@synthesize lastKnownSafeAreaInsets=_lastKnownSafeAreaInsets - In the implementation block
@property (nonatomic,retain) PUPhotoPickerResizeTaskDescriptor * resizeTaskDescriptor;                      //@synthesize resizeTaskDescriptor=_resizeTaskDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnyAssetSelected,nonatomic,readonly) BOOL anyAssetSelected; 
@property (nonatomic,readonly) NSArray * selectedAssets; 
@property (nonatomic,readonly) PUSessionInfo * sessionInfo; 
@property (getter=isAnyAssetDownloading,nonatomic,readonly) BOOL anyAssetDownloading; 
@property (assign,nonatomic,__weak) id<PUPhotoPicker> photoPicker;                                          //@synthesize photoPicker=_photoPicker - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(id)init;
-(BOOL)canDragIn;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canDragOut;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)photoPickerFileSizeToolbarProvider:(id)arg1 presentSizePickerViewController:(id)arg2 ;
-(id)newGridLayout;
-(void)photoPickerFileSizeToolbarProvider:(id)arg1 didSelectResizeTaskDescriptor:(id)arg2 ;
-(BOOL)isAnyAssetDownloading;
-(void)performPhotoPickerSelection;
-(id)initWithModalPresentationStyle:(long long)arg1 ;
-(BOOL)updateSpec;
-(double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2 ;
-(double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2 ;
-(void)_setTitle;
-(void)viewDidLoad;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(id<PUPhotoPicker>)photoPicker;
-(void)setPhotoPicker:(id<PUPhotoPicker>)arg1 ;
-(BOOL)shouldShowMenu;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)initiallyScrolledToBottom;
-(PUUIImagePickerControllerHelper *)_imagePickerControllerHelper;
-(void)_handleImagePickerCancel:(id)arg1 ;
-(NSArray *)_imagePickerMediaTypes;
-(BOOL)shouldPerformAutomaticContentOffsetAdjustment;
-(void)handleToggleSelectionOfItemAtIndexPath:(id)arg1 ;
-(void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2 ;
-(void)_scrollToBottomIfNeeded;
-(BOOL)referenceValuesDidChange;
-(void)_handleImagePickerSelectionDone:(id)arg1 ;
-(void)_handleImagePickerMultipleSelectionDone;
-(BOOL)didDisappear;
-(void)_handleImagePickerSingleSelectionDone;
-(void)setDidDisappear:(BOOL)arg1 ;
-(double)lastKnownWidth;
-(void)setLastKnownWidth:(double)arg1 ;
-(UIEdgeInsets)lastKnownSafeAreaInsets;
-(void)setLastKnownSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)loadView;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)performPhotoPickerPreviewOfFirstAsset;
-(void)setPhotoPickerMediaTypes:(id)arg1 ;
-(void)setResizeTaskDescriptor:(PUPhotoPickerResizeTaskDescriptor *)arg1 ;
-(PUPhotoPickerResizeTaskDescriptor *)resizeTaskDescriptor;
@end

