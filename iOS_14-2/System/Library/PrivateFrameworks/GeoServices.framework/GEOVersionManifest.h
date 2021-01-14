/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOVersionManifest : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _serviceVersions;

}

@property (nonatomic,retain) NSMutableArray * serviceVersions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)serviceVersionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setServiceVersions:(NSMutableArray *)arg1 ;
-(void)clearServiceVersions;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)serviceVersions;
-(unsigned long long)hash;
-(void)addServiceVersion:(id)arg1 ;
-(id)serviceVersionAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)serviceVersionsCount;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

