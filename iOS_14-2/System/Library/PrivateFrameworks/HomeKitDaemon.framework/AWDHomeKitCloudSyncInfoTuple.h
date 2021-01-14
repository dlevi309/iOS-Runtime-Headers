/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitCloudSyncInfoTuple : PBCodable <NSCopying> {

	unsigned _count;
	NSString* _value;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                //@synthesize count=_count - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setValue:(NSString *)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

