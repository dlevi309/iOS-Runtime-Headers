/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOWiFiPasspointInfo : PBCodable <NSCopying> {

	NSString* _venueName;
	int _networkType;
	int _venueGroup;
	unsigned _venueType;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType; 
@property (assign,nonatomic) BOOL hasVenueGroup; 
@property (assign,nonatomic) int venueGroup; 
@property (assign,nonatomic) BOOL hasVenueType; 
@property (assign,nonatomic) unsigned venueType; 
@property (nonatomic,readonly) BOOL hasVenueName; 
@property (nonatomic,retain) NSString * venueName; 
+(BOOL)isValid:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(int)venueGroup;
-(id)jsonRepresentation;
-(BOOL)hasNetworkType;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(id)description;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)venueType;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)venueName;
-(void)writeTo:(id)arg1 ;
-(void)setVenueGroup:(int)arg1 ;
-(void)setVenueType:(unsigned)arg1 ;
-(BOOL)hasVenueType;
-(void)setHasVenueGroup:(BOOL)arg1 ;
-(BOOL)hasVenueGroup;
-(void)setHasVenueType:(BOOL)arg1 ;
-(id)venueGroupAsString:(int)arg1 ;
-(int)StringAsVenueGroup:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setVenueName:(NSString *)arg1 ;
-(BOOL)hasVenueName;
-(BOOL)isEqual:(id)arg1 ;
@end

