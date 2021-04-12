/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOTransitPath : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _legs;

}

@property (nonatomic,retain) NSMutableArray * legs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)legType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)legs;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)addLeg:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setLegs:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)legsCount;
-(void)clearLegs;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)legAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

