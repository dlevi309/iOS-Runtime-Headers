/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKMuninGestureControllerDelegate.h>
#import <libobjc.A.dylib/VKMapViewCameraDelegate.h>
#import <libobjc.A.dylib/VKMapViewDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol MKMapServiceTicket, MKMuninViewDelegate;
@class _MKMuninLayerHostingView, UIImageView, MKCompassView, NSLayoutConstraint, UITapGestureRecognizer, MKMuninGestureController, VKMapView, NSArray, NSString, MKMapItem, GEOStorefrontView, NSDate, MKHapticEngine, MKMuninBumpFlash, GEOMuninViewState, VKLabelMarker, VKMuninMarker, NSURL;

@interface MKMuninView : UIView <MKMuninGestureControllerDelegate, VKMapViewCameraDelegate, VKMapViewDelegate, NSCoding> {

	_MKMuninLayerHostingView* _hostView;
	BOOL _changingViewSize;
	BOOL _wantsCompassShown;
	UIImageView* _transitionStartImageview;
	UIImageView* _transitionEndImageview;
	UIImageView* _transitionGridImageview;
	MKCompassView* _compassView;
	NSLayoutConstraint* _compassTopConstraint;
	NSLayoutConstraint* _compassTrailingConstraint;
	UITapGestureRecognizer* _compassTapGestureRecognizer;
	MKMuninGestureController* _gestureController;
	VKMapView* _muninView;
	CLLocationCoordinate2D _lastCoordinate;
	NSArray* _lastGroundViews;
	NSString* _lastJunctionName;
	id<MKMapServiceTicket> _refineTicket;
	id<MKMapServiceTicket> _revGeoTicket;
	CGRect _oldRect;
	BOOL _hasValidViewState;
	BOOL _storefrontFullyDrawn;
	BOOL _wantsStorefrontCloseUpView;
	BOOL _moveToStorefrontViewInProgress;
	BOOL _didTriggerAdequatelyDrawnNotification;
	MKMapItem* _mapItem;
	MKMapItem* _revGeoMapItem;
	GEOStorefrontView* _requestedStorefrontView;
	NSDate* _startTime;
	int _triggerAction;
	MKHapticEngine* _hapticEngine;
	MKMuninBumpFlash* _bumpFlashView;
	BOOL _hasEnteredMunin;
	BOOL _navigatingEnabled;
	BOOL _panningEnabled;
	BOOL _pinchingEnabled;
	id<MKMuninViewDelegate> _delegate;
	GEOMuninViewState* _muninViewState;
	UIEdgeInsets _compassInsets;

}

@property (nonatomic,retain) VKMapView * muninView;                                  //@synthesize muninView=_muninView - In the implementation block
@property (assign,getter=isCompassHidden,nonatomic) BOOL compassHidden; 
@property (assign,nonatomic) UIEdgeInsets compassInsets;                             //@synthesize compassInsets=_compassInsets - In the implementation block
@property (assign,nonatomic) BOOL hasEnteredMunin;                                   //@synthesize hasEnteredMunin=_hasEnteredMunin - In the implementation block
@property (assign,nonatomic) BOOL navigatingEnabled;                                 //@synthesize navigatingEnabled=_navigatingEnabled - In the implementation block
@property (assign,nonatomic) BOOL panningEnabled;                                    //@synthesize panningEnabled=_panningEnabled - In the implementation block
@property (assign,nonatomic) BOOL pinchingEnabled;                                   //@synthesize pinchingEnabled=_pinchingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsRoadLabels; 
@property (assign,nonatomic) BOOL showsPointLabels; 
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate; 
@property (assign,nonatomic) double presentationYaw; 
@property (assign,nonatomic,__weak) id<MKMuninViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOMuninViewState * muninViewState;                   //@synthesize muninViewState=_muninViewState - In the implementation block
@property (nonatomic,readonly) VKLabelMarker * selectedLabelMarker; 
@property (nonatomic,readonly) NSArray * visibleRoadLabels; 
@property (nonatomic,readonly) NSArray * imageResources; 
@property (nonatomic,readonly) VKMuninMarker * muninMarker; 
@property (nonatomic,readonly) NSArray * visiblePlaceMUIDs; 
@property (nonatomic,readonly) MKMapItem * mapItem;                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSDate * collectionDate; 
@property (nonatomic,readonly) BOOL adequatelyDrawn; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) NSURL * sharingURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<MKMuninViewDelegate>)delegate;
-(void)setDelegate:(id<MKMuninViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSDate *)collectionDate;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isLoading;
-(MKMapItem *)mapItem;
-(CLLocationCoordinate2D)centerCoordinate;
-(GEOMuninViewState *)muninViewState;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_updateLocationInfo;
-(VKMapView *)muninView;
-(void)setMuninView:(VKMapView *)arg1 ;
-(void)setNavigatingEnabled:(BOOL)arg1 ;
-(void)setPanningEnabled:(BOOL)arg1 ;
-(void)setPinchingEnabled:(BOOL)arg1 ;
-(void)_handleCompassTap;
-(void)_maps_initCommon;
-(BOOL)_pointContainedInCompassView:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)adequatelyDrawn;
-(BOOL)hasEnteredMunin;
-(void)setCompassHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_animateCanvasForBounds:(CGRect)arg1 ;
-(void)_updateCompassInsets;
-(BOOL)showsRoadLabels;
-(void)setShowsRoadLabels:(BOOL)arg1 ;
-(BOOL)showsPointLabels;
-(void)setShowsPointLabels:(BOOL)arg1 ;
-(double)presentationYaw;
-(void)setPresentationYaw:(double)arg1 pitch:(double)arg2 animated:(BOOL)arg3 ;
-(void)recordTriggerAction:(int)arg1 ;
-(void)_enterMuninForMapItem:(id)arg1 wantsCloseUpView:(BOOL)arg2 ;
-(VKMuninMarker *)muninMarker;
-(void)_enterMuninForMuninMarker:(id)arg1 withHeading:(double)arg2 ;
-(void)_enterMuninForMuninViewState:(id)arg1 ;
-(void)_resetViewState;
-(BOOL)cancelPendingMove;
-(void)_updateCameraFrame;
-(void)_updateCompass;
-(NSURL *)sharingURL;
-(VKLabelMarker *)selectedLabelMarker;
-(BOOL)_moveToStorefrontView:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)tapAtPoint:(CGPoint)arg1 ;
-(void)moveToCloseUpViewAnimated:(BOOL)arg1 ;
-(void)moveToStandOffViewAnimated:(BOOL)arg1 ;
-(void)_refineLabelMarker:(id)arg1 ;
-(void)deselectLabelMarker;
-(id)labelMarkerForCustomFeatureAnnotation:(id)arg1 ;
-(void)addCustomFeatureDataSource:(id)arg1 ;
-(void)removeCustomFeatureDataSource:(id)arg1 ;
-(void)_updateLocationInfoForCoordinate:(CLLocationCoordinate2D)arg1 allowReverseGeocodeIfNeeded:(BOOL)arg2 ;
-(void)mapLayerDidChangeVisibleRegion;
-(void)moveToCloseUpView;
-(BOOL)isCompassHidden;
-(id)_locationInfoWithHeading:(double)arg1 ;
-(void)_reverseGeocodeCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)muninGestureControllerDidStartUserInteraction:(id)arg1 ;
-(void)muninGestureControllerDidStopUserInteraction:(id)arg1 ;
-(void)muninGestureController:(id)arg1 didTapLabelMarker:(id)arg2 ;
-(void)muninGestureController:(id)arg1 didTapAtPoint:(CGPoint)arg2 areaAvailable:(BOOL)arg3 ;
-(void)muninGestureController:(id)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3 ;
-(void)muninGestureControllerDidPan:(id)arg1 ;
-(void)mapLayerDidChangeRegionAnimated:(BOOL)arg1 ;
-(void)mapLayerWillAnimateToLocation:(CGSize)arg1 ;
-(void)mapLayerWasUnableToAnimate;
-(void)mapLayerDidChangeSceneState:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)mapLayer:(id)arg1 nearestJunctionDidChange:(id)arg2 currentRoad:(id)arg3 ;
-(void)setCompassHidden:(BOOL)arg1 ;
-(void)setCompassInsets:(UIEdgeInsets)arg1 ;
-(void)setPresentationYaw:(double)arg1 ;
-(void)setPresentationYaw:(double)arg1 animated:(BOOL)arg2 ;
-(void)enterMuninWithEntryPoint:(id)arg1 ;
-(void)openInMapsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)moveToMapItem:(id)arg1 wantsCloseUpView:(BOOL)arg2 orMuninMarker:(id)arg3 withHeading:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)moveToStandOffView;
-(void)selectLabelMarker:(id)arg1 ;
-(NSArray *)visiblePlaceMUIDs;
-(NSArray *)visibleRoadLabels;
-(NSArray *)imageResources;
-(UIEdgeInsets)compassInsets;
-(void)setHasEnteredMunin:(BOOL)arg1 ;
-(BOOL)navigatingEnabled;
-(BOOL)panningEnabled;
-(BOOL)pinchingEnabled;
@end

