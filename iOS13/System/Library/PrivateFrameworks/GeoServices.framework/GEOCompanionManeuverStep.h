/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@required
-(int)transportType;
-(int)maneuverType;
-(unsigned long long)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned long long)arg1;
-(void)addManeuverName:(id)arg1;
-(unsigned long long)junctionElementsCount;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned long long)arg1;
-(void)addSignpost:(id)arg1;
-(NSMutableArray *)maneuverNames;
-(NSMutableArray *)signposts;
-(void)setManeuverType:(int)arg1;
-(void)setHasManeuverType:(BOOL)arg1;
-(BOOL)hasManeuverType;
-(void)setManeuverNames:(id)arg1;
-(int)junctionType;
-(void)setJunctionType:(int)arg1;
-(void)setHasJunctionType:(BOOL)arg1;
-(BOOL)hasJunctionType;
-(GEOJunctionElement*)junctionElements;
-(void)setSignposts:(id)arg1;

@end

