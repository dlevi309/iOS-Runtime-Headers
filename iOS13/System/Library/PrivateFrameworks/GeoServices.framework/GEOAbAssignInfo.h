/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasCreatedAtTimestamp; 
@property (assign,nonatomic) unsigned long long createdAtTimestamp; 
@property (nonatomic,readonly) BOOL hasAbAssignId; 
@property (nonatomic,retain) NSString * abAssignId; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) unsigned long long relativeTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(id)initWithAbAssignId:(id)arg1 createdAtDate:(id)arg2 ;
-(unsigned long long)relativeTimestamp;
-(void)setRelativeTimestamp:(unsigned long long)arg1 ;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasRelativeTimestamp;
-(NSString *)abAssignId;
-(void)setAbAssignId:(NSString *)arg1 ;
-(BOOL)hasAbAssignId;
-(unsigned long long)createdAtTimestamp;
-(void)setCreatedAtTimestamp:(unsigned long long)arg1 ;
-(void)setHasCreatedAtTimestamp:(BOOL)arg1 ;
-(BOOL)hasCreatedAtTimestamp;
-(void)refreshRelativeTimeStampWithEventTime:(double)arg1 ;
-(void)refreshRelativeTimeStamp;
@end

