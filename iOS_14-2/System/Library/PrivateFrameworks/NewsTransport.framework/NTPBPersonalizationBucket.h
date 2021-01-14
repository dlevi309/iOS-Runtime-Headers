/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBPersonalizationBucket : PBCodable <NSCopying> {

	long long _maximum;
	long long _minimum;
	long long _treatmentId;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasMinimum; 
@property (assign,nonatomic) long long minimum;                  //@synthesize minimum=_minimum - In the implementation block
@property (assign,nonatomic) BOOL hasMaximum; 
@property (assign,nonatomic) long long maximum;                  //@synthesize maximum=_maximum - In the implementation block
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (assign,nonatomic) long long treatmentId;              //@synthesize treatmentId=_treatmentId - In the implementation block
-(id)dictionaryRepresentation;
-(long long)maximum;
-(long long)minimum;
-(void)setMinimum:(long long)arg1 ;
-(void)setMaximum:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)treatmentId;
-(void)setTreatmentId:(long long)arg1 ;
-(id)description;
-(void)setHasTreatmentId:(BOOL)arg1 ;
-(void)setHasMinimum:(BOOL)arg1 ;
-(BOOL)hasMinimum;
-(void)setHasMaximum:(BOOL)arg1 ;
-(BOOL)hasMaximum;
-(BOOL)hasTreatmentId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

