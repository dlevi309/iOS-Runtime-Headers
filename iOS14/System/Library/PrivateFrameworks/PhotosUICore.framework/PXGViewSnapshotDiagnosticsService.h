/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDiagnosticsService.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class PXGView, UIViewController, PXCuratedLibraryAssetsDataSourceManager, NSMutableArray, NSString;

@interface PXGViewSnapshotDiagnosticsService : PXDiagnosticsService <UIDocumentInteractionControllerDelegate> {

	PXGView* _gridView;
	UIViewController* _viewController;
	PXCuratedLibraryAssetsDataSourceManager* _dataSourceManager;
	NSMutableArray* _images;
	NSMutableArray* _imageURLs;
	CGRect _lastScrollViewBounds;

}

@property (nonatomic,readonly) PXGView * gridView;                                                       //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                        //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * images;                                                    //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageURLs;                                                 //@synthesize imageURLs=_imageURLs - In the implementation block
@property (assign,nonatomic) CGRect lastScrollViewBounds;                                                //@synthesize lastScrollViewBounds=_lastScrollViewBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_writeImageToDisk:(id)arg1 suffix:(id)arg2 ;
+(id)_mergeImagesFromArray:(id)arg1 ;
+(id)_createPDFWithImagesAtURLs:(id)arg1 ;
+(id)_cropRect:(CGRect)arg1 fromImage:(id)arg2 ;
+(id)_snapshotImageFromView:(id)arg1 ;
+(id)_imageAtURL:(id)arg1 ;
-(PXGView *)gridView;
-(BOOL)canPerformAction;
-(void)performAction;
-(void)setImages:(NSMutableArray *)arg1 ;
-(void)_captureNextPage;
-(void)_stopCapture;
-(void)_mergeAllImagesAndWriteToDisk;
-(CGRect)lastScrollViewBounds;
-(void)setLastScrollViewBounds:(CGRect)arg1 ;
-(PXCuratedLibraryAssetsDataSourceManager *)dataSourceManager;
-(UIViewController *)viewController;
-(NSMutableArray *)imageURLs;
-(NSMutableArray *)images;
-(void)setImageURLs:(NSMutableArray *)arg1 ;
-(id)title;
-(id)initWithItemProviders:(id)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
@end

