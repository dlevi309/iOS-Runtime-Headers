/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying> {

	NSData* _wrappingKey;
	NSData* _wrappingKeyId;

}

@property (nonatomic,readonly) BOOL hasWrappingKeyId; 
@property (nonatomic,retain) NSData * wrappingKeyId;               //@synthesize wrappingKeyId=_wrappingKeyId - In the implementation block
@property (nonatomic,readonly) BOOL hasWrappingKey; 
@property (nonatomic,retain) NSData * wrappingKey;                 //@synthesize wrappingKey=_wrappingKey - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)wrappingKey;
-(void)setWrappingKeyId:(NSData *)arg1 ;
-(void)setWrappingKey:(NSData *)arg1 ;
-(BOOL)hasWrappingKeyId;
-(BOOL)hasWrappingKey;
-(NSData *)wrappingKeyId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

