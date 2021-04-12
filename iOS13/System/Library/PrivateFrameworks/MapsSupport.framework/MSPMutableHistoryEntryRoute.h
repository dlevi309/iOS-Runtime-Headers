/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntryRoute.h>

@protocol MSPRouteInformationSource;
@class GEOComposedWaypoint, GEOURLRouteHandle, NSString, NSDate;

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute> {

	id<MSPRouteInformationSource> _routeInformationSource;

}

@property (nonatomic,copy) id<MSPRouteInformationSource> routeInformationSource;                      //@synthesize routeInformationSource=_routeInformationSource - In the implementation block
@property (assign,getter=navigationWasInterrupted,nonatomic) BOOL navigationInterrupted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * usageDate; 
@property (nonatomic,readonly) BOOL tracksRAPReportingOnly; 
@property (nonatomic,readonly) long long transportType; 
@property (nonatomic,readonly) GEOComposedWaypoint * startWaypoint; 
@property (nonatomic,readonly) GEOComposedWaypoint * endWaypoint; 
@property (nonatomic,readonly) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) BOOL navigationWasInterrupted; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(long long)transportType;
-(id)initWithStorage:(id)arg1 ;
-(GEOURLRouteHandle *)routeHandle;
-(GEOComposedWaypoint *)startWaypoint;
-(GEOComposedWaypoint *)endWaypoint;
-(BOOL)navigationWasInterrupted;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(void)setNavigationInterrupted:(BOOL)arg1 ;
-(id)_routeRequestStorage;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(id<MSPRouteInformationSource>)routeInformationSource;
-(void)setRouteInformationSource:(id<MSPRouteInformationSource>)arg1 ;
@end

