/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSMutableArray;


@protocol GEOCompanionManeuverStep <NSObject>
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> maneuverArtworkOverride; 
@required
-(int)transportType;
-(int)maneuverType;
-(GEOJunctionElement*)junctionElements;
-(int)junctionType;
-(unsigned long long)junctionElementsCount;
-(void)setJunctionType:(int)arg1;
-(void)addManeuverName:(id)arg1;
-(void)addSignpost:(id)arg1;
-(unsigned long long)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned long long)arg1;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned long long)arg1;
-(void)setHasJunctionType:(BOOL)arg1;
-(BOOL)hasJunctionType;
-(NSMutableArray *)maneuverNames;
-(void)setManeuverNames:(id)arg1;
-(void)setSignposts:(id)arg1;
-(NSMutableArray *)signposts;
-(id<GEOTransitArtworkDataSource>)maneuverArtworkOverride;
-(void)setManeuverType:(int)arg1;
-(void)setHasManeuverType:(BOOL)arg1;
-(BOOL)hasManeuverType;

@end

