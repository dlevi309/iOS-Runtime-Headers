/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)wrappingKey;
-(NSData *)wrappingKeyId;
-(void)setWrappingKeyId:(NSData *)arg1 ;
-(void)setWrappingKey:(NSData *)arg1 ;
-(BOOL)hasWrappingKeyId;
-(BOOL)hasWrappingKey;
@end

