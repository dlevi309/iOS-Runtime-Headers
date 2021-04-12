/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKPlacePhotosViewDelegate;
@class NSArray, NSMutableArray, UIScrollView, UILabel, UIActivityIndicatorView, UINavigationBar, UIView, UIVisualEffectView, UINavigationItem, NSString;

@interface MKPlacePhotosView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	NSArray* _photos;
	NSMutableArray* _photoViews;
	UIScrollView* _scrollView;
	UILabel* _pageInfoLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSMutableArray* _singlePhotoArray;
	UINavigationBar* _navBar;
	UIView* _bottomView;
	UIVisualEffectView* _bottomEffectView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _licenseLabel;
	int _actualPage;
	UINavigationItem* _navItem;
	unsigned long long _textDisplayedForPage;
	NSArray* _fontConstraints;
	id<MKPlacePhotosViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long currentPage; 
@property (assign,nonatomic,__weak) id<MKPlacePhotosViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MKPlacePhotosViewDelegate>)delegate;
-(void)setDelegate:(id<MKPlacePhotosViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(void)dismiss;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(unsigned long long)currentPage;
-(void)willEnterForeground:(id)arg1 ;
-(void)contentSizeDidChange;
-(void)stopActivityIndicator;
-(void)toggleNavBar;
-(double)xPositionForPhotoAtIndex:(unsigned long long)arg1 numberOfPhotos:(unsigned long long)arg2 pageWidth:(double)arg3 ;
-(id)headerTitleForPage:(unsigned long long)arg1 ;
-(void)_backTapped;
-(void)setNavBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)photoAttributionTapped;
-(void)memoryWarning:(id)arg1 ;
-(void)updateTextForPage:(unsigned long long)arg1 ;
-(void)updateDetails;
-(unsigned long long)indexForPhotoAtXOffset:(double)arg1 pageWidth:(double)arg2 numberOfPhotos:(unsigned long long)arg3 ;
-(void)hideToView:(id)arg1 ;
-(void)startActivityIndicator;
-(id)initWithPhotos:(id)arg1 ;
-(void)showPhotoAt:(unsigned long long)arg1 ;
@end

