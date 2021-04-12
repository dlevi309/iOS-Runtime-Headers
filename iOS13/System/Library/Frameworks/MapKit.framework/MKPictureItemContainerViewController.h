/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MKPlacePhotosViewDelegate.h>

@protocol MKPictureItemContainerAnalyticsDelegate, GEOPictureItemContainer;
@class GEOMapItemAttribution, UIScrollView, UIStackView, NSString;

@interface MKPictureItemContainerViewController : UIViewController <UIScrollViewDelegate, MKPlacePhotosViewDelegate> {

	id<MKPictureItemContainerAnalyticsDelegate> _analyticsDelegate;
	id<GEOPictureItemContainer> _pictureItemContainer;
	GEOMapItemAttribution* _attribution;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	CGPoint _beginAnalyticsScrollingPoint;

}

@property (nonatomic,readonly) id<GEOPictureItemContainer> pictureItemContainer;                                //@synthesize pictureItemContainer=_pictureItemContainer - In the implementation block
@property (nonatomic,readonly) GEOMapItemAttribution * attribution;                                             //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                           //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) CGPoint beginAnalyticsScrollingPoint;                                              //@synthesize beginAnalyticsScrollingPoint=_beginAnalyticsScrollingPoint - In the implementation block
@property (assign,nonatomic,__weak) id<MKPictureItemContainerAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(id<GEOPictureItemContainer>)pictureItemContainer;
-(GEOMapItemAttribution *)attribution;
-(void)infoCardThemeChanged;
-(id<MKPictureItemContainerAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<MKPictureItemContainerAnalyticsDelegate>)arg1 ;
-(void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2 ;
-(id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1 ;
-(void)updateUIForTheme:(id)arg1 ;
-(void)didTapOnPictureItemView:(id)arg1 ;
-(void)downloadImageForVisiblePictureItemViews;
-(id)visiblePictureItemViews;
-(void)setBeginAnalyticsScrollingPoint:(CGPoint)arg1 ;
-(CGPoint)beginAnalyticsScrollingPoint;
-(id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2 ;
@end

