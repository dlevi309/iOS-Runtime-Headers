/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MKPlacePhotoGalleryViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/MKPhotoGalleryTransitionAnimator.h>

@protocol MKPictureItemContainerAnalyticsDelegate, MKPlaceViewControllerPresentingProtocol, MKPictureItemContainerDelegate, GEOPictureItemContainer;
@class GEOMapItemAttribution, UIScrollView, UIStackView, UIImageView, UIButton, NSString;

@interface MKPictureItemContainerViewController : UIViewController <UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator> {

	BOOL _hoverActive;
	id<MKPictureItemContainerAnalyticsDelegate> _analyticsDelegate;
	id<MKPlaceViewControllerPresentingProtocol> _presentingProtocol;
	id<MKPictureItemContainerDelegate> _delegate;
	id<GEOPictureItemContainer> _pictureItemContainer;
	GEOMapItemAttribution* _attribution;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	UIImageView* _imageViewForTransition;
	UIButton* _previousPageButton;
	UIButton* _nextPageButton;
	CGPoint _beginAnalyticsScrollingPoint;

}

@property (nonatomic,readonly) id<GEOPictureItemContainer> pictureItemContainer;                                 //@synthesize pictureItemContainer=_pictureItemContainer - In the implementation block
@property (nonatomic,readonly) GEOMapItemAttribution * attribution;                                              //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                          //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                            //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) CGPoint beginAnalyticsScrollingPoint;                                               //@synthesize beginAnalyticsScrollingPoint=_beginAnalyticsScrollingPoint - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewForTransition;                                               //@synthesize imageViewForTransition=_imageViewForTransition - In the implementation block
@property (nonatomic,retain) UIButton * previousPageButton;                                                      //@synthesize previousPageButton=_previousPageButton - In the implementation block
@property (nonatomic,retain) UIButton * nextPageButton;                                                          //@synthesize nextPageButton=_nextPageButton - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL hoverActive;                                                   //@synthesize hoverActive=_hoverActive - In the implementation block
@property (assign,nonatomic,__weak) id<MKPictureItemContainerAnalyticsDelegate> analyticsDelegate;               //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceViewControllerPresentingProtocol> presentingProtocol;              //@synthesize presentingProtocol=_presentingProtocol - In the implementation block
@property (assign,nonatomic,__weak) id<MKPictureItemContainerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id<MKPictureItemContainerDelegate>)delegate;
-(id<GEOPictureItemContainer>)pictureItemContainer;
-(BOOL)isActive;
-(UIStackView *)stackView;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<MKPictureItemContainerDelegate>)arg1 ;
-(GEOMapItemAttribution *)attribution;
-(BOOL)_canShowWhileLocked;
-(void)scrollToNext;
-(UIButton *)nextPageButton;
-(void)didTapOnPictureItemView:(id)arg1 ;
-(void)applyCornerRadius;
-(void)addControlButtons;
-(void)downloadImageForVisiblePictureItemViews;
-(void)updateChevronVisibility;
-(id)visiblePictureItemViews;
-(void)setImageViewForTransition:(UIImageView *)arg1 ;
-(void)scrollToPrevious;
-(void)viewDidLoad;
-(void)adjustScrollIndexByOffset:(long long)arg1 ;
-(void)setBeginAnalyticsScrollingPoint:(CGPoint)arg1 ;
-(CGPoint)beginAnalyticsScrollingPoint;
-(id<MKPlaceViewControllerPresentingProtocol>)presentingProtocol;
-(UIImageView *)imageViewForTransition;
-(id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setPresentingProtocol:(id<MKPlaceViewControllerPresentingProtocol>)arg1 ;
-(UIButton *)previousPageButton;
-(void)setPreviousPageButton:(UIButton *)arg1 ;
-(void)setNextPageButton:(UIButton *)arg1 ;
-(void)infoCardThemeChanged;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)updateUIForTheme:(id)arg1 ;
-(void)setHoverActive:(BOOL)arg1 ;
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1 ;
-(void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2 ;
-(void)placePhotoGalleryDidFinishDismissing:(id)arg1 ;
-(void)photoGalleryTransitionAnimatorDidFinishAnimation;
-(id<MKPictureItemContainerAnalyticsDelegate>)analyticsDelegate;
-(UIScrollView *)scrollView;
-(void)setAnalyticsDelegate:(id<MKPictureItemContainerAnalyticsDelegate>)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setStackView:(UIStackView *)arg1 ;
@end

