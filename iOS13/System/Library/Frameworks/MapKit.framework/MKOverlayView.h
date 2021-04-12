/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MKOverlay, OS_dispatch_queue;
@class NSObject, MKMapView;

@interface MKOverlayView : UIView {

	id<MKOverlay> _overlay;
	SCD_Struct_MK6 _boundingMapRect;
	id _renderer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	MKMapView* _mapView;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<MKOverlay>)overlay;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(BOOL)_canDrawContent;
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

