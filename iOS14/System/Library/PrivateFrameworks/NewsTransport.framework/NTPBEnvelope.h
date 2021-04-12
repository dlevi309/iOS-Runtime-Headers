/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBEnvelope : PBCodable <NSCopying> {

	NSData* _content;
	int _contentType;
	int _contentTypeMinorVersion;
	int _contentTypePatchVersion;
	int _contentTypeVersion;
	NSData* _identifier;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) int contentTypeVersion;                       //@synthesize contentTypeVersion=_contentTypeVersion - In the implementation block
@property (assign,nonatomic) int contentType;                              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSData * content;                             //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) BOOL hasContentTypeMinorVersion; 
@property (assign,nonatomic) int contentTypeMinorVersion;                  //@synthesize contentTypeMinorVersion=_contentTypeMinorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasContentTypePatchVersion; 
@property (assign,nonatomic) int contentTypePatchVersion;                  //@synthesize contentTypePatchVersion=_contentTypePatchVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSData * identifier;                          //@synthesize identifier=_identifier - In the implementation block
-(id)dictionaryRepresentation;
-(void)setContentTypePatchVersion:(int)arg1 ;
-(void)setContentTypeVersion:(int)arg1 ;
-(NSData *)content;
-(void)setContent:(NSData *)arg1 ;
-(BOOL)hasIdentifier;
-(int)contentTypeMinorVersion;
-(int)contentType;
-(void)mergeFrom:(id)arg1 ;
-(int)contentTypePatchVersion;
-(id)description;
-(void)setContentTypeMinorVersion:(int)arg1 ;
-(void)setHasContentTypeMinorVersion:(BOOL)arg1 ;
-(void)setHasContentTypePatchVersion:(BOOL)arg1 ;
-(BOOL)hasContentTypeMinorVersion;
-(unsigned long long)hash;
-(void)setContentType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(NSData *)identifier;
-(BOOL)hasContentTypePatchVersion;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)contentTypeVersion;
-(BOOL)isEqual:(id)arg1 ;
@end

