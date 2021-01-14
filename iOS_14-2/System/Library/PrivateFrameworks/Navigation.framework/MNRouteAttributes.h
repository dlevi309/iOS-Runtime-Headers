/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <GeoServices/GEORouteAttributes.h>
#import <libobjc.A.dylib/VGVirtualGarageObserver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, VGVehicle, NSError, VGVirtualGarage;

@interface MNRouteAttributes : GEORouteAttributes <VGVirtualGarageObserver, NSSecureCoding, NSCopying> {

	NSArray* _latLngs;
	BOOL _forceUpdate;
	BOOL _hasOpenedVirtualGarageConnection;
	BOOL _hasResolvedVehicle;
	VGVehicle* _vehicle;
	NSError* _vgError;
	VGVirtualGarage* _garage;
	BOOL _hasResolvedRules;
	NSArray* _lprRules;
	NSError* _lprError;

}

@property (assign,nonatomic) BOOL hasResolvedVehicle; 
@property (assign,nonatomic) BOOL hasResolvedRules;                //@synthesize hasResolvedRules=_hasResolvedRules - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)_loadLPRRulesForWaypoints:(id)arg1 forceUpdate:(BOOL)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(id)initWithAttributes:(id)arg1 waypoints:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)buildRouteAttributes:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)virtualGarageDidUpdate:(id)arg1 ;
-(void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithAttributes:(id)arg1 latLngs:(id)arg2 ;
-(BOOL)hasResolvedRules;
-(void)setHasResolvedRules:(BOOL)arg1 ;
-(void)_populateRouteAttributes:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)setHasResolvedVehicle:(BOOL)arg1 ;
-(BOOL)hasResolvedVehicle;
-(void)_loadRulesIfNecessary:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)_resolveSelectedVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

