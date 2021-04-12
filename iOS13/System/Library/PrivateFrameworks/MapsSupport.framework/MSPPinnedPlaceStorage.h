/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(PBUnknownFields *)unknownFields;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(BOOL)hasIdentifier;
-(BOOL)hasMapItemStorage;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)addContactStorage:(id)arg1 ;
-(void)setCustomName:(NSString *)arg1 ;
-(unsigned long long)contactStoragesCount;
-(void)clearContactStorages;
-(id)contactStorageAtIndex:(unsigned long long)arg1 ;
-(void)setOriginatingAddressString:(NSString *)arg1 ;
-(BOOL)hasCustomName;
-(BOOL)hasOriginatingAddressString;
-(NSString *)customName;
-(NSMutableArray *)contactStorages;
-(void)setContactStorages:(NSMutableArray *)arg1 ;
-(NSString *)originatingAddressString;
@end

