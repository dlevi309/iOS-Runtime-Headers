/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _concatenatingFormatStringsSupported;
	BOOL _styleSupported;
	BOOL _timestampFormatPatternSupported;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasConcatenatingFormatStringsSupported; 
@property (assign,nonatomic) BOOL concatenatingFormatStringsSupported; 
@property (assign,nonatomic) BOOL hasTimestampFormatPatternSupported; 
@property (assign,nonatomic) BOOL timestampFormatPatternSupported; 
@property (assign,nonatomic) BOOL hasStyleSupported; 
@property (assign,nonatomic) BOOL styleSupported; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasTimestampFormatPatternSupported;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestampFormatPatternSupported:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasConcatenatingFormatStringsSupported:(BOOL)arg1 ;
-(BOOL)timestampFormatPatternSupported;
-(void)setConcatenatingFormatStringsSupported:(BOOL)arg1 ;
-(BOOL)concatenatingFormatStringsSupported;
-(id)description;
-(BOOL)hasStyleSupported;
-(unsigned long long)hash;
-(void)setStyleSupported:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasStyleSupported:(BOOL)arg1 ;
-(BOOL)hasConcatenatingFormatStringsSupported;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestampFormatPatternSupported:(BOOL)arg1 ;
-(BOOL)styleSupported;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

