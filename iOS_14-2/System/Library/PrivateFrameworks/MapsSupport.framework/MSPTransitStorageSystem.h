/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitSystem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields, MSPTransitStorageArtwork;

@interface MSPTransitStorageSystem : PBCodable <GEOTransitSystem, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	MSPTransitStorageArtwork* _artwork;
	NSString* _name;
	SCD_Struct_MS3 _has;

}

@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                                //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) MSPTransitStorageArtwork * artwork;                     //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setMuid:(unsigned long long)arg1 ;
-(BOOL)hasName;
-(void)setArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(id<GEOTransitArtworkDataSource>)artwork;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)setName:(NSString *)arg1 ;
-(BOOL)hasArtwork;
-(id)initWithSystem:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

