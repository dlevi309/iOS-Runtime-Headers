/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@optional
-(BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;
-(id)_balloonContentView;
-(id)_balloonInnerStrokeColor;

@required
-(long long)_balloonCalloutStyle;
-(id)_balloonTintColor;
-(id)_balloonStrokeColor;
-(id)_balloonImage;

@end

