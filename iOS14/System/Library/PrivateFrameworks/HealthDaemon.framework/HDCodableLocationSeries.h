/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, HDCodableSample, NSString;

@interface HDCodableLocationSeries : PBCodable <HDDecoding, NSCopying> {

	NSData* _continuationUUID;
	NSMutableArray* _locationDatas;
	HDCodableSample* _sample;
	BOOL _final;
	BOOL _frozen;
	SCD_Struct_HD11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                    //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasFrozen; 
@property (assign,nonatomic) BOOL frozen;                                 //@synthesize frozen=_frozen - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationUUID; 
@property (nonatomic,retain) NSData * continuationUUID;                   //@synthesize continuationUUID=_continuationUUID - In the implementation block
@property (assign,nonatomic) BOOL hasFinal; 
@property (assign,nonatomic) BOOL final;                                  //@synthesize final=_final - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationDatas;              //@synthesize locationDatas=_locationDatas - In the implementation block
+(Class)locationDataType;
-(void)setFrozen:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)final;
-(HDCodableSample *)sample;
-(void)setFinal:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)frozen;
-(NSString *)description;
-(unsigned long long)hash;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasFinal;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(void)setHasFrozen:(BOOL)arg1 ;
-(BOOL)hasFrozen;
-(void)setHasFinal:(BOOL)arg1 ;
-(void)addLocationData:(id)arg1 ;
-(void)setContinuationUUID:(NSData *)arg1 ;
-(unsigned long long)locationDatasCount;
-(void)clearLocationDatas;
-(id)locationDataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasContinuationUUID;
-(NSData *)continuationUUID;
-(NSMutableArray *)locationDatas;
-(void)setLocationDatas:(NSMutableArray *)arg1 ;
@end

