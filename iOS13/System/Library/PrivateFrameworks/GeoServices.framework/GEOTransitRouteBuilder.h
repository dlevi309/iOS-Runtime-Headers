/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSMutableData, GEOMapRegion, GEOTransitSuggestedRoute, GEOTransitDecoderData;

@interface GEOTransitRouteBuilder : NSObject {

	NSMutableArray* _stepInfos;
	BOOL _usesZilch;
	unsigned long long _tripCount;
	NSMutableArray* _steps;
	NSMutableArray* _legs;
	NSMutableData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEOTransitSuggestedRoute* _suggestedRoute;
	GEOTransitDecoderData* _decoderData;

}

@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;              //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pointSections;                //@synthesize pointSections=_pointSections - In the implementation block
-(void)dealloc;
-(void)_reset;
-(void)buildRoute:(id)arg1 ;
-(id)initWithSuggestedRoute:(id)arg1 data:(id)arg2 ;
-(GEOMapRegion *)boundingMapRegion;
-(void)buildPointSectionsForRoute:(id)arg1 ;
-(NSMutableArray *)pointSections;
-(double)_buildPointSectionsForRoute:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5 ;
-(void)_buildRouteFromSections:(id)arg1 ;
-(void)_buildRouteFromSteps:(id)arg1 ;
-(void)_buildTransitStepInfo:(id)arg1 ;
-(void)_buildExpandedWalkingStepInfos:(id)arg1 ;
-(void)_buildArrivalStepInfo:(id)arg1 ;
-(unsigned long long)_stepCountForLegWithStartingStepIndex:(unsigned long long)arg1 ;
-(id)_stepForStepInfo:(unsigned long long)arg1 route:(id)arg2 ;
-(id)_legForSteps:(NSRange)arg1 route:(id)arg2 ;
-(NSRange)_appendPointData:(id)arg1 withContinuity:(BOOL)arg2 ;
-(NSRange)_validPointRangeForStepInfoIndex:(unsigned long long)arg1 ;
-(id)_walkingStepForStepInfoIndex:(unsigned long long)arg1 route:(id)arg2 validPointRange:(NSRange)arg3 ;
-(BOOL)_shouldBreakPointSectionAtStep:(id)arg1 previousStep:(id)arg2 ;
-(id)_sectionForRoute:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 bounds:(SCD_Struct_GE188)arg4 currentTransitLineColor:(id)arg5 startDistance:(double)arg6 ;
-(BOOL)_index:(unsigned long long)arg1 matchesArray:(unsigned*)arg2 ofLength:(unsigned long long)arg3 ;
@end

