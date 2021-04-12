/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class UIColor, UIImage;

@interface _MKMarkerStyle : NSObject {

	UIColor* _markerColor;
	double _shadowAlpha;
	UIColor* _strokeColor;
	double _strokeWidth;
	UIColor* _glyphColor;
	UIImage* _glyphImage;

}

@property (nonatomic,readonly) UIColor * markerColor;              //@synthesize markerColor=_markerColor - In the implementation block
@property (nonatomic,readonly) double shadowAlpha;                 //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,readonly) double strokeWidth;                 //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,readonly) UIColor * glyphColor;               //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,readonly) UIImage * glyphImage;               //@synthesize glyphImage=_glyphImage - In the implementation block
+(id)markerStyleForTraitCollection:(id)arg1 state:(long long)arg2 styleAttributes:(id)arg3 coordinate:(CLLocationCoordinate2D)arg4 ;
-(double)shadowAlpha;
-(UIColor *)strokeColor;
-(double)strokeWidth;
-(UIColor *)glyphColor;
-(UIColor *)markerColor;
-(UIImage *)glyphImage;
@end

