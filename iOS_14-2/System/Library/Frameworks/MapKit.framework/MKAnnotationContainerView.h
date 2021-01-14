/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VKCustomFeatureDataSource.h>
#import <libobjc.A.dylib/_MKPinAnnotationViewDelegate.h>

@protocol MKAnnotationContainerViewDelegate;
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, MKAnnotationView, NSMutableSet, MKPriorityToIndexMap, NSString, MKPinAnnotationView;

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
	SCD_Struct_MK28 _mapDisplayStyle;
	BOOL _suppress;
	BOOL _isUpdating;
	double _lastUpdate;
	NSMutableDictionary* _clusterableAnnotationViews;
	NSMutableArray* _requiredPriorityAnnotationViews;
	NSMutableSet* _collidableAnnotationViews;
	NSMutableDictionary* _collidingAnnotationViews;
	NSMutableDictionary* _existingClusterAnnotationViews;
	MKPriorityToIndexMap* _priorityMap;
	NSMutableSet* _prioritiesToAdd;

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
@property (nonatomic,readonly) SCD_Struct_MK46 currentComparisonContext; 
@property (nonatomic,readonly) BOOL hasDroppingPins; 
@property (nonatomic,readonly) BOOL hasPendingAnimations; 
-(CGRect)_visibleRect;
-(void)_updateCollidableAnnotationViews;
-(void)updateCalloutStateForSelectedAnnotationView:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setMapPitchRadians:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2 ;
-(id)_annotationViewForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(BOOL)arg2 maxDistance:(double)arg3 ;
-(void)updateAnnotationViewsWithDelay;
-(id<MKAnnotationContainerViewDelegate>)delegate;
-(BOOL)suppressCallout;
-(void)annotationViewDidChangeCenterOffset:(id)arg1 ;
-(CGPoint)draggingAnnotationViewDropPoint;
-(unsigned long long)mapType;
-(void)setMapDisplayStyle:(SCD_Struct_MK28)arg1 ;
-(void)_updateZPositionForAnnotationView:(id)arg1 inBounds:(CGRect)arg2 ;
-(NSMutableOrderedSet *)annotationViews;
-(BOOL)hasDroppingPins;
-(void)selectAnnotationView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_updateAnnotationViews:(id)arg1 ;
-(MKPinAnnotationView *)bubblePin;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(MKAnnotationView *)draggingAnnotationView;
-(void)deselectAnnotationView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dropDraggingAnnotationViewAnimated:(BOOL)arg1 ;
-(void)stopSuppressingUpdates;
-(void)updateAnnotationView:(id)arg1 ;
-(BOOL)_updateAnnotationViewPositions;
-(CGPoint)pointForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)_existingClusterViewsForClusterID:(id)arg1 ;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(void)annotationViewDidChangeZPriority:(id)arg1 ;
-(void)removeAnnotationView:(id)arg1 ;
-(void)transitionTo:(long long)arg1 ;
-(void)setDelegate:(id<MKAnnotationContainerViewDelegate>)arg1 ;
-(void)_performStateUpdatesIfNeeded;
-(void)dropPinsIfNeeded;
-(CGRect)_visibleCenteringRectInView:(id)arg1 ;
-(void)_dropPinsIfNeeded:(BOOL)arg1 ;
-(void)updateAnnotationViewsForReason:(long long)arg1 ;
-(void)addAnnotationView:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(CGPoint)draggingAnnotationViewDropPointForPoint:(CGPoint)arg1 ;
-(void)_willRemoveInternalAnnotationView:(id)arg1 ;
-(BOOL)_updatePriorityMapIfNeeded;
-(MKAnnotationView *)userLocationView;
-(UIEdgeInsets)accessoryPadding;
-(CLLocationCoordinate2D)coordinateForAnnotationView:(id)arg1 ;
-(void)_draggingAnnotationViewDidPause:(id)arg1 ;
-(SCD_Struct_MK46)currentComparisonContext;
-(void)_liftForDragging:(id)arg1 mouseDownPoint:(CGPoint)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)setSuppressCallout:(BOOL)arg1 ;
-(void)annotationViewDidChangeHidden:(id)arg1 ;
-(void)removeAnnotationViewsRotationAnimations;
-(void)draggingTouchMovedToPoint:(CGPoint)arg1 edgeInsets:(UIEdgeInsets)arg2 ;
-(void)_updateAnnotationView:(id)arg1 ;
-(void)finishAddingAndRemovingAnnotationViews;
-(void)setUserLocationView:(MKAnnotationView *)arg1 ;
-(void)visibleCenteringRectChanged;
-(void)invalidateCustomFeatureDataSourceRect:(SCD_Struct_MK6)arg1 ;
-(BOOL)hasPendingAnimations;
-(void)invalidateCustomFeatureDataSource;
-(CGRect)_visibleCenteringRect;
-(id)clusterStyleAttributes;
-(unsigned char)sceneState;
-(id)annotationsInMapRect:(SCD_Struct_MK6)arg1 ;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(SCD_Struct_MK6)_mapRectWithFraction:(double)arg1 ofVisible:(SCD_Struct_MK6)arg2 ;
-(void)suppressUpdates;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(void)_addPrioritiesForAnnotationViewIfNeeded:(id)arg1 ;
-(void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2 ;
-(void)updateUserLocationView;
-(id)annotationViewForPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(BOOL)isClusteringEnabled;
-(unsigned char)sceneID;
-(void)pinDidDrop:(id)arg1 animated:(BOOL)arg2 ;
@end

