/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDDirectionIntent;

@interface GEOPDAutocompleteEntryDirectionIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDDirectionIntent* _directionIntent;

}

@property (nonatomic,readonly) BOOL hasDirectionIntent; 
@property (nonatomic,retain) GEOPDDirectionIntent * directionIntent; 
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
-(GEOPDDirectionIntent *)directionIntent;
-(void)setDirectionIntent:(GEOPDDirectionIntent *)arg1 ;
-(BOOL)hasDirectionIntent;
@end

