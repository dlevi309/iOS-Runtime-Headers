/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLocalizationCapabilities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _supportedPhoneticTypes;
	BOOL _supportsLocalizedTrafficControlIcons;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) unsigned long long supportedPhoneticTypesCount; 
@property (nonatomic,readonly) int* supportedPhoneticTypes; 
@property (assign,nonatomic) BOOL hasSupportsLocalizedTrafficControlIcons; 
@property (assign,nonatomic) BOOL supportsLocalizedTrafficControlIcons; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addSupportedPhoneticType:(int)arg1 ;
-(int*)supportedPhoneticTypes;
-(void)setHasSupportsLocalizedTrafficControlIcons:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)clearSupportedPhoneticTypes;
-(BOOL)supportsLocalizedTrafficControlIcons;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setSupportsLocalizedTrafficControlIcons:(BOOL)arg1 ;
-(int)StringAsSupportedPhoneticTypes:(id)arg1 ;
-(id)supportedPhoneticTypesAsString:(int)arg1 ;
-(void)setSupportedPhoneticTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(int)supportedPhoneticTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedPhoneticTypesCount;
-(BOOL)hasSupportsLocalizedTrafficControlIcons;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

