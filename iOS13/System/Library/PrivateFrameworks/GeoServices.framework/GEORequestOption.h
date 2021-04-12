/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE99 _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int value; 
@property (nonatomic,readonly) id<GEOServerFormattedString> formattedName; 
@property (assign,nonatomic) BOOL hasEnumValue; 
@property (assign,nonatomic) int enumValue; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEOFormattedString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(GEOFormattedString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(GEOFormattedString *)arg1 ;
-(int)value;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id<GEOServerFormattedString>)formattedName;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)enumValue;
-(void)setEnumValue:(int)arg1 ;
-(void)setHasEnumValue:(BOOL)arg1 ;
-(BOOL)hasEnumValue;
@end

