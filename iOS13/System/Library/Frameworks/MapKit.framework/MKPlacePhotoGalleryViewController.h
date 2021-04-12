/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKPlacePhotoGalleryViewControllerDelegate;
@class NSArray, MKMapItem, UIView, UIScrollView, NSNumber, MKPlacePhotoGalleryAttributionView, NSMutableArray, UIBarButtonItem, NSString;

@interface MKPlacePhotoGalleryViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _shouldFinishAnimation;
	id<MKPlacePhotoGalleryViewControllerDelegate> _delegate;
	NSArray* _photos;
	MKMapItem* _mapItem;
	NSArray* _photoViews;
	UIView* _additionalView;
	UIScrollView* _scrollView;
	long long _panGestureStartingDirection;
	UIView* _gestureTrackedView;
	NSNumber* _originalIndex;
	MKPlacePhotoGalleryAttributionView* _attributionView;
	NSMutableArray* _indexesOfDownloadedImages;
	NSMutableArray* _downloadingImagesURLs;
	double _lastScrollViewOffsetBeforeScrolling;
	UIBarButtonItem* _openNavigationBarButton;
	CGPoint _imageViewCenterPoint;

}

@property (nonatomic,copy) NSArray * photos;                                                             //@synthesize photos=_photos - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                        //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,copy) NSArray * photoViews;                                                         //@synthesize photoViews=_photoViews - In the implementation block
@property (nonatomic,retain) UIView * additionalView;                                                    //@synthesize additionalView=_additionalView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGPoint imageViewCenterPoint;                                               //@synthesize imageViewCenterPoint=_imageViewCenterPoint - In the implementation block
@property (assign,nonatomic) long long panGestureStartingDirection;                                      //@synthesize panGestureStartingDirection=_panGestureStartingDirection - In the implementation block
@property (nonatomic,retain) UIView * gestureTrackedView;                                                //@synthesize gestureTrackedView=_gestureTrackedView - In the implementation block
@property (assign,nonatomic) BOOL shouldFinishAnimation;                                                 //@synthesize shouldFinishAnimation=_shouldFinishAnimation - In the implementation block
@property (nonatomic,retain) NSNumber * originalIndex;                                                   //@synthesize originalIndex=_originalIndex - In the implementation block
@property (nonatomic,retain) MKPlacePhotoGalleryAttributionView * attributionView;                       //@synthesize attributionView=_attributionView - In the implementation block
@property (nonatomic,retain) NSMutableArray * indexesOfDownloadedImages;                                 //@synthesize indexesOfDownloadedImages=_indexesOfDownloadedImages - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadingImagesURLs;                                     //@synthesize downloadingImagesURLs=_downloadingImagesURLs - In the implementation block
@property (assign,nonatomic) double lastScrollViewOffsetBeforeScrolling;                                 //@synthesize lastScrollViewOffsetBeforeScrolling=_lastScrollViewOffsetBeforeScrolling - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * openNavigationBarButton;                                  //@synthesize openNavigationBarButton=_openNavigationBarButton - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlacePhotoGalleryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MKPlacePhotoGalleryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKPlacePhotoGalleryViewControllerDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dismiss;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)didTapDone;
-(void)zoomToPoint:(id)arg1 ;
-(id)initWithPhotos:(id)arg1 additionalView:(id)arg2 scrollToIndex:(unsigned long long)arg3 mapItem:(id)arg4 delegate:(id)arg5 ;
-(unsigned long long)indexOfVisibleView;
-(id)photoViewForTransition;
-(CGPoint)scrollViewContentOffset;
-(void)setupViewsWithAdditionalView:(id)arg1 ;
-(void)didTapOpen;
-(void)setOpenNavigationBarButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)openNavigationBarButton;
-(void)toggleBackground:(id)arg1 ;
-(void)cancelDownloadingImages;
-(void)setupPhotoViewsWithStackView:(id)arg1 ;
-(void)setupAdditionalView:(id)arg1 withStackView:(id)arg2 ;
-(void)setupAttributionView;
-(void)handlePanGesture:(id)arg1 ;
-(void)didTapOnAdditionalView;
-(void)didTapOnAttributionView;
-(void)updateViewsWithPhotoAtIndex:(unsigned long long)arg1 ;
-(id)attributionLogoUsingDarkAppearance:(BOOL)arg1 ;
-(NSNumber *)originalIndex;
-(void)setOriginalIndex:(NSNumber *)arg1 ;
-(void)downloadImageForVisibleViews;
-(NSMutableArray *)indexesOfDownloadedImages;
-(NSMutableArray *)downloadingImagesURLs;
-(NSArray *)photoViews;
-(UIView *)additionalView;
-(UIView *)gestureTrackedView;
-(void)setGestureTrackedView:(UIView *)arg1 ;
-(long long)panGestureStartingDirection;
-(void)setPanGestureStartingDirection:(long long)arg1 ;
-(void)setShouldFinishAnimation:(BOOL)arg1 ;
-(void)setImageViewCenterPoint:(CGPoint)arg1 ;
-(unsigned long long)indexOfView:(id)arg1 ;
-(CGPoint)imageViewCenterPoint;
-(MKPlacePhotoGalleryAttributionView *)attributionView;
-(BOOL)shouldFinishAnimation;
-(void)setUIStyleWithNavigationBarHidden:(BOOL)arg1 ;
-(unsigned long long)viewsCount;
-(double)lastScrollViewOffsetBeforeScrolling;
-(void)setLastScrollViewOffsetBeforeScrolling:(double)arg1 ;
-(void)resetPhotosZoomLevel;
-(void)setPhotoViews:(NSArray *)arg1 ;
-(void)setAdditionalView:(UIView *)arg1 ;
-(void)setAttributionView:(MKPlacePhotoGalleryAttributionView *)arg1 ;
-(void)setIndexesOfDownloadedImages:(NSMutableArray *)arg1 ;
-(void)setDownloadingImagesURLs:(NSMutableArray *)arg1 ;
@end

