/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HULocationTriggerEditorMapDragRadiusViewDelegate, MKAnnotation, MKOverlay;
@class MKMapView, UIView, CAShapeLayer, NSMeasurementFormatter;

@interface HULocationTriggerEditorMapDragRadiusView : UIView {

	BOOL _isDragging;
	BOOL _isMinimum;
	BOOL _isMaximum;
	id<HULocationTriggerEditorMapDragRadiusViewDelegate> _delegate;
	unsigned long long _proximity;
	MKMapView* _mapView;
	UIView* _handleEndpointView;
	id<MKAnnotation> _annotation;
	id<MKOverlay> _overlay;
	CAShapeLayer* _shapeLayer;
	NSMeasurementFormatter* _measurmentFormatter;

}

@property (nonatomic,retain) UIView * handleEndpointView;                                                       //@synthesize handleEndpointView=_handleEndpointView - In the implementation block
@property (nonatomic,retain) id<MKAnnotation> annotation;                                                       //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) id<MKOverlay> overlay;                                                             //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeLayer;                                                         //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (assign,nonatomic) BOOL isMinimum;                                                                    //@synthesize isMinimum=_isMinimum - In the implementation block
@property (assign,nonatomic) BOOL isMaximum;                                                                    //@synthesize isMaximum=_isMaximum - In the implementation block
@property (nonatomic,retain) NSMeasurementFormatter * measurmentFormatter;                                      //@synthesize measurmentFormatter=_measurmentFormatter - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                                               //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) BOOL isDragging;                                                                   //@synthesize isDragging=_isDragging - In the implementation block
@property (assign,nonatomic,__weak) id<HULocationTriggerEditorMapDragRadiusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long proximity;                                                      //@synthesize proximity=_proximity - In the implementation block
-(id<MKAnnotation>)annotation;
-(CGPoint)maxPoint;
-(CGPoint)center;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HULocationTriggerEditorMapDragRadiusViewDelegate>)delegate;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)proximity;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<HULocationTriggerEditorMapDragRadiusViewDelegate>)arg1 ;
-(void)setOverlay:(id<MKOverlay>)arg1 ;
-(CAShapeLayer *)shapeLayer;
-(id<MKOverlay>)overlay;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(BOOL)isDragging;
-(void)removeHandle:(BOOL)arg1 ;
-(void)addHandleForAnnotation:(id)arg1 withOverlay:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setProximity:(unsigned long long)arg1 ;
-(CGPoint)minPoint;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(MKMapView *)mapView;
-(void)setHandleEndpointView:(UIView *)arg1 ;
-(UIView *)handleEndpointView;
-(void)setMeasurmentFormatter:(NSMeasurementFormatter *)arg1 ;
-(NSMeasurementFormatter *)measurmentFormatter;
-(id)bezierPathWithEndPoint:(CGPoint)arg1 ;
-(id)shapeLayerWithEndPoint:(CGPoint)arg1 ;
-(void)popAnimateHandle;
-(void)animateHandleIn:(BOOL)arg1 ;
-(double)currentHandleDistanceNormalized;
-(BOOL)isMinimum;
-(double)minimumRadiusNormalized;
-(BOOL)isMaximum;
-(double)maximumRadiusNormalized;
-(BOOL)usesMetric;
-(void)setIsDragging:(BOOL)arg1 ;
-(void)setIsMinimum:(BOOL)arg1 ;
-(void)setIsMaximum:(BOOL)arg1 ;
-(double)minimumInMeters;
-(double)currentHandleDistance;
-(void)resizeCircleAfterDelay;
-(double)feetToMeters:(double)arg1 ;
@end

