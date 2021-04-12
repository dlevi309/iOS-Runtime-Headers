/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/ICDocCamExtractedDocumentControllerDelegate.h>
#import <libobjc.A.dylib/ICDocCamViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol DCDocumentEditorViewControllerDelegate;
@class ICDocCamExtractedDocumentViewController, VNDocumentCameraScan, ICDocCamDocumentInfoCollection, ICDocCamImageCache, NSIndexPath, UIImage, UIView, NSString;

@interface DCDocumentEditorViewController : UINavigationController <ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {

	BOOL _useCustomRecropTransition;
	ICDocCamExtractedDocumentViewController* _extractedDocumentController;
	id<DCDocumentEditorViewControllerDelegate> _docCamDelegate;
	VNDocumentCameraScan* _scannedDocument;
	ICDocCamDocumentInfoCollection* _docInfoCollection;
	ICDocCamImageCache* _imageCache;
	long long _orientationForRecrop;
	NSIndexPath* _indexPathForRecrop;
	UIImage* _filteredImageForRecrop;
	UIImage* _unfilteredImageForRecrop;
	UIView* _sourceViewForZoomTransition;

}

@property (nonatomic,retain) ICDocCamExtractedDocumentViewController * extractedDocumentController;              //@synthesize extractedDocumentController=_extractedDocumentController - In the implementation block
@property (assign,nonatomic,__weak) id<DCDocumentEditorViewControllerDelegate> docCamDelegate;                   //@synthesize docCamDelegate=_docCamDelegate - In the implementation block
@property (nonatomic,retain) VNDocumentCameraScan * scannedDocument;                                             //@synthesize scannedDocument=_scannedDocument - In the implementation block
@property (nonatomic,retain) ICDocCamDocumentInfoCollection * docInfoCollection;                                 //@synthesize docInfoCollection=_docInfoCollection - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                                                    //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) BOOL useCustomRecropTransition;                                                     //@synthesize useCustomRecropTransition=_useCustomRecropTransition - In the implementation block
@property (assign,nonatomic) long long orientationForRecrop;                                                     //@synthesize orientationForRecrop=_orientationForRecrop - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathForRecrop;                                                   //@synthesize indexPathForRecrop=_indexPathForRecrop - In the implementation block
@property (nonatomic,retain) UIImage * filteredImageForRecrop;                                                   //@synthesize filteredImageForRecrop=_filteredImageForRecrop - In the implementation block
@property (nonatomic,retain) UIImage * unfilteredImageForRecrop;                                                 //@synthesize unfilteredImageForRecrop=_unfilteredImageForRecrop - In the implementation block
@property (nonatomic,retain) UIView * sourceViewForZoomTransition;                                               //@synthesize sourceViewForZoomTransition=_sourceViewForZoomTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAvailable;
+(id)activityTypeOrder;
+(id)docInfoCollectionFromScannedDocument:(id)arg1 imageCache:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(ICDocCamImageCache *)imageCache;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_autoDismiss;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(id)extractedDocumentControllerTitle;
-(void)extractedDocumentControllerDidTapAddImage;
-(void)extractedDocumentController:(id)arg1 didTapRecrop:(id)arg2 index:(long long)arg3 ;
-(void)extractedDocumentControllerDidTapRetake:(unsigned long long)arg1 ;
-(void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1 scanDataDelegate:(id)arg2 ;
-(void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1 ;
-(void)extractedDocumentController:(id)arg1 shareDocument:(id)arg2 sender:(id)arg3 ;
-(void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg1 ;
-(id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg1 ;
-(void)extractedDocumentControllerDidChangeTitle:(id)arg1 ;
-(void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)arg1 sourceRect:(CGRect)arg2 sourceView:(id)arg3 ;
-(void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)arg1 ;
-(id<DCDocumentEditorViewControllerDelegate>)docCamDelegate;
-(ICDocCamDocumentInfoCollection *)docInfoCollection;
-(VNDocumentCameraScan *)scannedDocument;
-(void)setIndexPathForRecrop:(NSIndexPath *)arg1 ;
-(void)setFilteredImageForRecrop:(UIImage *)arg1 ;
-(void)setUnfilteredImageForRecrop:(UIImage *)arg1 ;
-(void)setOrientationForRecrop:(long long)arg1 ;
-(void)setUseCustomRecropTransition:(BOOL)arg1 ;
-(BOOL)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2 ;
-(ICDocCamExtractedDocumentViewController *)extractedDocumentController;
-(void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4 closeViewController:(BOOL)arg5 ;
-(BOOL)useCustomRecropTransition;
-(UIImage *)filteredImageForRecrop;
-(UIImage *)unfilteredImageForRecrop;
-(long long)orientationForRecrop;
-(NSIndexPath *)indexPathForRecrop;
-(void)documentCameraControllerDidCancel:(id)arg1 ;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)scanDataDelegateWithIdentifier:(id)arg1 ;
-(void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4 ;
-(id)documentCameraControllerImageCache;
-(id)initWithDelegate:(id)arg1 scannedDocument:(id)arg2 ;
-(void)setExtractedDocumentController:(ICDocCamExtractedDocumentViewController *)arg1 ;
-(void)setDocCamDelegate:(id<DCDocumentEditorViewControllerDelegate>)arg1 ;
-(void)setScannedDocument:(VNDocumentCameraScan *)arg1 ;
-(void)setDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg1 ;
-(UIView *)sourceViewForZoomTransition;
-(void)setSourceViewForZoomTransition:(UIView *)arg1 ;
@end
