/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)titleHeight;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMap:(UIImage *)arg1 ;
-(BOOL)hasTitle;
-(double)mapViewHeight;
-(MKMapItemView *)mapItemView;
-(BOOL)isBottomHairlineHidden;
-(BOOL)useImageView;
-(void)setMapItemView:(MKMapItemView *)arg1 ;
-(UIImage *)map;
-(void)infoCardThemeChanged;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(void)_contentSizeDidChange;
@end

