/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(void)setIv:(NSData *)arg1 ;
-(BOOL)hasIv;
-(NSData *)iv;
@end

