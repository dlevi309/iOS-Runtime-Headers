/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKPuckAnnotationView.h>
#import <libobjc.A.dylib/_MKBalloonCalloutViewConfiguring.h>
#import <libobjc.A.dylib/_MKKVOProxyDelegate.h>

@class _MKUserLocationViewImageProvider, UIImage, UIColor, _MKKVOProxy, UIView, NSString;

@interface _MKUserLocationView : _MKPuckAnnotationView <_MKBalloonCalloutViewConfiguring, _MKKVOProxyDelegate> {

	double _externalMaxAccuracyRadius;
	BOOL _radiusBasedAccuracyOpacity;
	BOOL _hasExplicitCalloutStyle;
	BOOL _showingPreciseAuthorizedLocation;
	_MKUserLocationViewImageProvider* _imageProvider;
	UIImage* _balloonImage;
	UIColor* _balloonImageTintColor;
	_MKKVOProxy* _kvoProxy;

}

@property (assign,setter=_setShowingPreciseAuthorizedLocation:,getter=_showingPreciseAuthorizedLocation,nonatomic) BOOL showingPreciseAuthorizedLocation;              //@synthesize showingPreciseAuthorizedLocation=_showingPreciseAuthorizedLocation - In the implementation block
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
-(BOOL)_showingPreciseAuthorizedLocation;
-(void)_updateLegacyConfiguration;
-(void)_setCalloutStyle:(long long)arg1 ;
-(void)_setBalloonImage:(id)arg1 ;
-(id)_balloonStrokeColor;
-(void)setAnnotation:(id)arg1 ;
-(BOOL)_balloonCalloutShouldCenterWhenOffscreen;
-(void)_stopObservingAnnotation;
-(BOOL)_allowedToShowCallout;
-(void)setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(long long)_balloonCalloutStyle;
-(void)_setBalloonImageTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)_balloonImageTintColor;
-(void)setDetailCalloutAccessoryView:(id)arg1 ;
-(void)_updateMaxRadiusToShowAccuracyRing;
-(void)_setShowingPreciseAuthorizedLocation:(BOOL)arg1 ;
-(unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)arg1 ;
-(void)setLeftCalloutAccessoryView:(id)arg1 ;
-(void)_updateCalloutStyle;
-(id)_balloonImage;
-(id)_balloonInnerStrokeColor;
-(void)_dismissCallout:(BOOL)arg1 ;
-(void)_showCallout:(BOOL)arg1 ;
-(BOOL)shouldShowCallout;
-(void)setRightCalloutAccessoryView:(id)arg1 ;
-(id)_balloonTintColor;
-(void)dealloc;
-(void)_updateCalloutOffset;
-(void)_startObservingAnnotation;
-(void)_mkObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

