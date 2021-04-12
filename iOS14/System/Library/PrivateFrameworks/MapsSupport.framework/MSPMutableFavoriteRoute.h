/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoriteRoute.h>

@class GEOComposedWaypoint, GEOStorageRouteRequestStorage, NSString, NSUUID;

@interface MSPMutableFavoriteRoute : MSPMutableFavorite <MSPFavoriteRoute>

@property (nonatomic,copy) GEOStorageRouteRequestStorage * routeRequestStorage; 
@property (nonatomic,readonly) GEOComposedWaypoint * startWaypoint; 
@property (nonatomic,readonly) GEOComposedWaypoint * endWaypoint; 
@property (nonatomic,readonly) int transportType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * storageIdentifier; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(int)transportType;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
@end

