/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLPRLicensePlateStructure : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _supportedPlateAlphabetLetters;
	NSString* _supportedPlateNumerics;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasSupportedPlateAlphabetLetters; 
@property (nonatomic,retain) NSString * supportedPlateAlphabetLetters; 
@property (nonatomic,readonly) BOOL hasSupportedPlateNumerics; 
@property (nonatomic,retain) NSString * supportedPlateNumerics; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)supportedPlateAlphabetLetters;
-(NSString *)supportedPlateNumerics;
-(void)setSupportedPlateAlphabetLetters:(NSString *)arg1 ;
-(void)setSupportedPlateNumerics:(NSString *)arg1 ;
-(BOOL)hasSupportedPlateAlphabetLetters;
-(BOOL)hasSupportedPlateNumerics;
-(void)mergeFrom:(id)arg1 ;
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

