/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPFeedbackImageUploadInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _clientImageUuid;
	NSString* _imageId;
	NSString* _imageUploadHttpMethod;
	NSString* _imageUploadUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clientImageUuid : 1;
		unsigned read_imageId : 1;
		unsigned read_imageUploadHttpMethod : 1;
		unsigned read_imageUploadUrl : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImageId; 
@property (nonatomic,retain) NSString * imageId; 
@property (nonatomic,readonly) BOOL hasClientImageUuid; 
@property (nonatomic,retain) NSString * clientImageUuid; 
@property (nonatomic,readonly) BOOL hasImageUploadUrl; 
@property (nonatomic,retain) NSString * imageUploadUrl; 
@property (nonatomic,readonly) BOOL hasImageUploadHttpMethod; 
@property (nonatomic,retain) NSString * imageUploadHttpMethod; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)imageId;
-(void)mergeFrom:(id)arg1 ;
-(void)setImageId:(NSString *)arg1 ;
-(NSString *)clientImageUuid;
-(void)setClientImageUuid:(NSString *)arg1 ;
-(BOOL)hasClientImageUuid;
-(NSString *)imageUploadUrl;
-(NSString *)imageUploadHttpMethod;
-(void)setImageUploadUrl:(NSString *)arg1 ;
-(void)setImageUploadHttpMethod:(NSString *)arg1 ;
-(BOOL)hasImageUploadUrl;
-(BOOL)hasImageUploadHttpMethod;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasImageId;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

