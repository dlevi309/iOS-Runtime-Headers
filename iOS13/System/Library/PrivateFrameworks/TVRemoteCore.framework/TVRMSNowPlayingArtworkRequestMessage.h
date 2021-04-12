/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVRMSNowPlayingArtworkRequestMessage : PBCodable <NSCopying> {

	NSString* _artworkIdentifier;
	float _compressionQuality;
	unsigned _height;
	unsigned _width;
	SCD_Struct_TV1 _has;

}

@property (nonatomic,readonly) BOOL hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width;                            //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height;                           //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL hasCompressionQuality; 
@property (assign,nonatomic) float compressionQuality;                  //@synthesize compressionQuality=_compressionQuality - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(float)compressionQuality;
-(void)setCompressionQuality:(float)arg1 ;
-(BOOL)hasArtworkIdentifier;
-(void)setHasCompressionQuality:(BOOL)arg1 ;
-(BOOL)hasCompressionQuality;
@end

