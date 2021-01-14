/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) unsigned long long firstTripID; 
@property (nonatomic,readonly) unsigned long long tripIDForNextUpcomingDeparture; 
@property (nonatomic,copy,readonly) NSArray * tripIDs; 
@property (nonatomic,copy,readonly) NSArray * upcomingTripIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * departureEntrys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)departureEntryType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addDepartureEntry:(id)arg1 ;
-(unsigned long long)departureEntrysCount;
-(void)clearDepartureEntrys;
-(id)departureEntryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)departureEntrys;
-(void)setDepartureEntrys:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(NSArray *)tripIDs;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)firstTripID;
-(NSArray *)upcomingTripIDs;
-(unsigned long long)tripIDForNextUpcomingDeparture;
@end

