/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableHealthObject, NSString;

@interface HDCodableSample : PBCodable <HDDecoding, NSCopying> {

	long long _dataType;
	double _endDate;
	double _startDate;
	HDCodableHealthObject* _object;
	SCD_Struct_HD12 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasObject; 
@property (nonatomic,retain) HDCodableHealthObject * object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL hasDataType; 
@property (assign,nonatomic) long long dataType;                          //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                              //@synthesize endDate=_endDate - In the implementation block
-(long long)dataType;
-(id)dictionaryRepresentation;
-(double)endDate;
-(void)setStartDate:(double)arg1 ;
-(double)startDate;
-(void)setDataType:(long long)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(void)setHasEndDate:(BOOL)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(HDCodableHealthObject *)object;
-(void)setObject:(HDCodableHealthObject *)arg1 ;
-(BOOL)hasDataType;
-(void)setHasDataType:(BOOL)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasObject;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndDate;
-(BOOL)applyToObject:(id)arg1 ;
@end

