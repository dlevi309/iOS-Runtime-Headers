/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying> {

	double _date;
	long long _index;
	NRPBDeviceCollectionDiff* _diff;
	SCD_Struct_NR4 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) long long index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasDiff; 
@property (nonatomic,retain) NRPBDeviceCollectionDiff * diff;              //@synthesize diff=_diff - In the implementation block
-(id)dictionaryRepresentation;
-(long long)index;
-(BOOL)hasDate;
-(NRPBDeviceCollectionDiff *)diff;
-(void)setIndex:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(BOOL)hasIndex;
-(id)description;
-(BOOL)hasDiff;
-(void)setHasDate:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDiff:(NRPBDeviceCollectionDiff *)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

