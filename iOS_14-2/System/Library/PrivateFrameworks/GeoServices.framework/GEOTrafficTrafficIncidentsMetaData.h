/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTrafficTrafficIncidentsMetaData : PBCodable <NSCopying> {

	NSString* _archiveId;
	unsigned long long _archiveTime;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasArchiveId; 
@property (nonatomic,retain) NSString * archiveId; 
@property (assign,nonatomic) BOOL hasArchiveTime; 
@property (assign,nonatomic) unsigned long long archiveTime; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)archiveId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setArchiveId:(NSString *)arg1 ;
-(void)setArchiveTime:(unsigned long long)arg1 ;
-(BOOL)hasArchiveId;
-(unsigned long long)archiveTime;
-(void)setHasArchiveTime:(BOOL)arg1 ;
-(BOOL)hasArchiveTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

