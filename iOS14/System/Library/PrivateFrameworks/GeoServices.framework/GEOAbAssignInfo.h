/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOAbAssignInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _abAssignId;
	unsigned long long _createdAtTimestamp;
	unsigned long long _relativeTimestamp;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasCreatedAtTimestamp; 
@property (assign,nonatomic) unsigned long long createdAtTimestamp; 
@property (nonatomic,readonly) BOOL hasAbAssignId; 
@property (nonatomic,retain) NSString * abAssignId; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) unsigned long long relativeTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setRelativeTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)createdAtTimestamp;
-(BOOL)hasRelativeTimestamp;
-(PBUnknownFields *)unknownFields;
-(NSString *)abAssignId;
-(unsigned long long)relativeTimestamp;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAbAssignId;
-(void)setAbAssignId:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasCreatedAtTimestamp:(BOOL)arg1 ;
-(void)setCreatedAtTimestamp:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)hasCreatedAtTimestamp;
-(unsigned long long)hash;
-(void)refreshRelativeTimeStampWithEventTime:(double)arg1 ;
-(id)initWithAbAssignId:(id)arg1 createdAtDate:(id)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)refreshRelativeTimeStamp;
@end

