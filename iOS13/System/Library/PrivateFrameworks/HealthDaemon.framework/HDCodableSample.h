/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HD3 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableHealthObject *)object;
-(void)setObject:(HDCodableHealthObject *)arg1 ;
-(double)startDate;
-(double)endDate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(long long)dataType;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setDataType:(long long)arg1 ;
-(BOOL)hasObject;
-(void)setHasDataType:(BOOL)arg1 ;
-(BOOL)hasDataType;
-(BOOL)applyToObject:(id)arg1 ;
@end

