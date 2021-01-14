/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying> {

	unsigned long long _lastAccessed;
	NSData* _key;
	NSData* _value;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSData * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSData * value;                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasLastAccessed; 
@property (assign,nonatomic) unsigned long long lastAccessed;              //@synthesize lastAccessed=_lastAccessed - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setLastAccessed:(unsigned long long)arg1 ;
-(unsigned long long)lastAccessed;
-(void)setValue:(NSData *)arg1 ;
-(id)description;
-(NSData *)key;
-(unsigned long long)hash;
-(void)setHasLastAccessed:(BOOL)arg1 ;
-(BOOL)hasLastAccessed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(NSData *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

