/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HKCodableQuantitySeriesEnumerationResult : PBCodable <NSCopying> {

	long long _count;
	long long _dataTypeCode;
	double _endTime;
	long long _persistentID;
	long long _seriesIndex;
	long long _sourceID;
	double _startTime;
	double _value;
	NSData* _quantitySample;
	NSData* _uuid;
	SCD_Struct_HK20 _has;

}

@property (assign,nonatomic) BOOL hasPersistentID; 
@property (assign,nonatomic) long long persistentID;                //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) BOOL hasDataTypeCode; 
@property (assign,nonatomic) long long dataTypeCode;                //@synthesize dataTypeCode=_dataTypeCode - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                          //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL hasSourceID; 
@property (assign,nonatomic) long long sourceID;                    //@synthesize sourceID=_sourceID - In the implementation block
@property (assign,nonatomic) BOOL hasSeriesIndex; 
@property (assign,nonatomic) long long seriesIndex;                 //@synthesize seriesIndex=_seriesIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasQuantitySample; 
@property (nonatomic,retain) NSData * quantitySample;               //@synthesize quantitySample=_quantitySample - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(void)setUuid:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)sourceID;
-(void)setSourceID:(long long)arg1 ;
-(BOOL)hasSourceID;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(BOOL)hasValue;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setHasValue:(BOOL)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasEndTime;
-(BOOL)hasUuid;
-(long long)dataTypeCode;
-(void)setDataTypeCode:(long long)arg1 ;
-(BOOL)hasPersistentID;
-(void)setHasPersistentID:(BOOL)arg1 ;
-(BOOL)hasQuantitySample;
-(NSData *)quantitySample;
-(long long)seriesIndex;
-(void)setQuantitySample:(NSData *)arg1 ;
-(void)setHasDataTypeCode:(BOOL)arg1 ;
-(BOOL)hasDataTypeCode;
-(void)setHasSourceID:(BOOL)arg1 ;
-(void)setSeriesIndex:(long long)arg1 ;
-(void)setHasSeriesIndex:(BOOL)arg1 ;
-(BOOL)hasSeriesIndex;
@end

