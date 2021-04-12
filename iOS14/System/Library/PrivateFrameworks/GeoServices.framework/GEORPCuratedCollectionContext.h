/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEORPCuratedCollectionContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _placeEntityMuids;
	unsigned long long _curatedCollectionMuid;
	NSMutableArray* _imageInfos;
	NSString* _originalDescription;
	NSString* _originalName;
	NSString* _originalUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_curatedCollectionMuid : 1;
		unsigned read_unknownFields : 1;
		unsigned read_placeEntityMuids : 1;
		unsigned read_imageInfos : 1;
		unsigned read_originalDescription : 1;
		unsigned read_originalName : 1;
		unsigned read_originalUrl : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCuratedCollectionMuid; 
@property (assign,nonatomic) unsigned long long curatedCollectionMuid; 
@property (nonatomic,readonly) unsigned long long placeEntityMuidsCount; 
@property (nonatomic,readonly) unsigned long long* placeEntityMuids; 
@property (nonatomic,readonly) BOOL hasOriginalName; 
@property (nonatomic,retain) NSString * originalName; 
@property (nonatomic,readonly) BOOL hasOriginalUrl; 
@property (nonatomic,retain) NSString * originalUrl; 
@property (nonatomic,readonly) BOOL hasOriginalDescription; 
@property (nonatomic,retain) NSString * originalDescription; 
@property (nonatomic,retain) NSMutableArray * imageInfos; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)imageInfoType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)originalName;
-(NSString *)originalUrl;
-(NSString *)originalDescription;
-(void)setCuratedCollectionMuid:(unsigned long long)arg1 ;
-(void)setOriginalName:(NSString *)arg1 ;
-(void)addPlaceEntityMuid:(unsigned long long)arg1 ;
-(void)setOriginalUrl:(NSString *)arg1 ;
-(void)setOriginalDescription:(NSString *)arg1 ;
-(void)addImageInfo:(id)arg1 ;
-(unsigned long long)placeEntityMuidsCount;
-(void)clearPlaceEntityMuids;
-(unsigned long long)placeEntityMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageInfosCount;
-(void)clearImageInfos;
-(id)imageInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)curatedCollectionMuid;
-(void)setHasCuratedCollectionMuid:(BOOL)arg1 ;
-(BOOL)hasCuratedCollectionMuid;
-(unsigned long long*)placeEntityMuids;
-(void)setPlaceEntityMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasOriginalName;
-(BOOL)hasOriginalUrl;
-(BOOL)hasOriginalDescription;
-(void)setImageInfos:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)imageInfos;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

