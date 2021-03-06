/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceVersionType;
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
-(void)addServiceVersion:(id)arg1 ;
-(unsigned long long)serviceVersionsCount;
-(void)clearServiceVersions;
-(id)serviceVersionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)serviceVersions;
-(void)setServiceVersions:(NSMutableArray *)arg1 ;
@end

