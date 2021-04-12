/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <TinCanShared/TinCanShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDTinCanAvailabilityState : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _tinCanAvailabilityState;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTinCanAvailabilityState; 
@property (assign,nonatomic) BOOL tinCanAvailabilityState;                 //@synthesize tinCanAvailabilityState=_tinCanAvailabilityState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTinCanAvailabilityState:(BOOL)arg1 ;
-(void)setHasTinCanAvailabilityState:(BOOL)arg1 ;
-(BOOL)hasTinCanAvailabilityState;
-(BOOL)tinCanAvailabilityState;
@end

