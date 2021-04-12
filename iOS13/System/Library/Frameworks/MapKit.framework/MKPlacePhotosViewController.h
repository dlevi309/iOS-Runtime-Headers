/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MKPlacePhotoGalleryViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/MKPhotoGalleryTransitionAnimator.h>
#import <libobjc.A.dylib/MKMuninContainerViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/MKMuninViewProvider.h>

@protocol MKPlaceCardPhotosControllerDelegateMKPlaceCardActionControllerDelegate;
@class UIView, UIImageView, MKPhotoBigAttributionView, NSArray, UIScrollView, MKPhotoSmallAttributionView, MKMapItem, NSLayoutConstraint, MKPlaceAttributionCell, MKMuninContainerView, _MKPlaceViewController, NSString, MKMuninView;

@interface MKPlacePhotosViewController : UIViewController <MKPlaceAttributionCellDelegate, UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MKMuninContainerViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKMuninViewProvider> {

	UIView* _bottomHairline;
	UIImageView* _imageViewForTransition;
	MKPhotoBigAttributionView* _attributionView;
	NSArray* _photoViews;
	UIScrollView* _photosContainerScrollView;
	UIView* _photosContainer;
	MKPhotoSmallAttributionView* _photosSmallAttributionsView;
	double _lastPhotoScrollOffset;
	BOOL _photoScrollViewScrollingLeft;
	BOOL _photoScrollViewScrollingRight;
	BOOL _canUseFullscreenViewer;
	BOOL _photoLoaded;
	BOOL _loadAppImageCanceledOrFailed;
	BOOL _isRTL;
	unsigned long long _photosCount;
	UIView* _externalView;
	MKMapItem* _mapItem;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSArray* _photos;
	unsigned long long _mode;
	unsigned long long _originalMode;
	unsigned long long _options;
	MKPlaceAttributionCell* _attributionCell;
	MKMuninContainerView* _muninContainerView;
	UIScrollView* _parentScrollView;
	BOOL _showsBottomHairline;
	_MKPlaceViewController* _owner;
	id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;

}

@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                                                                     //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate;              //@synthesize photosControllerDelegate=_photosControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsBottomHairline;                                                                                                  //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MKMuninView * muninView; 
-(void)dealloc;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)infoCardThemeChanged;
-(void)setShowsBottomHairline:(BOOL)arg1 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(MKMuninView *)muninView;
-(id)attributionString;
-(void)setContentVisibility:(long long)arg1 ;
-(id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)setPhotosControllerDelegate:(id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate>)arg1 ;
-(void)openURL;
-(BOOL)isSafariProcess;
-(BOOL)isSiriProcess;
-(BOOL)isParsecProcess;
-(void)_photoSelected:(id)arg1 ;
-(void)_createImageViews;
-(void)updateBottomHairlineVisibility;
-(void)_didBecomeActive:(id)arg1 ;
-(void)_willResignActive:(id)arg1 ;
-(void)_catchScrollNotification:(id)arg1 ;
-(void)_loadPhotos;
-(void)_cancelLoadPhotos;
-(BOOL)showsBottomHairline;
-(void)updateAttributionCell;
-(id)formattedAttributionString;
-(id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate>)photosControllerDelegate;
-(void)addAttributionCell;
-(void)_updatePhotoBackgroundColor:(id)arg1 ;
-(void)layoutImages;
-(void)_applyCornerRadius;
-(CGSize)sizeForIndex:(unsigned long long)arg1 ;
-(void)updateAttributionPositionWithOffset:(double)arg1 ;
-(void)_updateAlphaAttribution;
-(void)_photoTappedAtIndex:(unsigned long long)arg1 ;
-(void)didTapAttributionViewWithPresentingViewController:(id)arg1 ;
-(BOOL)dismissPhotoGalleryIfNecessary:(id)arg1 ;
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1 ;
-(void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2 ;
-(void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1 ;
-(void)placePhotoGalleryAdditionalViewTapped:(id)arg1 ;
-(void)placePhotoGallery:(id)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2 ;
-(void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1 ;
-(void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1 ;
-(void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1 ;
-(void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2 ;
-(void)photoGalleryTransitionAnimatorDidFinishAnimation;
-(void)muninContainerView:(id)arg1 didAddMuninView:(id)arg2 ;
@end

