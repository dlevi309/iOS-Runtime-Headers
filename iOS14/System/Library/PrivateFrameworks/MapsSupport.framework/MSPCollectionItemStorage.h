/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface MSPCollectionItemStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _contents;
	NSData* _contentsTimestamp;
	NSData* _position;
	NSData* _positionTimestamp;
	NSData* _storageIdentifier;

}

@property (nonatomic,readonly) BOOL hasStorageIdentifier; 
@property (nonatomic,retain) NSData * storageIdentifier;                     //@synthesize storageIdentifier=_storageIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasContents; 
@property (nonatomic,retain) NSData * contents;                              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) BOOL hasContentsTimestamp; 
@property (nonatomic,retain) NSData * contentsTimestamp;                     //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) NSData * position;                              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL hasPositionTimestamp; 
@property (nonatomic,retain) NSData * positionTimestamp;                     //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)hasPosition;
-(NSData *)contents;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(NSData *)position;
-(NSData *)positionTimestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setStorageIdentifier:(NSData *)arg1 ;
-(NSData *)storageIdentifier;
-(void)setContents:(NSData *)arg1 ;
-(void)setPosition:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasContents;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)contentsTimestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContentsTimestamp:(NSData *)arg1 ;
-(void)setPositionTimestamp:(NSData *)arg1 ;
-(BOOL)hasStorageIdentifier;
-(BOOL)hasContentsTimestamp;
-(BOOL)hasPositionTimestamp;
@end

