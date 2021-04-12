/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)lines;
-(NSArray *)connections;
-(NSArray *)systems;
-(GEOComposedRoute *)composedRoute;
-(NSArray *)incidents;
-(BOOL)isTransitIncidentsTTLExpired;
-(BOOL)hasTransitIncidentComponent;
-(NSArray *)labelItems;
-(id)linesForSystem:(id)arg1;
-(NSArray *)transitTripStops;
-(unsigned long long)systemsCount;
-(NSString *)displayName;
-(unsigned long long)linesCount;

@end

