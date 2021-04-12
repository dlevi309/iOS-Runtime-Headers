/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT2 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)identifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(int)contentType;
-(void)setContentType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)content;
-(void)setContent:(NSData *)arg1 ;
-(BOOL)hasIdentifier;
-(void)setContentTypeMinorVersion:(int)arg1 ;
-(void)setHasContentTypeMinorVersion:(BOOL)arg1 ;
-(BOOL)hasContentTypeMinorVersion;
-(void)setContentTypePatchVersion:(int)arg1 ;
-(void)setHasContentTypePatchVersion:(BOOL)arg1 ;
-(BOOL)hasContentTypePatchVersion;
-(int)contentTypeVersion;
-(void)setContentTypeVersion:(int)arg1 ;
-(int)contentTypeMinorVersion;
-(int)contentTypePatchVersion;
@end

