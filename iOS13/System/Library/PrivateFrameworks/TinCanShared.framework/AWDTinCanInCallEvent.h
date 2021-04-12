/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)eventType;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setOffsetTimeMs:(long long)arg1 ;
-(void)setHasOffsetTimeMs:(BOOL)arg1 ;
-(BOOL)hasOffsetTimeMs;
-(long long)offsetTimeMs;
@end

