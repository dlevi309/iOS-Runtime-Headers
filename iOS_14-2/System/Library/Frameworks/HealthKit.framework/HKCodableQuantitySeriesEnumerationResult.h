/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_HK23 _has;

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
-(id)dictionaryRepresentation;
-(void)setSourceID:(long long)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(NSData *)uuid;
-(BOOL)hasStartTime;
-(void)setPersistentID:(long long)arg1 ;
-(BOOL)hasValue;
-(void)setStartTime:(double)arg1 ;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(long long)count;
-(long long)seriesIndex;
-(BOOL)hasQuantitySample;
-(void)setValue:(double)arg1 ;
-(NSData *)quantitySample;
-(void)setQuantitySample:(NSData *)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setHasValue:(BOOL)arg1 ;
-(long long)persistentID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(long long)sourceID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(double)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasPersistentID:(BOOL)arg1 ;
-(BOOL)hasPersistentID;
-(void)setDataTypeCode:(long long)arg1 ;
-(void)setHasDataTypeCode:(BOOL)arg1 ;
-(BOOL)hasDataTypeCode;
-(void)setHasSourceID:(BOOL)arg1 ;
-(BOOL)hasSourceID;
-(void)setSeriesIndex:(long long)arg1 ;
-(void)setHasSeriesIndex:(BOOL)arg1 ;
-(BOOL)hasSeriesIndex;
-(long long)dataTypeCode;
-(double)startTime;
-(double)value;
-(BOOL)hasEndTime;
-(BOOL)isEqual:(id)arg1 ;
@end

