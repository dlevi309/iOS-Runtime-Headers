/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)isAirQualityShown;
-(void)setIsAirQualityShown:(BOOL)arg1 ;
-(void)setHasIsAirQualityShown:(BOOL)arg1 ;
-(BOOL)hasIsAirQualityShown;
-(BOOL)isWeatherShown;
-(void)setIsWeatherShown:(BOOL)arg1 ;
-(void)setHasIsWeatherShown:(BOOL)arg1 ;
-(BOOL)hasIsWeatherShown;
-(BOOL)isVenueExperienceShown;
-(void)setIsVenueExperienceShown:(BOOL)arg1 ;
-(void)setHasIsVenueExperienceShown:(BOOL)arg1 ;
-(BOOL)hasIsVenueExperienceShown;
-(BOOL)isLookAroundEntryIconShown;
-(void)setIsLookAroundEntryIconShown:(BOOL)arg1 ;
-(void)setHasIsLookAroundEntryIconShown:(BOOL)arg1 ;
-(BOOL)hasIsLookAroundEntryIconShown;
@end

