/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <TinCanShared/TinCanShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDTinCanInCallEvent : PBCodable <NSCopying> {

	long long _offsetTimeMs;
	unsigned _eventType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasOffsetTimeMs; 
@property (assign,nonatomic) long long offsetTimeMs;              //@synthesize offsetTimeMs=_offsetTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                  //@synthesize eventType=_eventType - In the implementation block
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(void)setEventType:(unsigned)arg1 ;
-(unsigned)eventType;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOffsetTimeMs:(long long)arg1 ;
-(void)setHasOffsetTimeMs:(BOOL)arg1 ;
-(BOOL)hasOffsetTimeMs;
-(long long)offsetTimeMs;
@end

