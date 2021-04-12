/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/PXPlacesGeotaggedItemDataSourceDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, PXPlacesMapControllerSelectionDelegate, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerFocusDelegate, PXPlacesMapControllerLoadingStateDelegate, MKAnnotation;
@class NSObject, NSMapTable, NSSet, PXPlacesMapView, PXPlacesMapPipelineExecutionContext, PXPlacesImageCache, CLLocationManager, NSMutableDictionary, NSOrderedSet, NSString;

@interface PXPlacesMapController : NSObject <MKMapViewDelegate, CLLocationManagerDelegate, PXPlacesGeotaggedItemDataSourceDelegate> {

	NSObject*<OS_dispatch_queue> _pipelinesQueue;
	NSObject*<OS_dispatch_queue> _dataSourcesQueue;
	NSObject*<OS_dispatch_queue> _executionContextQueue;
	NSObject*<OS_dispatch_source> _uiUpdateTimer;
	NSMapTable* _dataSourceExecutionContexts;
	NSMapTable* _pendingDataSourceChanges;
	BOOL _pipelineExecutionAllowed;
	BOOL _mapViewIsVisible;
	BOOL _signalFocusWhenMapViewBecomesVisible;
	int _currentLocationAuthorizationStatus;
	id<PXPlacesMapControllerSelectionDelegate> _selectionDelegate;
	id<PXPlacesMapControllerChangeDelegate> _changeDelegate;
	id<PXPlacesMapControllerFocusDelegate> _focusDelegate;
	id<PXPlacesMapControllerLoadingStateDelegate> _stateDelegate;
	id<MKAnnotation> _currentSelection;
	NSSet* _dataSources;
	NSMapTable* _dataSourceToPipelineMap;
	PXPlacesMapView* _mapView;
	PXPlacesMapPipelineExecutionContext* _currentExecutionContext;
	PXPlacesImageCache* _cache;
	CLLocationManager* _locationManager;
	NSMutableDictionary* _showDebugMapRectColors;
	CLLocationCoordinate2D _initialCenterCoordinate;
	UIEdgeInsets _initialEdgePadding;
	SCD_Struct_PX2 _signalFocusMapRect;

}

@property (retain) NSSet * dataSources;                                                        //@synthesize dataSources=_dataSources - In the implementation block
@property (retain) NSMapTable * dataSourceToPipelineMap;                                       //@synthesize dataSourceToPipelineMap=_dataSourceToPipelineMap - In the implementation block
@property (nonatomic,retain) PXPlacesMapView * mapView;                                        //@synthesize mapView=_mapView - In the implementation block
@property (retain) PXPlacesMapPipelineExecutionContext * currentExecutionContext;              //@synthesize currentExecutionContext=_currentExecutionContext - In the implementation block
@property (assign) BOOL pipelineExecutionAllowed;                                              //@synthesize pipelineExecutionAllowed=_pipelineExecutionAllowed - In the implementation block
@property (assign) BOOL mapViewIsVisible;                                                      //@synthesize mapViewIsVisible=_mapViewIsVisible - In the implementation block
@property (assign,nonatomic) BOOL signalFocusWhenMapViewBecomesVisible;                        //@synthesize signalFocusWhenMapViewBecomesVisible=_signalFocusWhenMapViewBecomesVisible - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX2 signalFocusMapRect;                                //@synthesize signalFocusMapRect=_signalFocusMapRect - In the implementation block
@property (retain) PXPlacesImageCache * cache;                                                 //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * showDebugMapRectColors;                     //@synthesize showDebugMapRectColors=_showDebugMapRectColors - In the implementation block
@property (__weak) id<PXPlacesMapControllerSelectionDelegate> selectionDelegate;               //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (__weak) id<PXPlacesMapControllerChangeDelegate> changeDelegate;                     //@synthesize changeDelegate=_changeDelegate - In the implementation block
@property (__weak) id<PXPlacesMapControllerFocusDelegate> focusDelegate;                       //@synthesize focusDelegate=_focusDelegate - In the implementation block
@property (__weak) id<PXPlacesMapControllerLoadingStateDelegate> stateDelegate;                //@synthesize stateDelegate=_stateDelegate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D initialCenterCoordinate;                   //@synthesize initialCenterCoordinate=_initialCenterCoordinate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets initialEdgePadding;                                  //@synthesize initialEdgePadding=_initialEdgePadding - In the implementation block
@property (assign,nonatomic) int currentLocationAuthorizationStatus;                           //@synthesize currentLocationAuthorizationStatus=_currentLocationAuthorizationStatus - In the implementation block
@property (nonatomic,retain) id<MKAnnotation> currentSelection;                                //@synthesize currentSelection=_currentSelection - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * currentSelectedGeotaggables; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)launchMapsAtCoordinate:(CLLocationCoordinate2D)arg1 withTitle:(id)arg2 ;
-(NSSet *)dataSources;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(PXPlacesImageCache *)cache;
-(id)init;
-(void)setChangeDelegate:(id<PXPlacesMapControllerChangeDelegate>)arg1 ;
-(void)setFocusDelegate:(id<PXPlacesMapControllerFocusDelegate>)arg1 ;
-(void)setMapView:(PXPlacesMapView *)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)setCache:(PXPlacesImageCache *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)mapViewWillStartLocatingUser:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(void)setDataSources:(NSSet *)arg1 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)setCurrentLocationAuthorizationStatus:(int)arg1 ;
-(int)currentLocationAuthorizationStatus;
-(BOOL)mapViewIsVisible;
-(id)createTrackingBarButtonItem;
-(void)setInitialEdgePadding:(UIEdgeInsets)arg1 ;
-(double)_defaultAnimationDuration;
-(void)setVisibleMapRelativeToViewPort:(id)arg1 andViewSize:(CGSize)arg2 forRenderer:(id)arg3 ;
-(void)setInitialCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)mapContainerViewDidDisappear;
-(id<PXPlacesMapControllerSelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<PXPlacesMapControllerSelectionDelegate>)arg1 ;
-(void)mapContainerViewWillDisappear;
-(void)mapContainerViewDidAppear;
-(void)mapContainerViewWillAppear;
-(void)loadView;
-(id<PXPlacesMapControllerFocusDelegate>)focusDelegate;
-(PXPlacesMapView *)mapView;
-(void)dealloc;
-(id<MKAnnotation>)currentSelection;
-(void)setCurrentSelection:(id<MKAnnotation>)arg1 ;
-(id<PXPlacesMapControllerChangeDelegate>)changeDelegate;
-(void)dataSource:(id)arg1 didChange:(id)arg2 ;
-(void)addPipeline:(id)arg1 ;
-(void)removePipeline:(id)arg1 ;
-(void)suspendPipelines;
-(void)resumePipelines:(/*^block*/id)arg1 ;
-(void)runPipelines;
-(id)visibleGeotaggableFromDataSource:(id)arg1 ;
-(void)focusOnGeotaggablesFromPipeline:(id)arg1 animated:(BOOL)arg2 ;
-(void)focusOnGeotaggablesFromPipelineImmediately:(id)arg1 ;
-(SCD_Struct_PX2)_mapRectForGeotaggablesFromPipeline:(id)arg1 fitAdjusted:(BOOL*)arg2 ;
-(SCD_Struct_PX2)mapRectForGeotaggablesFromDataSource:(id)arg1 renderer:(id)arg2 mapViewSize:(CGSize)arg3 fitAdjusted:(BOOL*)arg4 ;
-(SCD_Struct_PX2)mapRectForNearbyQueriesFromRect:(SCD_Struct_PX2)arg1 atScale:(double)arg2 targetViewSize:(CGSize)arg3 ;
-(void)_showDebugMapRect:(SCD_Struct_PX2)arg1 color:(id)arg2 ;
-(void)setVisibleMapRect:(SCD_Struct_PX2)arg1 forPipeline:(id)arg2 animated:(BOOL)arg3 ;
-(void)setVisibleMapRect:(SCD_Struct_PX2)arg1 forRenderer:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setVisibleMapRect:(SCD_Struct_PX2)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3 ;
-(SCD_Struct_PX2)_ensureMinimumSize:(SCD_Struct_PX2)arg1 ;
-(void)_updateMapWithAllDataSources:(/*^block*/id)arg1 ;
-(void)_updateMapWithDataSources:(id)arg1 dataSourceChangeTable:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)executePipeline:(id)arg1 dataSourceChange:(id)arg2 context:(id)arg3 ;
-(void)_updateMapWithDataSource:(id)arg1 dataSourceChange:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)_fadeInAnimationDuration;
-(double)_fadeOutAnimationDuration;
-(void)_executeUpdatePlanResults:(id)arg1 ;
-(double)_zPositionForAnnotationIndex:(long long)arg1 ;
-(NSOrderedSet *)currentSelectedGeotaggables;
-(id<PXPlacesMapControllerLoadingStateDelegate>)stateDelegate;
-(void)setStateDelegate:(id<PXPlacesMapControllerLoadingStateDelegate>)arg1 ;
-(CLLocationCoordinate2D)initialCenterCoordinate;
-(UIEdgeInsets)initialEdgePadding;
-(NSMapTable *)dataSourceToPipelineMap;
-(void)setDataSourceToPipelineMap:(NSMapTable *)arg1 ;
-(PXPlacesMapPipelineExecutionContext *)currentExecutionContext;
-(void)setCurrentExecutionContext:(PXPlacesMapPipelineExecutionContext *)arg1 ;
-(BOOL)pipelineExecutionAllowed;
-(void)setPipelineExecutionAllowed:(BOOL)arg1 ;
-(void)setMapViewIsVisible:(BOOL)arg1 ;
-(BOOL)signalFocusWhenMapViewBecomesVisible;
-(void)setSignalFocusWhenMapViewBecomesVisible:(BOOL)arg1 ;
-(SCD_Struct_PX2)signalFocusMapRect;
-(void)setSignalFocusMapRect:(SCD_Struct_PX2)arg1 ;
-(NSMutableDictionary *)showDebugMapRectColors;
-(void)setShowDebugMapRectColors:(NSMutableDictionary *)arg1 ;
@end

