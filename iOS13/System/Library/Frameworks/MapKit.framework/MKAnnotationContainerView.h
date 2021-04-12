/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VKCustomFeatureDataSource.h>
#import <libobjc.A.dylib/_MKPinAnnotationViewDelegate.h>

@protocol MKAnnotationContainerViewDelegate;
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, MKAnnotationView, NSMutableSet, NSString, MKPinAnnotationView;

@interface MKAnnotationContainerView : UIView <VKCustomFeatureDataSource, _MKPinAnnotationViewDelegate> {

	NSMutableOrderedSet* _annotationViews;
	NSMutableDictionary* _clusteringAnnotationViews;
	NSMutableArray* _customFeatureDataSourceObservers;
	NSMutableArray* _awaitingDropPins;
	MKAnnotationView* _selectedAnnotationView;
	MKAnnotationView* _annotationViewToSelect;
	id<MKAnnotationContainerViewDelegate> _delegate;
	MKAnnotationView* _draggingAnnotationView;
	CGPoint _previousMouseDragPoint;
	double _previousMouseDragTimeStamp;
	CGPoint _mouseDownPoint;
	CGPoint _draggingAnnotationViewCenter;
	unsigned long long _mapType;
	BOOL _clickedOnAnnotationView;
	BOOL _didDragAnnotationView;
	MKAnnotationView* _userLocationView;
	double _annotationViewsRotationRadians;
	CGAffineTransform _mapTransform;
	BOOL _suppressCallout;
	NSMutableArray* _pinsToAnimate;
	double _mapPitchRadians;
	SCD_Struct_MK22 _mapDisplayStyle;
	BOOL _suppress;
	BOOL _isUpdating;
	double _lastUpdate;
	NSMutableDictionary* _clusterableAnnotationViews;
	NSMutableArray* _requiredPriorityAnnotationViews;
	NSMutableSet* _collidableAnnotationViews;
	NSMutableDictionary* _collidingAnnotationViews;
	NSMutableDictionary* _existingClusterAnnotationViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MKPinAnnotationView * bubblePin; 
@property (assign,nonatomic) BOOL suppressCallout;                                               //@synthesize suppressCallout=_suppressCallout - In the implementation block
@property (nonatomic,readonly) MKAnnotationView * userLocationView; 
@property (nonatomic,readonly) MKAnnotationView * draggingAnnotationView;                        //@synthesize draggingAnnotationView=_draggingAnnotationView - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotationContainerViewDelegate> delegate; 
@property (nonatomic,readonly) NSMutableOrderedSet * annotationViews; 
@property (assign,nonatomic) unsigned long long mapType; 
@property (nonatomic,readonly) SCD_Struct_MK40 currentComparisonContext; 
@property (nonatomic,readonly) BOOL hasDroppingPins; 
@property (nonatomic,readonly) BOOL hasPendingAnimations; 
-(void)dealloc;
-(id<MKAnnotationContainerViewDelegate>)delegate;
-(void)setDelegate:(id<MKAnnotationContainerViewDelegate>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)_visibleRect;
-(BOOL)hasPendingAnimations;
-(unsigned char)sceneID;
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(void)setMapDisplayStyle:(SCD_Struct_MK22)arg1 ;
-(MKAnnotationView *)userLocationView;
-(id)_annotationViewForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(BOOL)arg2 maxDistance:(double)arg3 ;
-(void)_dropDraggingAnnotationViewAnimated:(BOOL)arg1 ;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2 ;
-(void)setMapPitchRadians:(double)arg1 ;
-(void)updateAnnotationViewsForReason:(long long)arg1 ;
-(UIEdgeInsets)accessoryPadding;
-(CLLocationCoordinate2D)coordinateForAnnotationView:(id)arg1 ;
-(void)suppressUpdates;
-(void)stopSuppressingUpdates;
-(void)updateCalloutStateForSelectedAnnotationView:(id)arg1 ;
-(void)transitionTo:(long long)arg1 ;
-(id)annotationsInMapRect:(SCD_Struct_MK6)arg1 ;
-(void)setUserLocationView:(MKAnnotationView *)arg1 ;
-(void)addAnnotationView:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)removeAnnotationView:(id)arg1 ;
-(void)selectAnnotationView:(id)arg1 animated:(BOOL)arg2 ;
-(void)deselectAnnotationView:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateAnnotationView:(id)arg1 ;
-(void)dropPinsIfNeeded;
-(void)finishAddingAndRemovingAnnotationViews;
-(SCD_Struct_MK6)_mapRectWithFraction:(double)arg1 ofVisible:(SCD_Struct_MK6)arg2 ;
-(CGRect)_visibleCenteringRectInView:(id)arg1 ;
-(void)pinDidDrop:(id)arg1 animated:(BOOL)arg2 ;
-(CGPoint)pointForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)suppressCallout;
-(void)setSuppressCallout:(BOOL)arg1 ;
-(void)annotationViewDidChangeCenterOffset:(id)arg1 ;
-(void)annotationViewDidChangeZIndex:(id)arg1 ;
-(void)annotationViewDidChangeHidden:(id)arg1 ;
-(void)_performStateUpdatesIfNeeded;
-(void)invalidateCustomFeatureDataSourceRect:(SCD_Struct_MK6)arg1 ;
-(id)annotationViewForPoint:(CGPoint)arg1 ;
-(void)draggingTouchMovedToPoint:(CGPoint)arg1 edgeInsets:(UIEdgeInsets)arg2 ;
-(void)_liftForDragging:(id)arg1 mouseDownPoint:(CGPoint)arg2 ;
-(void)updateAnnotationViewsWithDelay;
-(NSMutableOrderedSet *)annotationViews;
-(BOOL)_updateAnnotationViewPositions;
-(void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2 ;
-(void)_updateCollidableAnnotationViews;
-(void)_updateZPositionForAnnotationView:(id)arg1 inBounds:(CGRect)arg2 ;
-(void)_updateAnnotationView:(id)arg1 ;
-(void)_draggingAnnotationViewDidPause:(id)arg1 ;
-(CGPoint)draggingAnnotationViewDropPoint;
-(BOOL)hasDroppingPins;
-(MKPinAnnotationView *)bubblePin;
-(void)updateUserLocationView;
-(CGRect)_visibleCenteringRect;
-(id)_existingClusterViewsForClusterID:(id)arg1 ;
-(void)invalidateCustomFeatureDataSource;
-(void)_willRemoveInternalAnnotationView:(id)arg1 ;
-(void)_dropPinsIfNeeded:(BOOL)arg1 ;
-(BOOL)_updateAnnotationViews:(id)arg1 ;
-(void)removeAnnotationViewsRotationAnimations;
-(CGPoint)draggingAnnotationViewDropPointForPoint:(CGPoint)arg1 ;
-(SCD_Struct_MK40)currentComparisonContext;
-(MKAnnotationView *)draggingAnnotationView;
-(BOOL)isClusteringEnabled;
-(id)clusterStyleAttributes;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(unsigned char)sceneState;
@end

