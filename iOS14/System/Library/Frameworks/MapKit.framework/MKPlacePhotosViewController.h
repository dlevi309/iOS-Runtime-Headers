/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MKPlacePhotoGalleryViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/MKPhotoGalleryTransitionAnimator.h>
#import <libobjc.A.dylib/MKAddPhotoBadgeViewDelegate.h>
#import <libobjc.A.dylib/MKMuninContainerViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/MKMuninViewProvider.h>

@protocol MKPlaceCardPhotosControllerDelegateMKPlaceCardActionControllerDelegate;
@class UIView, UIImageView, MKPhotoBigAttributionView, NSArray, UIScrollView, MKPassthroughView, MKMapItem, NSLayoutConstraint, MKPlaceAttributionCell, UIButton, MKMuninContainerView, _MKPlaceViewController, NSString, MKMuninView;

@interface MKPlacePhotosViewController : UIViewController <MKPlaceAttributionCellDelegate, UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MKAddPhotoBadgeViewDelegate, MKMuninContainerViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKMuninViewProvider> {

	UIView* _bottomHairline;
	UIImageView* _imageViewForTransition;
	MKPhotoBigAttributionView* _primaryAttributionView;
	MKPhotoBigAttributionView* _secondaryAttributionView;
	NSArray* _photoViews;
	UIScrollView* _photosContainerScrollView;
	UIView* _photosContainer;
	UIView* _photosSmallAttributionsView;
	MKPassthroughView* _attributionClippingview;
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
	UIButton* _previousPageButton;
	UIButton* _nextPageButton;
	MKMuninContainerView* _muninContainerView;
	UIScrollView* _parentScrollView;
	unsigned long long _initialAppearanceSignpostID;
	BOOL _isDisappearing;
	BOOL _showsBottomHairline;
	BOOL _hoverActive;
	_MKPlaceViewController* _owner;
	id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;

}

@property (nonatomic,readonly) BOOL isFirstParty; 
@property (nonatomic,readonly) BOOL isCompactMode; 
@property (nonatomic,readonly) BOOL shouldShowAddPhotoButtons; 
@property (nonatomic,readonly) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate; 
@property (nonatomic,readonly) unsigned long long numberOfBigAttributionViews; 
@property (assign,nonatomic) BOOL hoverActive;                                                                                                          //@synthesize hoverActive=_hoverActive - In the implementation block
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                                                                     //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate;              //@synthesize photosControllerDelegate=_photosControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsBottomHairline;                                                                                                  //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MKMuninView * muninView; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(_MKPlaceViewController *)owner;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)setPhotosControllerDelegate:(id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate>)arg1 ;
-(BOOL)isFirstParty;
-(void)openURL;
-(id)attributionString;
-(void)viewLayoutMarginsDidChange;
-(void)_scrollNext;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_loadPhotos;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(void)setContentVisibility:(long long)arg1 ;
-(BOOL)isSiriProcess;
-(void)handleHover:(id)arg1 ;
-(void)layoutImages;
-(void)infoCardThemeChanged;
-(BOOL)isSafariProcess;
-(BOOL)shouldShowAddPhotoButtons;
-(id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate>)photosControllerDelegate;
-(unsigned long long)numberOfBigAttributionViews;
-(BOOL)hoverActive;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)isParsecProcess;
-(void)_scrollPrevious;
-(void)_photoSelected:(id)arg1 ;
-(void)_createImageViews;
-(void)updateBottomHairlineVisibility;
-(void)_didBecomeActive:(id)arg1 ;
-(void)_willResignActive:(id)arg1 ;
-(void)_catchScrollNotification:(id)arg1 ;
-(void)_cancelLoadPhotos;
-(BOOL)showsBottomHairline;
-(void)updateAttributionCell;
-(id)formattedAttributionString;
-(void)addAttributionCell;
-(CGSize)sizeForIndex:(unsigned long long)arg1 ;
-(id)_firstPartyMorePhotosAttributionString;
-(void)_updatePhotoBackgroundColor:(id)arg1 ;
-(void)_applyCornerRadius;
-(CGSize)_photoActionSize;
-(CGSize)_photoSizeForIndex:(unsigned long long)arg1 ;
-(void)updateAttributionPositionWithOffset:(double)arg1 ;
-(void)_updateChevronVisibility;
-(BOOL)isCompactMode;
-(void)_updateAlphaAttribution;
-(void)_adjustScrollIndexByOffset:(long long)arg1 ;
-(void)setHoverActive:(BOOL)arg1 ;
-(void)_photoTappedAtIndex:(unsigned long long)arg1 ;
-(void)didTapSecondaryAttributionViewWithPresentingViewController:(id)arg1 ;
-(BOOL)dismissPhotoGalleryIfNecessary:(id)arg1 ;
-(void)_logUGCAction:(int)arg1 ;
-(void)didTapPrimaryAttributionViewWithPresentingViewController:(id)arg1 ;
-(void)_didTapAttributionViewWithPresentingViewController:(id)arg1 photoAttributionView:(id)arg2 ;
-(void)_setContentVisibility:(long long)arg1 ;
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1 ;
-(void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2 ;
-(void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1 ;
-(void)placePhotoGalleryAdditionalViewTapped:(id)arg1 ;
-(void)placePhotoGallery:(id)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2 ;
-(void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1 ;
-(void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1 ;
-(void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1 ;
-(void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2 ;
-(MKMuninView *)muninView;
-(void)placePhotoGallery:(id)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2 ;
-(void)placePhotoGalleryDidSelectAddPhoto:(id)arg1 ;
-(void)photoGalleryTransitionAnimatorDidFinishAnimation;
-(void)addPhotoBadgeViewTapped:(id)arg1 ;
-(void)muninContainerView:(id)arg1 didAddMuninView:(id)arg2 ;
-(void)setShowsBottomHairline:(BOOL)arg1 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

