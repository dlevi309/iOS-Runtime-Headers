/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)date;
-(long long)index;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDate;
-(void)setDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)hasIndex;
-(NRPBDeviceCollectionDiff *)diff;
-(void)setHasDate:(BOOL)arg1 ;
-(void)setDiff:(NRPBDeviceCollectionDiff *)arg1 ;
-(BOOL)hasDiff;
@end

