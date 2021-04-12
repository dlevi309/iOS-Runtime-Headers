/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<MKOverlay>)overlay;
-(double)alpha;
-(double)contentScaleFactor;
-(void)setAlpha:(double)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setNeedsDisplay;
-(id)_mapView;
-(id)_renderer;
-(void)_setMapView:(id)arg1 ;
-(id)initWithOverlay:(id)arg1 ;
-(CGPoint)pointForMapPoint:(CGSize)arg1 ;
-(void)_updateRenderColors;
-(void)set_boundingMapRect:(SCD_Struct_MK6)arg1 ;
-(id)_mk_overlayLayer;
-(id)_mk_overlayView;
-(void)set_renderer:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(SCD_Struct_MK6)mapRectForRect:(CGRect)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK6)arg1 ;
-(CGSize)_originMapPoint;
-(SCD_Struct_MK6)_boundingMapRect;
-(BOOL)_mayExtendOutsideBounds;
-(void)_forEachMapRectForKey:(const SCD_Struct_MK19*)arg1 withContext:(CGContextRef)arg2 performBlock:(/*^block*/id)arg3 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK6)arg1 ;
-(CGSize)mapPointForPoint:(CGPoint)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(BOOL)overlay:(id)arg1 canPossiblyDrawKey:(const SCD_Struct_MK19*)arg2 ;
-(BOOL)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK19*)arg2 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK19*)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
@end

