/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOABConfigValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _doubleValue;
	long long _intValue;
	NSString* _stringValue;
	BOOL _boolValue;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue; 
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue; 
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(double)doubleValue;
-(BOOL)boolValue;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stringValue;
-(void)setIntValue:(long long)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(long long)intValue;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

