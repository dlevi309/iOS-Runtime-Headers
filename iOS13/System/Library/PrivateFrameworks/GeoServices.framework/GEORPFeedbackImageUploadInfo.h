/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _imageUploadUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clientImageUuid : 1;
		unsigned read_imageId : 1;
		unsigned read_imageUploadUrl : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clientImageUuid : 1;
		unsigned wrote_imageId : 1;
		unsigned wrote_imageUploadUrl : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImageId; 
@property (nonatomic,retain) NSString * imageId; 
@property (nonatomic,readonly) BOOL hasClientImageUuid; 
@property (nonatomic,retain) NSString * clientImageUuid; 
@property (nonatomic,readonly) BOOL hasImageUploadUrl; 
@property (nonatomic,retain) NSString * imageUploadUrl; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)imageId;
-(void)setImageId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readImageId;
-(void)_readClientImageUuid;
-(void)_readImageUploadUrl;
-(NSString *)clientImageUuid;
-(NSString *)imageUploadUrl;
-(void)setClientImageUuid:(NSString *)arg1 ;
-(void)setImageUploadUrl:(NSString *)arg1 ;
-(BOOL)hasImageId;
-(BOOL)hasClientImageUuid;
-(BOOL)hasImageUploadUrl;
@end

