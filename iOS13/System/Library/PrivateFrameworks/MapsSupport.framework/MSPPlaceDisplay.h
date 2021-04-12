/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setPlaceMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setSupersededSearchIdentifier:(NSString *)arg1 ;
-(BOOL)hasPlaceMapItemStorage;
-(BOOL)hasSupersededSearchIdentifier;
-(GEOMapItemStorage *)placeMapItemStorage;
-(NSString *)supersededSearchIdentifier;
@end

