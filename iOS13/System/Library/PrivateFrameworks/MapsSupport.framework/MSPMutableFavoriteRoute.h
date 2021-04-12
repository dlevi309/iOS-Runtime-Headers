/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoriteRoute.h>

@class GEOComposedWaypoint, GEOStorageRouteRequestStorage, NSString, NSUUID;

@interface MSPMutableFavoriteRoute : MSPMutableFavorite <MSPFavoriteRoute>

@property (nonatomic,copy) GEOStorageRouteRequestStorage * routeRequestStorage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * storageIdentifier; 
@property (nonatomic,readonly) GEOComposedWaypoint * startWaypoint; 
@property (nonatomic,readonly) GEOComposedWaypoint * endWaypoint; 
@property (nonatomic,readonly) int transportType; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(int)transportType;
-(GEOComposedWaypoint *)startWaypoint;
-(GEOComposedWaypoint *)endWaypoint;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(id)initWithBookmarkStorage:(id)arg1 ;
@end

