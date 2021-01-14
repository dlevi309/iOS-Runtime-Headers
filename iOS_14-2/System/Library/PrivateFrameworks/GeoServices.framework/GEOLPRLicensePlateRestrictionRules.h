/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEOLPRLicensePlateRestrictionRules : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _licensePlateRegions;
	NSData* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _createTime;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSData * version; 
@property (assign,nonatomic) unsigned createTime; 
@property (nonatomic,retain) NSMutableArray * licensePlateRegions; 
+(Class)licensePlateRegionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)createTime;
-(void)setCreateTime:(unsigned)arg1 ;
-(void)addLicensePlateRegion:(id)arg1 ;
-(unsigned long long)licensePlateRegionsCount;
-(void)clearLicensePlateRegions;
-(id)licensePlateRegionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)licensePlateRegions;
-(void)setLicensePlateRegions:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

