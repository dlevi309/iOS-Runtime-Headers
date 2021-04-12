/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSUUID, PLLocationOfInterestLocation, NSMutableArray;

@interface PLLocationOfInterest : NSObject {

	NSUUID* _identifier;
	long long _type;
	double _typeRadius;
	PLLocationOfInterestLocation* _routineLocation;
	PLLocationOfInterestLocation* _mapItemLocation;
	NSMutableArray* _visits;

}

@property (nonatomic,retain) NSMutableArray * visits;                                       //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double typeRadius;                                           //@synthesize typeRadius=_typeRadius - In the implementation block
@property (nonatomic,readonly) PLLocationOfInterestLocation * routineLocation;              //@synthesize routineLocation=_routineLocation - In the implementation block
@property (nonatomic,readonly) PLLocationOfInterestLocation * mapItemLocation;              //@synthesize mapItemLocation=_mapItemLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(NSUUID *)identifier;
-(double)distanceFromLocation:(id)arg1 ;
-(NSMutableArray *)visits;
-(double)centerDistanceFromLocation:(id)arg1 ;
-(void)addVisit:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 typeRadius:(double)arg3 routineLocation:(id)arg4 mapItemLocation:(id)arg5 ;
-(void)removeVisit:(id)arg1 ;
-(double)typeRadius;
-(PLLocationOfInterestLocation *)routineLocation;
-(PLLocationOfInterestLocation *)mapItemLocation;
-(void)setVisits:(NSMutableArray *)arg1 ;
@end

