/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBPersonalizationBucket : PBCodable <NSCopying> {

	long long _maximum;
	long long _minimum;
	long long _treatmentId;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasMinimum; 
@property (assign,nonatomic) long long minimum;                  //@synthesize minimum=_minimum - In the implementation block
@property (assign,nonatomic) BOOL hasMaximum; 
@property (assign,nonatomic) long long maximum;                  //@synthesize maximum=_maximum - In the implementation block
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (assign,nonatomic) long long treatmentId;              //@synthesize treatmentId=_treatmentId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)minimum;
-(void)setMinimum:(long long)arg1 ;
-(long long)maximum;
-(void)setMaximum:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTreatmentId:(long long)arg1 ;
-(void)setHasTreatmentId:(BOOL)arg1 ;
-(BOOL)hasTreatmentId;
-(long long)treatmentId;
-(void)setHasMinimum:(BOOL)arg1 ;
-(BOOL)hasMinimum;
-(void)setHasMaximum:(BOOL)arg1 ;
-(BOOL)hasMaximum;
@end

