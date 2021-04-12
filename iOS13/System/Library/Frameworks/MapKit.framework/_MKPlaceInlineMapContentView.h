/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKViewWithHairline, NSLayoutConstraint, UIView, UIImageView, _MKUILabel, MKMapItemView, UIImage;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {

	MKViewWithHairline* _hairlineView;
	NSLayoutConstraint* _topToTitleConstraint;
	NSLayoutConstraint* _titleToBottomConstraint;
	UIView* _mapView;
	UIImageView* _mapImageView;
	_MKUILabel* _titleLabel;
	MKMapItemView* _mapItemView;

}

@property (nonatomic,retain) UIImage * map; 
@property (nonatomic,retain) MKMapItemView * mapItemView;                                          //@synthesize mapItemView=_mapItemView - In the implementation block
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(UIImage *)map;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasTitle;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(void)setMap:(UIImage *)arg1 ;
-(double)mapViewHeight;
-(MKMapItemView *)mapItemView;
-(BOOL)isBottomHairlineHidden;
-(BOOL)useImageView;
-(double)titleHeight;
-(void)setMapItemView:(MKMapItemView *)arg1 ;
@end

