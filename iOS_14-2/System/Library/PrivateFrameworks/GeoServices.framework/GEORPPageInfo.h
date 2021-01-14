/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEORPPageInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _nextPageToken;
	unsigned _pageSize;
	struct {
		unsigned has_pageSize : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPageSize; 
@property (assign,nonatomic) unsigned pageSize; 
@property (nonatomic,readonly) BOOL hasNextPageToken; 
@property (nonatomic,retain) NSData * nextPageToken; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)nextPageToken;
-(void)setNextPageToken:(NSData *)arg1 ;
-(BOOL)hasNextPageToken;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)pageSize;
-(void)setPageSize:(unsigned)arg1 ;
-(void)setHasPageSize:(BOOL)arg1 ;
-(BOOL)hasPageSize;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

