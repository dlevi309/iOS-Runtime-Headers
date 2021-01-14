/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOSentinelTile : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _resourceName;
	int _type;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * resourceName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSString *)resourceName;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setResourceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

