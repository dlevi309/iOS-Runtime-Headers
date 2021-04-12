/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitVehicleEntries.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBUnknownFields, NSMutableArray, NSString;

@interface GEOTransitVehiclePositionInfo : PBCodable <GEOTransitVehicleEntries, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _departureEntrys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long firstTripID; 
@property (nonatomic,readonly) unsigned long long tripIDForNextUpcomingDeparture; 
@property (nonatomic,copy,readonly) NSArray * tripIDs; 
@property (nonatomic,copy,readonly) NSArray * upcomingTripIDs; 
@property (nonatomic,retain) NSMutableArray * departureEntrys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)departureEntryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSArray *)tripIDs;
-(void)addDepartureEntry:(id)arg1 ;
-(unsigned long long)departureEntrysCount;
-(void)clearDepartureEntrys;
-(id)departureEntryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)departureEntrys;
-(void)setDepartureEntrys:(NSMutableArray *)arg1 ;
-(unsigned long long)firstTripID;
-(unsigned long long)tripIDForNextUpcomingDeparture;
-(NSArray *)upcomingTripIDs;
@end

