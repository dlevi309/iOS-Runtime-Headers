/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString, GEOMapItemStorage;

@interface MSPPinnedPlaceStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _contactStorages;
	NSString* _customName;
	NSString* _identifier;
	GEOMapItemStorage* _mapItemStorage;
	NSString* _originatingAddressString;
	int _type;
	BOOL _hidden;
	SCD_Struct_MS2 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomName; 
@property (nonatomic,retain) NSString * customName;                            //@synthesize customName=_customName - In the implementation block
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;               //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactStorages;                 //@synthesize contactStorages=_contactStorages - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingAddressString; 
@property (nonatomic,retain) NSString * originatingAddressString;              //@synthesize originatingAddressString=_originatingAddressString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)contactStorageType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasHidden;
-(BOOL)hidden;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasMapItemStorage;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasHidden:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(NSString *)customName;
-(void)setCustomName:(NSString *)arg1 ;
-(void)setOriginatingAddressString:(NSString *)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)originatingAddressString;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCustomName;
-(unsigned long long)contactStoragesCount;
-(NSMutableArray *)contactStorages;
-(BOOL)hasOriginatingAddressString;
-(void)addContactStorage:(id)arg1 ;
-(void)clearContactStorages;
-(id)contactStorageAtIndex:(unsigned long long)arg1 ;
-(void)setContactStorages:(NSMutableArray *)arg1 ;
@end

