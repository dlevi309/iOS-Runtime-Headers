/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOSurchargeType.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString, NSString;

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _name;
	int _enumValue;
	struct {
		unsigned has_enumValue : 1;
	}  _flags;

}

@property (nonatomic,readonly) int value; 
@property (nonatomic,readonly) id<GEOServerFormattedString> formattedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasEnumValue; 
@property (assign,nonatomic) int enumValue; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEOFormattedString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setEnumValue:(int)arg1 ;
-(void)setHasEnumValue:(BOOL)arg1 ;
-(BOOL)hasEnumValue;
-(GEOFormattedString *)name;
-(NSString *)description;
-(id<GEOServerFormattedString>)formattedName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)enumValue;
-(void)setName:(GEOFormattedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)value;
-(BOOL)isEqual:(id)arg1 ;
@end

