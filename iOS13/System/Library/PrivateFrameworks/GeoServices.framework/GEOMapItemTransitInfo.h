/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray, NSString, GEOComposedRoute;


@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>
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
@required
-(NSString *)displayName;
-(NSArray *)connections;
-(NSArray *)lines;
-(GEOComposedRoute *)composedRoute;
-(NSArray *)incidents;
-(unsigned long long)linesCount;
-(unsigned long long)systemsCount;
-(NSArray *)systems;
-(NSArray *)labelItems;
-(BOOL)hasTransitIncidentComponent;
-(BOOL)isTransitIncidentsTTLExpired;
-(id)linesForSystem:(id)arg1;
-(NSArray *)transitTripStops;

@end

