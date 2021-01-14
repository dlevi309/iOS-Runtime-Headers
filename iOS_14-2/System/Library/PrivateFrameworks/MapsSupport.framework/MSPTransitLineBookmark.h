/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPTransitStorageLine;

@interface MSPTransitLineBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	MSPTransitStorageLine* _transitLineStorage;

}

@property (nonatomic,readonly) BOOL hasTransitLineStorage; 
@property (nonatomic,retain) MSPTransitStorageLine * transitLineStorage;              //@synthesize transitLineStorage=_transitLineStorage - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(MSPTransitStorageLine *)transitLineStorage;
-(void)setTransitLineStorage:(MSPTransitStorageLine *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTransitLineStorage;
@end

