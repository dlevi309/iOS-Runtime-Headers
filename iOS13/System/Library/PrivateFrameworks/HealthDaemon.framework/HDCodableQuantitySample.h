/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, HDCodableSample;

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying> {

	long long _count;
	double _max;
	double _min;
	double _mostRecent;
	double _mostRecentDate;
	double _mostRecentDuration;
	double _valueInCanonicalUnit;
	double _valueInOriginalUnit;
	NSString* _originalUnitString;
	NSMutableArray* _quantitySeriesDatas;
	HDCodableSample* _sample;
	BOOL _final;
	BOOL _frozen;
	SCD_Struct_HD39 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                          //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasValueInCanonicalUnit; 
@property (assign,nonatomic) double valueInCanonicalUnit;                       //@synthesize valueInCanonicalUnit=_valueInCanonicalUnit - In the implementation block
@property (assign,nonatomic) BOOL hasValueInOriginalUnit; 
@property (assign,nonatomic) double valueInOriginalUnit;                        //@synthesize valueInOriginalUnit=_valueInOriginalUnit - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalUnitString; 
@property (nonatomic,retain) NSString * originalUnitString;                     //@synthesize originalUnitString=_originalUnitString - In the implementation block
@property (assign,nonatomic) BOOL hasFrozen; 
@property (assign,nonatomic) BOOL frozen;                                       //@synthesize frozen=_frozen - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;                                   //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasFinal; 
@property (assign,nonatomic) BOOL final;                                        //@synthesize final=_final - In the implementation block
@property (assign,nonatomic) BOOL hasMin; 
@property (assign,nonatomic) double min;                                        //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) double max;                                        //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) BOOL hasMostRecent; 
@property (assign,nonatomic) double mostRecent;                                 //@synthesize mostRecent=_mostRecent - In the implementation block
@property (assign,nonatomic) BOOL hasMostRecentDate; 
@property (assign,nonatomic) double mostRecentDate;                             //@synthesize mostRecentDate=_mostRecentDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * quantitySeriesDatas;              //@synthesize quantitySeriesDatas=_quantitySeriesDatas - In the implementation block
@property (assign,nonatomic) BOOL hasMostRecentDuration; 
@property (assign,nonatomic) double mostRecentDuration;                         //@synthesize mostRecentDuration=_mostRecentDuration - In the implementation block
+(Class)quantitySeriesDataType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMax:(double)arg1 ;
-(double)max;
-(void)writeTo:(id)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)min;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setSample:(HDCodableSample *)arg1 ;
-(HDCodableSample *)sample;
-(void)setHasMin:(BOOL)arg1 ;
-(BOOL)hasMin;
-(void)setHasMax:(BOOL)arg1 ;
-(BOOL)hasMax;
-(BOOL)frozen;
-(double)mostRecentDate;
-(BOOL)final;
-(BOOL)hasSample;
-(BOOL)applyToObject:(id)arg1 ;
-(void)setValueInCanonicalUnit:(double)arg1 ;
-(void)setOriginalUnitString:(NSString *)arg1 ;
-(void)setValueInOriginalUnit:(double)arg1 ;
-(double)valueInCanonicalUnit;
-(NSMutableArray *)quantitySeriesDatas;
-(void)addQuantitySeriesData:(id)arg1 ;
-(unsigned long long)quantitySeriesDatasCount;
-(void)clearQuantitySeriesDatas;
-(id)quantitySeriesDataAtIndex:(unsigned long long)arg1 ;
-(void)setHasValueInCanonicalUnit:(BOOL)arg1 ;
-(BOOL)hasValueInCanonicalUnit;
-(void)setHasValueInOriginalUnit:(BOOL)arg1 ;
-(BOOL)hasValueInOriginalUnit;
-(BOOL)hasOriginalUnitString;
-(void)setHasFrozen:(BOOL)arg1 ;
-(BOOL)hasFrozen;
-(void)setFinal:(BOOL)arg1 ;
-(void)setHasFinal:(BOOL)arg1 ;
-(BOOL)hasFinal;
-(void)setMostRecent:(double)arg1 ;
-(void)setHasMostRecent:(BOOL)arg1 ;
-(BOOL)hasMostRecent;
-(void)setMostRecentDate:(double)arg1 ;
-(void)setHasMostRecentDate:(BOOL)arg1 ;
-(BOOL)hasMostRecentDate;
-(void)setMostRecentDuration:(double)arg1 ;
-(void)setHasMostRecentDuration:(BOOL)arg1 ;
-(BOOL)hasMostRecentDuration;
-(double)valueInOriginalUnit;
-(NSString *)originalUnitString;
-(double)mostRecent;
-(void)setQuantitySeriesDatas:(NSMutableArray *)arg1 ;
-(double)mostRecentDuration;
-(BOOL)_applyToDiscreteQuantitySeriesSample:(id)arg1 ;
-(BOOL)isSeries;
@end

