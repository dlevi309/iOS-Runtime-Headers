/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORoutingSettingsCyclingPrefs, GEORoutingSettingsDrivingPrefs, GEORoutingSettingsVirtualGarageSetttings;

@interface GEOLogMsgStateRoutingSettings : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORoutingSettingsCyclingPrefs* _cyclingPrefs;
	GEORoutingSettingsDrivingPrefs* _drivingPrefs;
	GEORoutingSettingsVirtualGarageSetttings* _virtualGarageSettings;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_cyclingPrefs : 1;
		unsigned read_drivingPrefs : 1;
		unsigned read_virtualGarageSettings : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVirtualGarageSettings; 
@property (nonatomic,retain) GEORoutingSettingsVirtualGarageSetttings * virtualGarageSettings; 
@property (nonatomic,readonly) BOOL hasCyclingPrefs; 
@property (nonatomic,retain) GEORoutingSettingsCyclingPrefs * cyclingPrefs; 
@property (nonatomic,readonly) BOOL hasDrivingPrefs; 
@property (nonatomic,retain) GEORoutingSettingsDrivingPrefs * drivingPrefs; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(GEORoutingSettingsVirtualGarageSetttings *)virtualGarageSettings;
-(GEORoutingSettingsCyclingPrefs *)cyclingPrefs;
-(GEORoutingSettingsDrivingPrefs *)drivingPrefs;
-(void)setVirtualGarageSettings:(GEORoutingSettingsVirtualGarageSetttings *)arg1 ;
-(void)setCyclingPrefs:(GEORoutingSettingsCyclingPrefs *)arg1 ;
-(void)setDrivingPrefs:(GEORoutingSettingsDrivingPrefs *)arg1 ;
-(BOOL)hasVirtualGarageSettings;
-(BOOL)hasCyclingPrefs;
-(BOOL)hasDrivingPrefs;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

