/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class UIView, VKMapView, NSString;

@interface MKBasicMapView : UIView <GEOResourceManifestTileGroupObserver> {

	UIView* _hostView;
	VKMapView* _mapView;
	double _mapModeStartTime;
	double _trafficStartTime;
	BOOL _changingViewSize;
	BOOL _inactive;
	BOOL _hasRenderedSomething;
	BOOL _inBackground;

}

@property (nonatomic,readonly) VKMapView * mapView;                                          //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (getter=isInBackground,nonatomic,readonly) BOOL inBackground;                      //@synthesize inBackground=_inBackground - In the implementation block
@property (assign,nonatomic) BOOL rendersInBackground; 
@property (assign,nonatomic) BOOL hasRenderedSomething;                                      //@synthesize hasRenderedSomething=_hasRenderedSomething - In the implementation block
@property (assign,nonatomic) double mapModeStartTime;                                        //@synthesize mapModeStartTime=_mapModeStartTime - In the implementation block
@property (assign,nonatomic) double trafficStartTime;                                        //@synthesize trafficStartTime=_trafficStartTime - In the implementation block
@property (getter=isChangingViewSize,nonatomic,readonly) BOOL changingViewSize;              //@synthesize changingViewSize=_changingViewSize - In the implementation block
@property (assign,nonatomic) BOOL inactive;                                                  //@synthesize inactive=_inactive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)inactive;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(VKMapView *)mapView;
-(BOOL)isInBackground;
-(void)setRendersInBackground:(BOOL)arg1 ;
-(void)_animateCanvasForBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andGlobe:(BOOL)arg2 shouldRasterize:(BOOL)arg3 ;
-(BOOL)rendersInBackground;
-(void)updateStatsForTrafficEnabledTime;
-(void)updateStatsForEnablingTraffic:(BOOL)arg1 ;
-(void)updateStatsForSwitchingToMapType:(int)arg1 ;
-(void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)isChangingViewSize;
-(void)setHasRenderedSomething:(BOOL)arg1 ;
-(void)setMapModeStartTime:(double)arg1 ;
-(void)setTrafficStartTime:(double)arg1 ;
-(CLLocationCoordinate2D)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2 ;
-(BOOL)hasRenderedSomething;
-(CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toCameraModelPointToView:(id)arg2 ;
-(BOOL)isPointValidForGesturing:(CGPoint)arg1 ;
-(void)_updateBackgroundState;
-(void)_finishedSnapshot:(id)arg1 ;
-(void)_updateMapViewHidden;
-(void)_unregisterSceneNotifications;
-(void)_registerSceneNotifications;
-(void)_updateForCurrentScreen;
-(void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ignoreIfViewInWindow:(BOOL)arg2 ;
-(void)_updateStatsForTrafficEnabledTime:(BOOL)arg1 ;
-(void)addCalloutSubview:(id)arg1 ;
-(CGSize)calloutContainerCanvasSize;
-(double)calloutContainerCanvasScale;
-(double)mapModeStartTime;
-(double)trafficStartTime;
@end

