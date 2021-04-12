/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VKRouteOverlay;
@class MKMapCamera, UITraitCollection, VKRouteContext, GEOComposedRoute, GEOApplicationAuditToken, MKPointOfInterestFilter, NSArray;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying> {

	MKMapCamera* _camera;
	SCD_Struct_MK6 _mapRect;
	SCD_Struct_MK15 _region;
	unsigned long long _mapType;
	long long _mode;
	BOOL _showsPointLabels;
	BOOL _showsBuildings;
	BOOL _showsNightMode;
	BOOL _showsAppleLogo;
	BOOL _rendersInBackground;
	BOOL _useSnapshotService;
	BOOL _snapshotServiceSerialPerProcess;
	CGSize _size;
	UITraitCollection* _traitCollection;
	UIEdgeInsets _edgeInsets;
	unsigned long long _signpostId;
	VKRouteContext* _routeContext;
	id<VKRouteOverlay> _routeOverlay;
	GEOComposedRoute* _composedRouteForRouteLine;
	GEOApplicationAuditToken* _auditToken;
	BOOL _usingRect;
	BOOL _showsVenues;
	unsigned char _searchResultsType;
	MKPointOfInterestFilter* _pointOfInterestFilter;
	NSArray* _annotationViews;
	NSArray* _customFeatureAnnotations;

}

@property (nonatomic,readonly) BOOL usingRect;                                                                                                                      //@synthesize usingRect=_usingRect - In the implementation block
@property (getter=_viewportMode,nonatomic,readonly) long long viewportMode;                                                                                         //@synthesize mode=_mode - In the implementation block
@property (assign,setter=_setShowsNightMode:,getter=_showsNightMode,nonatomic) BOOL showsNightMode;                                                                 //@synthesize showsNightMode=_showsNightMode - In the implementation block
@property (assign,setter=_setShowsVenues:,getter=_showsVenues,nonatomic) BOOL showsVenues;                                                                          //@synthesize showsVenues=_showsVenues - In the implementation block
@property (assign,setter=_setShowsPointLabels:,getter=_showsPointLabels,nonatomic) BOOL showsPointLabels;                                                           //@synthesize showsPointLabels=_showsPointLabels - In the implementation block
@property (assign,setter=_setShowsAppleLogo:,getter=_showsAppleLogo,nonatomic) BOOL showsAppleLogo;                                                                 //@synthesize showsAppleLogo=_showsAppleLogo - In the implementation block
@property (assign,setter=_setRendersInBackground:,getter=_rendersInBackground,nonatomic) BOOL rendersInBackground;                                                  //@synthesize rendersInBackground=_rendersInBackground - In the implementation block
@property (assign,setter=_setUseSnapshotService:,getter=_useSnapshotService,nonatomic) BOOL useSnapshotService;                                                     //@synthesize useSnapshotService=_useSnapshotService - In the implementation block
@property (assign,setter=_setSnapshotServiceSerialPerProcess:,getter=_snapshotServiceSerialPerProcess,nonatomic) BOOL snapshotServiceSerialPerProcess;              //@synthesize snapshotServiceSerialPerProcess=_snapshotServiceSerialPerProcess - In the implementation block
@property (assign,setter=_setEdgeInsets:,getter=_edgeInsets,nonatomic) UIEdgeInsets edgeInsets;                                                                     //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) unsigned long long signpostId;                                                                                                         //@synthesize signpostId=_signpostId - In the implementation block
@property (setter=_setComposedRouteForRouteLine:,getter=_composedRouteForRouteLine,nonatomic,retain) GEOComposedRoute * composedRouteForRouteLine;                  //@synthesize composedRouteForRouteLine=_composedRouteForRouteLine - In the implementation block
@property (setter=_setRouteContext:,getter=_routeContext,nonatomic,retain) VKRouteContext * routeContext;                                                           //@synthesize routeContext=_routeContext - In the implementation block
@property (setter=_setRouteOverlay:,getter=_routeOverlay,nonatomic,retain) id<VKRouteOverlay> routeOverlay;                                                         //@synthesize routeOverlay=_routeOverlay - In the implementation block
@property (nonatomic,copy) NSArray * annotationViews;                                                                                                               //@synthesize annotationViews=_annotationViews - In the implementation block
@property (assign,setter=_setSearchResultsType:,getter=_searchResultsType,nonatomic) unsigned char searchResultsType;                                               //@synthesize searchResultsType=_searchResultsType - In the implementation block
@property (setter=_setCustomFeatureAnnotations:,getter=_customFeatureAnnotations,nonatomic,copy) NSArray * customFeatureAnnotations;                                //@synthesize customFeatureAnnotations=_customFeatureAnnotations - In the implementation block
@property (setter=_setAuditToken:,getter=_auditToken,nonatomic,retain) GEOApplicationAuditToken * auditToken;                                                       //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy) MKMapCamera * camera;                                                                                                                    //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK6 mapRect;                                                                                                                //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK9 region;                                                                                                                 //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                                                                                                            //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,copy) MKPointOfInterestFilter * pointOfInterestFilter;                                                                                         //@synthesize pointOfInterestFilter=_pointOfInterestFilter - In the implementation block
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings;                                                                                                                   //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                                                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale; 
@property (nonatomic,copy) UITraitCollection * traitCollection;                                                                                                     //@synthesize traitCollection=_traitCollection - In the implementation block
+(BOOL)supportsSecureCoding;
-(SCD_Struct_MK6)mapRect;
-(MKMapCamera *)camera;
-(BOOL)_useSnapshotService;
-(UITraitCollection *)traitCollection;
-(unsigned char)_searchResultsType;
-(SCD_Struct_MK9)region;
-(void)_setCustomFeatureAnnotations:(id)arg1 ;
-(id)_routeOverlay;
-(void)_setShowsNightMode:(BOOL)arg1 ;
-(void)setRegion:(SCD_Struct_MK9)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)init;
-(void)_setRouteOverlay:(id)arg1 ;
-(id)_auditToken;
-(unsigned long long)mapType;
-(void)_setAuditToken:(id)arg1 ;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(NSArray *)annotationViews;
-(CGSize)size;
-(void)setAnnotationViews:(NSArray *)arg1 ;
-(void)_setRendersInBackground:(BOOL)arg1 ;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)_showsAppleLogo;
-(id)_routeContext;
-(BOOL)_snapshotServiceSerialPerProcess;
-(void)_setShowsPointLabels:(BOOL)arg1 ;
-(BOOL)_showsPointLabels;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(long long)_viewportMode;
-(BOOL)showsPointsOfInterest;
-(void)_setComposedRouteForRouteLine:(id)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setPointOfInterestFilter:(MKPointOfInterestFilter *)arg1 ;
-(void)_setRouteContext:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)usingRect;
-(void)_setSearchResultsType:(unsigned char)arg1 ;
-(UIEdgeInsets)_edgeInsets;
-(void)_setShowsVenues:(BOOL)arg1 ;
-(id)_composedRouteForRouteLine;
-(void)setSignpostId:(unsigned long long)arg1 ;
-(void)_setShowsAppleLogo:(BOOL)arg1 ;
-(void)_setSnapshotServiceSerialPerProcess:(BOOL)arg1 ;
-(BOOL)_showsVenues;
-(void)_setUseSnapshotService:(BOOL)arg1 ;
-(id)_customFeatureAnnotations;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(unsigned long long)signpostId;
-(void)_setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)showsBuildings;
-(void)setMapRect:(SCD_Struct_MK6)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_rendersInBackground;
-(BOOL)_showsNightMode;
-(MKPointOfInterestFilter *)pointOfInterestFilter;
@end

