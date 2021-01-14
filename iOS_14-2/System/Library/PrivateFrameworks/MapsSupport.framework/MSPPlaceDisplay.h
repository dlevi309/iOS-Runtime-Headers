/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapItemStorage, NSString;

@interface MSPPlaceDisplay : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapItemStorage* _placeMapItemStorage;
	NSString* _supersededSearchIdentifier;

}

@property (nonatomic,readonly) BOOL hasPlaceMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * placeMapItemStorage;              //@synthesize placeMapItemStorage=_placeMapItemStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasSupersededSearchIdentifier; 
@property (nonatomic,retain) NSString * supersededSearchIdentifier;                //@synthesize supersededSearchIdentifier=_supersededSearchIdentifier - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPlaceMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setSupersededSearchIdentifier:(NSString *)arg1 ;
-(BOOL)hasPlaceMapItemStorage;
-(BOOL)hasSupersededSearchIdentifier;
-(GEOMapItemStorage *)placeMapItemStorage;
-(NSString *)supersededSearchIdentifier;
@end

