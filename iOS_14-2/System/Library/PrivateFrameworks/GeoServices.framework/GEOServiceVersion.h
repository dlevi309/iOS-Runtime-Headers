/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOServiceVersion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _versionDomains;
	unsigned _minimumVersion;
	struct {
		unsigned has_minimumVersion : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * versionDomains; 
@property (assign,nonatomic) BOOL hasMinimumVersion; 
@property (assign,nonatomic) unsigned minimumVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)versionDomainType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)versionDomainsCount;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)versionDomains;
-(void)addVersionDomain:(id)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)clearVersionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)minimumVersion;
-(id)jsonRepresentation;
-(void)setMinimumVersion:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasMinimumVersion:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasMinimumVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

