/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMapItemTransitInfo.h>

@class GEOPDTransitInfoSnippet, NSArray, NSString, GEOComposedRoute, NSDate;

@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo> {

	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	NSArray* _labelItems;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * systems; 
@property (nonatomic,readonly) unsigned long long systemsCount; 
@property (nonatomic,readonly) NSArray * lines; 
@property (nonatomic,readonly) unsigned long long linesCount; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isTransitIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasTransitIncidentComponent; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * transitTripStops; 
@property (nonatomic,readonly) GEOComposedRoute * composedRoute; 
@property (nonatomic,readonly) NSArray * departureSequences; 
@property (nonatomic,readonly) double timeToLive; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * lastFullScheduleValidDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(/*^block*/id)arg3 hasSequencesWithNoDirection:(out BOOL*)arg4 ;
-(NSArray *)lines;
-(NSArray *)connections;
-(NSString *)subtitle;
-(NSArray *)systems;
-(double)timeToLive;
-(NSArray *)departureSequences;
-(GEOComposedRoute *)composedRoute;
-(NSArray *)incidents;
-(BOOL)isTransitIncidentsTTLExpired;
-(BOOL)hasTransitIncidentComponent;
-(NSArray *)labelItems;
-(id)initWithTransitInfoSnippet:(id)arg1 ;
-(id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(id)linesForSystem:(id)arg1 ;
-(unsigned long long)numAdditionalDeparturesForSequence:(id)arg1 ;
-(id)allSequencesForSystem:(id)arg1 direction:(id)arg2 ;
-(id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out BOOL*)arg4 ;
-(NSArray *)transitTripStops;
-(id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(/*^block*/id)arg2 excludingIncidentEntities:(id)arg3 ;
-(id)headSignsForLine:(id)arg1 ;
-(NSDate *)lastFullScheduleValidDate;
-(unsigned long long)systemsCount;
-(NSString *)displayName;
-(unsigned long long)linesCount;
-(NSString *)title;
@end

