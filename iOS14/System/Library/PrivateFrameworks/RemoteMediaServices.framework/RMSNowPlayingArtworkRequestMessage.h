/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSNowPlayingArtworkRequestMessage : PBCodable <NSCopying> {

	NSString* _artworkIdentifier;
	float _compressionQuality;
	unsigned _height;
	unsigned _width;
	SCD_Struct_RM5 _has;

}

@property (nonatomic,readonly) BOOL hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width;                            //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height;                           //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL hasCompressionQuality; 
@property (assign,nonatomic) float compressionQuality;                  //@synthesize compressionQuality=_compressionQuality - In the implementation block
-(void)setHeight:(unsigned)arg1 ;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)artworkIdentifier;
-(unsigned)width;
-(float)compressionQuality;
-(void)setCompressionQuality:(float)arg1 ;
-(BOOL)hasWidth;
-(void)setWidth:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)height;
-(id)description;
-(BOOL)hasArtworkIdentifier;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCompressionQuality:(BOOL)arg1 ;
-(BOOL)hasCompressionQuality;
@end

