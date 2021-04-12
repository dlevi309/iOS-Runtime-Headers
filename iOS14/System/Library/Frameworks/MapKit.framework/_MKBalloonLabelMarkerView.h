/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKLabelMarkerView.h>
#import <libobjc.A.dylib/_MKBalloonCalloutViewConfiguring.h>

@class UIColor, UIImage, UIView, NSString;

@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView <_MKBalloonCalloutViewConfiguring> {

	UIView* _anchorDotView;
	BOOL _needsToResolveBalloonAttributes;
	long long _balloonCalloutStyle;
	BOOL _balloonCalloutShouldOriginateFromSmallSize;
	UIColor* _balloonFillColor;
	UIColor* _balloonStrokeColor;
	UIImage* _balloonImage;
	UIView* _balloonContentView;
	double _smallBalloonScaleFactor;

}

@property (getter=_balloonCalloutStyle,nonatomic,readonly) long long balloonCalloutStyle; 
@property (getter=_balloonTintColor,nonatomic,readonly) UIColor * balloonTintColor; 
@property (getter=_balloonStrokeColor,nonatomic,readonly) UIColor * balloonStrokeColor; 
@property (getter=_balloonImage,nonatomic,readonly) UIImage * balloonImage; 
@property (getter=_balloonContentView,nonatomic,readonly) UIView * balloonContentView; 
@property (getter=_balloonInnerStrokeColor,nonatomic,readonly) UIColor * balloonInnerStrokeColor; 
@property (getter=_balloonImageTintColor,nonatomic,readonly) UIColor * balloonImageTintColor; 
@property (getter=_balloonCalloutShouldShowArrow,nonatomic,readonly) BOOL balloonCalloutShouldShowArrow; 
@property (getter=_balloonCalloutShouldCenterWhenOffscreen,nonatomic,readonly) BOOL balloonCalloutShouldCenterWhenOffscreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(id)_balloonStrokeColor;
-(BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1 ;
-(id)_balloonContentView;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(long long)_balloonCalloutStyle;
-(id)_balloonImage;
-(id)_balloonInnerStrokeColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)shouldShowCallout;
-(void)_addAnchorDotViewIfNeeded;
-(void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2 ;
-(void)_resolveBalloonAttributesIfNecessary;
-(id)_balloonTintColor;
@end

