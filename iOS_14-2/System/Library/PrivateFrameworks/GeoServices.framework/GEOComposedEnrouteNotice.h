/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOEnrouteNotice, NSArray, NSString, GEOComposedTrafficCamera, GEOComposedTrafficSignal, GEOComposedRouteAnnotation, GEOLatLng;

@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding> {

	GEOEnrouteNotice* _enrouteNotice;
	NSArray* _guidanceEvents;
	SCD_Struct_GE87 _routeCoordinate;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) GEOComposedTrafficCamera * trafficCamera; 
@property (nonatomic,readonly) GEOComposedTrafficSignal * trafficSignal; 
@property (nonatomic,readonly) GEOComposedRouteAnnotation * routeAnnotation; 
@property (nonatomic,readonly) BOOL hasHighlightDistance; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasGroupIdentifier; 
@property (nonatomic,readonly) unsigned groupIdentifier; 
@property (nonatomic,readonly) BOOL hasGroupItemHorizontalDisplayOrder; 
@property (nonatomic,readonly) unsigned groupItemHorizontalDisplayOrder; 
@property (nonatomic,readonly) BOOL hasGroupItemVerticalDisplayOrder; 
@property (nonatomic,readonly) unsigned groupItemVerticalDisplayOrder; 
@property (nonatomic,readonly) BOOL hasPriority; 
@property (nonatomic,readonly) unsigned priority; 
@property (nonatomic,readonly) NSArray * guidanceEvents;                                  //@synthesize guidanceEvents=_guidanceEvents - In the implementation block
@property (nonatomic,readonly) GEOLatLng * position; 
@property (nonatomic,readonly) SCD_Struct_GE87 routeCoordinate;                           //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)groupIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)groupItemVerticalDisplayOrder;
-(id)description;
-(unsigned)groupItemHorizontalDisplayOrder;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)guidanceEvents;
-(BOOL)hasPriority;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 ;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(BOOL)hasGroupItemHorizontalDisplayOrder;
-(BOOL)hasGroupItemVerticalDisplayOrder;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPosition:(id)arg5 ;
-(GEOComposedTrafficCamera *)trafficCamera;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPolylineCoordinate:(SCD_Struct_GE87)arg5 ;
-(GEOComposedTrafficSignal *)trafficSignal;
-(GEOComposedRouteAnnotation *)routeAnnotation;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)hasGroupIdentifier;
-(SCD_Struct_GE87)routeCoordinate;
-(unsigned)priority;
@end

