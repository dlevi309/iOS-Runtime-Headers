/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKActivityObserving.h>

@protocol MKAddPhotoBadgeViewDelegate;
@class UILabel, UIImageView, UITapGestureRecognizer, UIActivityIndicatorView, UIVisualEffectView, NSString;

@interface MKAddPhotoBadgeView : UIView <MKActivityObserving> {

	UILabel* _label;
	UIImageView* _imageView;
	CGSize _size;
	UITapGestureRecognizer* _gestureRecognizer;
	UIActivityIndicatorView* _spinner;
	UIVisualEffectView* _backgroundView;
	id<MKAddPhotoBadgeViewDelegate> _delegate;

}

@property (nonatomic,readonly) double margin; 
@property (nonatomic,readonly) double fullHeight; 
@property (assign,nonatomic,__weak) id<MKAddPhotoBadgeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double compressedWidth; 
@property (nonatomic,readonly) double fullWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)margin;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKAddPhotoBadgeViewDelegate>)delegate;
-(void)_setupSubviews;
-(void)setDelegate:(id<MKAddPhotoBadgeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_setupGestureRecognizer;
-(double)fullHeight;
-(void)_badgeViewTapped;
-(double)fullWidth;
-(double)compressedWidth;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg1 ;
@end

