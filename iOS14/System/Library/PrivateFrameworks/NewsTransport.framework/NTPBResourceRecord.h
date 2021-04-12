/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSString;

@interface NTPBResourceRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSString* _encoding;
	NSString* _mimeType;
	NSString* _url;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;              //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasMimeType; 
@property (nonatomic,retain) NSString * mimeType;                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) BOOL hasEncoding; 
@property (nonatomic,retain) NSString * encoding;                //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                     //@synthesize url=_url - In the implementation block
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(NSString *)mimeType;
-(void)setEncoding:(NSString *)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(NSString *)encoding;
-(void)mergeFrom:(id)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)url;
-(id)description;
-(BOOL)hasUrl;
-(BOOL)hasEncoding;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)hasMimeType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

