/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class UIColor, UIImage, UIView;


@protocol _MKBalloonCalloutViewConfiguring <NSObject>
@property (getter=_balloonCalloutStyle,nonatomic,readonly) long long balloonCalloutStyle; 
@property (getter=_balloonTintColor,nonatomic,readonly) UIColor * balloonTintColor; 
@property (getter=_balloonStrokeColor,nonatomic,readonly) UIColor * balloonStrokeColor; 
@property (getter=_balloonImage,nonatomic,readonly) UIImage * balloonImage; 
@property (getter=_balloonContentView,nonatomic,readonly) UIView * balloonContentView; 
@property (getter=_balloonInnerStrokeColor,nonatomic,readonly) UIColor * balloonInnerStrokeColor; 
@property (getter=_balloonImageTintColor,nonatomic,readonly) UIColor * balloonImageTintColor; 
@property (getter=_balloonCalloutShouldShowArrow,nonatomic,readonly) BOOL balloonCalloutShouldShowArrow; 
@property (getter=_balloonCalloutShouldCenterWhenOffscreen,nonatomic,readonly) BOOL balloonCalloutShouldCenterWhenOffscreen; 
@optional
-(BOOL)_balloonCalloutShouldCenterWhenOffscreen;
-(BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;
-(id)_balloonContentView;
-(BOOL)_balloonCalloutShouldShowArrow;
-(id)_balloonImageTintColor;
-(id)_balloonInnerStrokeColor;

@required
-(id)_balloonStrokeColor;
-(long long)_balloonCalloutStyle;
-(id)_balloonImage;
-(id)_balloonTintColor;

@end

