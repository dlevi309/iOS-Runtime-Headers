/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKOverlay, OS_dispatch_queue;
#import <MapKit/MapKit-Structs.h>
@class NSObject, MKMapView;

@interface MKOverlayRenderer : NSObject {

	id<MKOverlay> _overlay;
	SCD_Struct_MK6 _boundingMapRect;
	id _renderer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	MKMapView* _mapView;
	double _contentScaleFactor;
	double _alpha;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
@property (assign) double alpha;                                   //@synthesize alpha=_alpha - In the implementation block
@property (readonly) double contentScaleFactor; 
-(void)_setMapView:(id)arg1 ;
-(id)init;
-(id)_mapView;
-(double)alpha;
-(void)setNeedsDisplay;
-(void)setContentScaleFactor:(double)arg1 ;
-(id)_renderer;
-(double)contentScaleFactor;
-(id<MKOverlay>)overlay;
-(CGSize)_originMapPoint;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)initWithOverlay:(id)arg1 ;
-(CGPoint)pointForMapPoint:(CGSize)arg1 ;
-(void)set_boundingMapRect:(SCD_Struct_MK6)arg1 ;
-(id)_mk_overlayLayer;
-(id)_mk_overlayView;
-(void)set_renderer:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(SCD_Struct_MK6)mapRectForRect:(CGRect)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK6)arg1 ;
-(SCD_Struct_MK6)_boundingMapRect;
-(BOOL)_mayExtendOutsideBounds;
-(void)_forEachMapRectForKey:(const SCD_Struct_MK25*)arg1 withContext:(CGContextRef)arg2 performBlock:(/*^block*/id)arg3 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK6)arg1 ;
-(CGSize)mapPointForPoint:(CGPoint)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(BOOL)overlay:(id)arg1 canPossiblyDrawKey:(const SCD_Struct_MK25*)arg2 ;
-(BOOL)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK25*)arg2 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK25*)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(void)_updateRenderColors;
-(void)dealloc;
@end

