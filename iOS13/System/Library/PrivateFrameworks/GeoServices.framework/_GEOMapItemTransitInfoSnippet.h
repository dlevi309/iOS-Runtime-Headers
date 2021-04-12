/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMapItemTransitInfo.h>

@class GEOPDTransitInfoSnippet, NSArray, NSString, NSDate, GEOComposedRoute;

@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo> {

	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	NSArray* _labelItems;
	NSString* _displayName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * departureSequences; 
@property (nonatomic,readonly) double timeToLive; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * lastFullScheduleValidDate; 
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
-(NSString *)title;
-(NSString *)displayName;
-(NSString *)subtitle;
-(double)timeToLive;
-(NSArray *)connections;
-(NSArray *)departureSequences;
-(NSArray *)lines;
-(GEOComposedRoute *)composedRoute;
-(NSArray *)incidents;
-(unsigned long long)linesCount;
-(unsigned long long)systemsCount;
-(NSArray *)systems;
-(id)initWithTransitInfoSnippet:(id)arg1 ;
-(NSArray *)labelItems;
-(BOOL)hasTransitIncidentComponent;
-(BOOL)isTransitIncidentsTTLExpired;
-(id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(id)linesForSystem:(id)arg1 ;
-(unsigned long long)numAdditionalDeparturesForSequence:(id)arg1 ;
-(id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(/*^block*/id)arg3 hasSequencesWithNoDirection:(out BOOL*)arg4 ;
-(id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out BOOL*)arg4 ;
-(id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(/*^block*/id)arg2 excludingIncidentEntities:(id)arg3 ;
-(id)allSequencesForSystem:(id)arg1 direction:(id)arg2 ;
-(id)headSignsForLine:(id)arg1 ;
-(NSDate *)lastFullScheduleValidDate;
-(NSArray *)transitTripStops;
@end

