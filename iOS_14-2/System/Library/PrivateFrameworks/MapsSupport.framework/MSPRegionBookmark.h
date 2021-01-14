/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion, NSString;

@interface MSPRegionBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _region;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasRegion; 
@property (nonatomic,retain) GEOMapRegion * region;                          //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOMapRegion *)region;
-(void)setRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasTitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRegion;
@end

