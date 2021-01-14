/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOTransitIncidentItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _transitIncidentTitle;
	NSString* _transitLineMuid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasTransitIncidentTitle; 
@property (nonatomic,retain) NSString * transitIncidentTitle; 
@property (nonatomic,readonly) BOOL hasTransitLineMuid; 
@property (nonatomic,retain) NSString * transitLineMuid; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)transitIncidentTitle;
-(NSString *)transitLineMuid;
-(void)setTransitIncidentTitle:(NSString *)arg1 ;
-(void)setTransitLineMuid:(NSString *)arg1 ;
-(BOOL)hasTransitIncidentTitle;
-(BOOL)hasTransitLineMuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

