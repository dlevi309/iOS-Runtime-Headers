/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasConcatenatingFormatStringsSupported; 
@property (assign,nonatomic) BOOL concatenatingFormatStringsSupported; 
@property (assign,nonatomic) BOOL hasTimestampFormatPatternSupported; 
@property (assign,nonatomic) BOOL timestampFormatPatternSupported; 
@property (assign,nonatomic) BOOL hasStyleSupported; 
@property (assign,nonatomic) BOOL styleSupported; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setConcatenatingFormatStringsSupported:(BOOL)arg1 ;
-(void)setTimestampFormatPatternSupported:(BOOL)arg1 ;
-(void)setStyleSupported:(BOOL)arg1 ;
-(BOOL)concatenatingFormatStringsSupported;
-(void)setHasConcatenatingFormatStringsSupported:(BOOL)arg1 ;
-(BOOL)hasConcatenatingFormatStringsSupported;
-(BOOL)timestampFormatPatternSupported;
-(void)setHasTimestampFormatPatternSupported:(BOOL)arg1 ;
-(BOOL)hasTimestampFormatPatternSupported;
-(BOOL)styleSupported;
-(void)setHasStyleSupported:(BOOL)arg1 ;
-(BOOL)hasStyleSupported;
@end

