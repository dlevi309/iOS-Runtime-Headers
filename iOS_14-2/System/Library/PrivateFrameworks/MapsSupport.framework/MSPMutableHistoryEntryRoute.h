/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntryRoute.h>

@protocol MSPRouteInformationSource;
@class GEOComposedWaypoint, GEOURLRouteHandle, NSDate, NSString;

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute> {

	id<MSPRouteInformationSource> _routeInformationSource;

}

@property (nonatomic,copy) id<MSPRouteInformationSource> routeInformationSource;                      //@synthesize routeInformationSource=_routeInformationSource - In the implementation block
@property (assign,getter=navigationWasInterrupted,nonatomic) BOOL navigationInterrupted; 
@property (nonatomic,readonly) long long transportType; 
@property (nonatomic,readonly) GEOComposedWaypoint * startWaypoint; 
@property (nonatomic,readonly) GEOComposedWaypoint * endWaypoint; 
@property (nonatomic,readonly) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) BOOL navigationWasInterrupted; 
@property (nonatomic,copy,readonly) NSDate * usageDate; 
@property (nonatomic,readonly) BOOL tracksRAPReportingOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(id)initWithStorage:(id)arg1 ;
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(long long)transportType;
-(BOOL)navigationWasInterrupted;
-(void)setNavigationInterrupted:(BOOL)arg1 ;
-(id)_routeRequestStorage;
-(GEOURLRouteHandle *)routeHandle;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(id<MSPRouteInformationSource>)routeInformationSource;
-(void)setRouteInformationSource:(id<MSPRouteInformationSource>)arg1 ;
@end

