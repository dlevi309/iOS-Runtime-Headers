/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTrafficTrafficIncidentsMetaData : PBCodable <NSCopying> {

	NSString* _archiveId;
	unsigned long long _archiveTime;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,readonly) BOOL hasArchiveId; 
@property (nonatomic,retain) NSString * archiveId; 
@property (assign,nonatomic) BOOL hasArchiveTime; 
@property (assign,nonatomic) unsigned long long archiveTime; 
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
-(NSString *)archiveId;
-(void)setArchiveId:(NSString *)arg1 ;
-(BOOL)hasArchiveId;
-(unsigned long long)archiveTime;
-(void)setArchiveTime:(unsigned long long)arg1 ;
-(void)setHasArchiveTime:(BOOL)arg1 ;
-(BOOL)hasArchiveTime;
@end

