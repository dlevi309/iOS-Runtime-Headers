/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying> {

	BOOL _isAirQualityShown;
	BOOL _isLookAroundEntryIconShown;
	BOOL _isVenueExperienceShown;
	BOOL _isWeatherShown;
	struct {
		unsigned has_isAirQualityShown : 1;
		unsigned has_isLookAroundEntryIconShown : 1;
		unsigned has_isVenueExperienceShown : 1;
		unsigned has_isWeatherShown : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIsAirQualityShown; 
@property (assign,nonatomic) BOOL isAirQualityShown; 
@property (assign,nonatomic) BOOL hasIsWeatherShown; 
@property (assign,nonatomic) BOOL isWeatherShown; 
@property (assign,nonatomic) BOOL hasIsVenueExperienceShown; 
@property (assign,nonatomic) BOOL isVenueExperienceShown; 
@property (assign,nonatomic) BOOL hasIsLookAroundEntryIconShown; 
@property (assign,nonatomic) BOOL isLookAroundEntryIconShown; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsLookAroundEntryIconShown:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasIsVenueExperienceShown:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasIsWeatherShown;
-(void)setIsWeatherShown:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)isLookAroundEntryIconShown;
-(BOOL)isWeatherShown;
-(BOOL)isVenueExperienceShown;
-(BOOL)hasIsLookAroundEntryIconShown;
-(void)setHasIsLookAroundEntryIconShown:(BOOL)arg1 ;
-(void)setHasIsAirQualityShown:(BOOL)arg1 ;
-(BOOL)isAirQualityShown;
-(void)setHasIsWeatherShown:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasIsVenueExperienceShown;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsAirQualityShown:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasIsAirQualityShown;
-(void)setIsVenueExperienceShown:(BOOL)arg1 ;
@end

