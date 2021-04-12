/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKResizingLayer.h>

@class CALayer, UIColor;

@interface _MKCalloutLayer : _MKResizingLayer {

	CGImageRef _contentImage;
	CALayer* _leftLayer;
	CALayer* _rightLayer;
	SCD_Struct_MK17 _metrics;
	long long _arrowPosition;
	double _arrowOffset;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (assign,nonatomic) long long arrowPosition;              //@synthesize arrowPosition=_arrowPosition - In the implementation block
@property (assign,nonatomic) double arrowOffset;                   //@synthesize arrowOffset=_arrowOffset - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                  //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK20 metrics;              //@synthesize metrics=_metrics - In the implementation block
-(void)setMetrics:(SCD_Struct_MK20)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(SCD_Struct_MK20)metrics;
-(void)layoutSublayers;
-(id)init;
-(UIColor *)fillColor;
-(void)setContentsScale:(double)arg1 ;
-(CGSize)_contentSize;
-(void)setArrowPosition:(long long)arg1 ;
-(double)arrowOffset;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(long long)arrowPosition;
-(CGImageRef)_newContentImage;
-(void)setArrowOffset:(double)arg1 ;
-(void)dealloc;
@end

