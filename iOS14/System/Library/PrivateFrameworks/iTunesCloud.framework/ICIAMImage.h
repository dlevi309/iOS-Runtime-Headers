/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMImage : PBCodable <NSCopying> {

	unsigned _height;
	NSString* _identifier;
	NSString* _uRL;
	unsigned _width;
	SCD_Struct_IC4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                     //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width;                     //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height;                    //@synthesize height=_height - In the implementation block
-(void)setHeight:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasURL;
-(unsigned)width;
-(BOOL)hasIdentifier;
-(BOOL)hasWidth;
-(void)setURL:(NSString *)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(NSString *)uRL;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)height;
-(id)description;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

