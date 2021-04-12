/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_MKKVOProxyDelegate.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKLocatableObject.h>

@protocol MKAnnotation;
@class MKUserLocationAnnotationViewProxy, _MKAnnotationViewAnchor, GEORouteMatch, NSMutableArray, _MKKVOProxy, _MKAnnotationViewCustomFeatureAnnotation, NSString, UIImage, MKCalloutView, UIView, CALayer, VKAnchorWrapper;

@interface MKAnnotationView : UIView <_MKKVOProxyDelegate, MKAnnotationRepresentation, MKLocatableObject> {

	CLLocationCoordinate2D _presentationCoordinate;
	double _presentationCourse;
	/*^block*/id _presentationCoordinateChangedCallback;
	CLLocationCoordinate2D _coordinate;
	MKUserLocationAnnotationViewProxy* _userLocationProxy;
	double _rotationRadians;
	_MKAnnotationViewAnchor* _anchor;
	GEORouteMatch* _routeMatch;
	double _mapRotationRadians;
	unsigned long long _hiddenReasons;
	NSMutableArray* _hiddenCompletionBlocks;
	double _realAlpha;
	CGPoint _realOffset;
	double _mapPitchRadians;
	SCD_Struct_MK22 _mapDisplayStyle;
	float _selectionPriority;
	_MKKVOProxy* _annotationObserver;
	_MKAnnotationViewCustomFeatureAnnotation* _customFeatureAnnotation;
	BOOL _subclassImplementsAlignmentRectInsets;
	unsigned long long _allowedCalloutEdges;
	id<MKAnnotation> _annotation;
	float _displayPriority;
	CGRect _collisionFrame;
	NSString* _clusteringIdentifier;
	UIImage* _image;
	long long _collisionMode;
	MKCalloutView* _calloutView;
	UIView* _leftCalloutAccessoryView;
	UIView* _rightCalloutAccessoryView;
	UIView* _detailCalloutAccessoryView;
	NSString* _reuseIdentifier;
	MKAnnotationView* _clusterAnnotationView;
	unsigned long long _mapType;
	unsigned long long _zIndex;
	CGPoint _centerOffset;
	CGPoint _calloutOffset;
	CGPoint _leftCalloutOffset;
	CGPoint _rightCalloutOffset;
	unsigned long long _dragState;
	struct {
		unsigned pendingSelectionAnimated : 1;
		unsigned disabled : 1;
		unsigned selected : 1;
		unsigned canShowCallout : 1;
		unsigned isHighlighted : 1;
		unsigned canDisplayDisclosureInCallout : 1;
		unsigned canDisplayPlacemarkInCallout : 1;
		unsigned draggable : 1;
		unsigned useBalloonCallouts : 1;
		unsigned customTransformApplied : 1;
		unsigned internalTransformApplied : 1;
		unsigned animatingToCoordinate : 1;
		unsigned tracking : 1;
		unsigned pendingOffsetAnimation : 1;
		unsigned pendingHideAnimation : 1;
		unsigned setSelectState : 2;
	}  _flags;
	CALayer* _imageLayer;
	long long _titleVisibility;
	long long _subtitleVisibility;
	BOOL _animatingToCoordinate;
	BOOL _tracking;
	BOOL _pendingSelectionAnimated;
	double _direction;

}

@property (setter=_setCalloutView:,getter=_calloutView,nonatomic,retain) MKCalloutView * _calloutView;                                           //@synthesize calloutView=_calloutView - In the implementation block
@property (assign,setter=_setPendingSelectionAnimated:,getter=_isPendingSelectionAnimated,nonatomic) BOOL pendingSelectionAnimated;              //@synthesize pendingSelectionAnimated=_pendingSelectionAnimated - In the implementation block
@property (nonatomic,readonly) VKAnchorWrapper * anchor; 
@property (setter=_setRouteMatch:,nonatomic,retain) GEORouteMatch * _routeMatch;                                                                 //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy; 
@property (getter=_collisionAlignmentRectInsets,nonatomic,readonly) UIEdgeInsets collisionAlignmentRectInsets; 
@property (getter=_significantBounds,nonatomic,readonly) CGRect significantBounds; 
@property (nonatomic,readonly) CGRect _significantFrame; 
@property (assign,setter=_setAllowedCalloutEdges:,getter=_allowedCalloutEdges,nonatomic) unsigned long long allowedCalloutEdges;                 //@synthesize allowedCalloutEdges=_allowedCalloutEdges - In the implementation block
@property (assign,setter=_setDirection:,nonatomic) double _direction;                                                                            //@synthesize direction=_direction - In the implementation block
@property (assign,setter=_setPresentationCoordinate:,nonatomic) CLLocationCoordinate2D _presentationCoordinate;                                  //@synthesize presentationCoordinate=_presentationCoordinate - In the implementation block
@property (setter=_setPresentationCoordinateChangedCallback:,nonatomic,copy) id _presentationCoordinateChangedCallback;                          //@synthesize presentationCoordinateChangedCallback=_presentationCoordinateChangedCallback - In the implementation block
@property (assign,setter=_setPresentationCourse:,nonatomic) double _presentationCourse;                                                          //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (assign,setter=_setAnimatingToCoordinate:,getter=_isAnimatingToCoordinate,nonatomic) BOOL _animatingToCoordinate;                      //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,setter=_setTracking:,getter=_isTracking,nonatomic) BOOL _tracking;                                                             //@synthesize tracking=_tracking - In the implementation block
@property (assign,setter=_setMapDisplayStyle:,getter=_mapDisplayStyle,nonatomic) SCD_Struct_MK22 mapDisplayStyle;                                //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,setter=_setSelectionPriority:,getter=_selectionPriority,nonatomic) float selectionPriority;                                    //@synthesize selectionPriority=_selectionPriority - In the implementation block
@property (assign,setter=_setMapRotationRadians:,getter=_mapRotationRadians,nonatomic) double mapRotationRadians;                                //@synthesize mapRotationRadians=_mapRotationRadians - In the implementation block
@property (assign,setter=_setMapPitchRadians:,getter=_mapPitchRadians,nonatomic) double mapPitchRadians;                                         //@synthesize mapPitchRadians=_mapPitchRadians - In the implementation block
@property (getter=_collisionFrame,nonatomic,readonly) CGRect collisionFrame;                                                                     //@synthesize collisionFrame=_collisionFrame - In the implementation block
@property (getter=_defaultCollisionAlignmentRectInsets,nonatomic,readonly) UIEdgeInsets defaultCollisionAlignmentRectInsets; 
@property (assign,setter=_setUseBalloonCallouts:,getter=_useBalloonCallouts,nonatomic) BOOL useBalloonCallouts; 
@property (assign,nonatomic) long long titleVisibility;                                                                                          //@synthesize titleVisibility=_titleVisibility - In the implementation block
@property (assign,nonatomic) long long subtitleVisibility;                                                                                       //@synthesize subtitleVisibility=_subtitleVisibility - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,retain) id<MKAnnotation> annotation; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGPoint centerOffset; 
@property (assign,nonatomic) CGPoint calloutOffset; 
@property (assign,nonatomic) CGPoint leftCalloutOffset;                                                                                          //@synthesize leftCalloutOffset=_leftCalloutOffset - In the implementation block
@property (assign,nonatomic) CGPoint rightCalloutOffset;                                                                                         //@synthesize rightCalloutOffset=_rightCalloutOffset - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL canShowCallout; 
@property (nonatomic,retain) UIView * leftCalloutAccessoryView;                                                                                  //@synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * rightCalloutAccessoryView;                                                                                 //@synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * detailCalloutAccessoryView;                                                                                //@synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView - In the implementation block
@property (assign,getter=isDraggable,nonatomic) BOOL draggable; 
@property (assign,nonatomic) unsigned long long dragState; 
@property (nonatomic,copy) NSString * clusteringIdentifier;                                                                                      //@synthesize clusteringIdentifier=_clusteringIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) MKAnnotationView * clusterAnnotationView;                                                                  //@synthesize clusterAnnotationView=_clusterAnnotationView - In the implementation block
@property (assign,nonatomic) float displayPriority;                                                                                              //@synthesize displayPriority=_displayPriority - In the implementation block
@property (assign,nonatomic) long long collisionMode;                                                                                            //@synthesize collisionMode=_collisionMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned long long)_zIndex;
+(Class)_mapkitLeafClass;
+(float)_defaultDisplayPriority;
+(Class)calloutViewClass;
+(BOOL)_followsTerrain;
+(unsigned long long)_selectedZIndex;
+(id)currentLocationTitle;
+(id)_disclosureCalloutButton;
+(BOOL)_isInitiallyHiddenWhenAdded;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(id)_containerView;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(BOOL)isHidden;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(double)alpha;
-(double)_direction;
-(BOOL)isSelectable;
-(BOOL)isSelected;
-(BOOL)isPersistent;
-(void)setHidden:(BOOL)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)didMoveToSuperview;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForDisplay;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(unsigned long long)_zIndex;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)reuseIdentifier;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDragState:(unsigned long long)arg1 ;
-(unsigned long long)dragState;
-(VKAnchorWrapper *)anchor;
-(long long)collisionMode;
-(void)setCollisionMode:(long long)arg1 ;
-(CGPoint)centerOffset;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(void)prepareForSnapshotting;
-(id<MKAnnotation>)annotation;
-(id)_contentLayer;
-(unsigned long long)_mapType;
-(GEORouteMatch *)_routeMatch;
-(id)_mapView;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(BOOL)_isTracking;
-(void)setDraggable:(BOOL)arg1 ;
-(SCD_Struct_MK22)_mapDisplayStyle;
-(void)_setMapDisplayStyle:(SCD_Struct_MK22)arg1 ;
-(float)_selectionPriority;
-(id)viewRepresentation;
-(MKUserLocationAnnotationViewProxy *)_userLocationProxy;
-(MKAnnotationView *)clusterAnnotationView;
-(NSString *)clusteringIdentifier;
-(void)setClusteringIdentifier:(NSString *)arg1 ;
-(void)setDisplayPriority:(float)arg1 ;
-(void)_setHidden:(BOOL)arg1 forReason:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_setVKNavigationPuckMarker:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)_annotationContainer;
-(UIView *)rightCalloutAccessoryView;
-(UIView *)leftCalloutAccessoryView;
-(UIView *)detailCalloutAccessoryView;
-(BOOL)canShowCallout;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)invalidateCustomFeatureForced:(BOOL)arg1 ;
-(void)_unhideForDisplay;
-(void)_updateAnchorPosition:(CGPoint)arg1 alignToPixels:(BOOL)arg2 ;
-(BOOL)_shouldShowCalloutIfSelected;
-(void)_resetZIndex;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)_defaultCollisionAlignmentRectInsets;
-(void)setTitleVisibility:(long long)arg1 ;
-(void)setSubtitleVisibility:(long long)arg1 ;
-(void)_didDragWithVelocity:(CGPoint)arg1 ;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)isProvidingCustomFeature;
-(id)_effectiveSubtitlesIsCollidable:(BOOL*)arg1 ;
-(CLLocationCoordinate2D)_presentationCoordinate;
-(void)_setRouteMatch:(id)arg1 ;
-(CGPoint)leftCalloutOffset;
-(CGPoint)rightCalloutOffset;
-(unsigned long long)_allowedCalloutEdges;
-(MKCalloutView *)_calloutView;
-(CGPoint)calloutOffset;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)_didUpdatePosition;
-(void)_setZIndex:(unsigned long long)arg1 ;
-(CGPoint)_draggingDropOffset;
-(CGRect)_significantBounds;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(void)setCanShowCallout:(BOOL)arg1 ;
-(void)_invalidateCachedCoordinate;
-(UIEdgeInsets)_collisionAlignmentRectInsets;
-(CGRect)_collisionFrame;
-(void)_removePopover;
-(id)_getPopover:(id)arg1 ;
-(id)_vkNavigationPuckMarker;
-(void)_addAnnotationObservation;
-(void)_removeAnnotationObservation;
-(BOOL)shouldShowCallout;
-(void)_setCalloutView:(id)arg1 ;
-(id)_presentationCoordinateChangedCallback;
-(void)_invalidateCustomFeatureForced:(BOOL)arg1 coordinates:(CLLocationCoordinate2D*)arg2 count:(unsigned long long)arg3 ;
-(void)_setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setZIndex:(unsigned long long)arg1 notify:(BOOL)arg2 ;
-(unsigned long long)_effectiveZIndex;
-(void)_performOffsetAnimationIfNeeded;
-(void)_performHideAnimationIfNeeded;
-(void)_setHidden:(BOOL)arg1 forReason:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_userTrackingModeDidChange:(id)arg1 ;
-(unsigned long long)_orientationCount;
-(BOOL)_hasAlternateOrientation;
-(void)_mkObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)_isPendingSelectionAnimated;
-(void)setClusterAnnotationView:(MKAnnotationView *)arg1 ;
-(long long)compareForClustering:(id)arg1 ;
-(long long)compareForCollision:(id)arg1 ;
-(void)setDetailCalloutAccessoryView:(UIView *)arg1 ;
-(void)setLeftCalloutAccessoryView:(UIView *)arg1 ;
-(void)setRightCalloutAccessoryView:(UIView *)arg1 ;
-(void)_setMapRotationRadians:(double)arg1 ;
-(void)_setDirection:(double)arg1 ;
-(void)_setPresentationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(CGRect)_significantFrame;
-(BOOL)isDraggable;
-(BOOL)_canDisplayDisclosureInCallout;
-(void)_setCanDisplayDisclosureInCallout:(BOOL)arg1 ;
-(BOOL)_canDisplayPlacemarkInCallout;
-(void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1 ;
-(void)_resetZIndexNotify:(BOOL)arg1 ;
-(BOOL)_isHiddenForReason:(unsigned long long)arg1 ;
-(void)_performStateUpdatesIfNeeded;
-(void)_setPositionOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_offsetToAnnotationView:(id)arg1 ;
-(void)_enableRotationForHeadingMode:(double)arg1 ;
-(void)_transitionTo:(long long)arg1 ;
-(BOOL)_canChangeOrientation;
-(double)_pointsForDistance:(double)arg1 ;
-(void)_updateFromMap;
-(BOOL)_useBalloonCallouts;
-(void)_setUseBalloonCallouts:(BOOL)arg1 ;
-(id)_customFeatureAnnotation;
-(BOOL)isCollidingWithAnnotationView:(id)arg1 previouslyCollided:(BOOL)arg2 ;
-(void)_setPresentationCoordinateChangedCallback:(/*^block*/id)arg1 ;
-(double)_presentationCourse;
-(void)_setPresentationCourse:(double)arg1 ;
-(BOOL)_isAnimatingToCoordinate;
-(void)_setAllowedCalloutEdges:(unsigned long long)arg1 ;
-(double)_mapRotationRadians;
-(double)_mapPitchRadians;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setSelectionPriority:(float)arg1 ;
-(void)_setPendingSelectionAnimated:(BOOL)arg1 ;
-(long long)titleVisibility;
-(long long)subtitleVisibility;
-(float)displayPriority;
-(id)_effectiveTitleIsCollidable:(BOOL*)arg1 ;
-(id)customFeatureAnnotation;
-(void)configureCustomFeature:(id)arg1 ;
@end

