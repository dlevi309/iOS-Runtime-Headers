/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HKHealthWrapCodableMessageKey : PBCodable <NSCopying> {

	NSData* _iv;
	NSData* _key;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSData * key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasIv; 
@property (nonatomic,retain) NSData * iv;                //@synthesize iv=_iv - In the implementation block
-(BOOL)hasKey;
-(NSData *)iv;
-(id)dictionaryRepresentation;
-(BOOL)hasIv;
-(void)setIv:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

