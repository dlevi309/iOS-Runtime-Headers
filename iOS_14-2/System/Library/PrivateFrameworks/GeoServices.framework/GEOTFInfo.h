/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOTFInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _comment;
	NSString* _language;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) NSString * comment; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLanguage;
-(id)init;
-(id)jsonRepresentation;
-(void)setLanguage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasComment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

