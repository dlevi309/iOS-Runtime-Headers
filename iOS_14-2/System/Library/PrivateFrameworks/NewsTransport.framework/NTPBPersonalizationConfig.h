/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBBinningConfig, NTPBPersonalizationTreatment, NSMutableArray;

@interface NTPBPersonalizationConfig : PBCodable <NSCopying> {

	long long _moduloForHashing;
	NTPBBinningConfig* _binningConfig;
	NTPBPersonalizationTreatment* _defaultPersonalizationTreatment;
	NSMutableArray* _personalizationBuckets;
	NSMutableArray* _personalizationTreatments;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasBinningConfig; 
@property (nonatomic,retain) NTPBBinningConfig * binningConfig;                                           //@synthesize binningConfig=_binningConfig - In the implementation block
@property (assign,nonatomic) BOOL hasModuloForHashing; 
@property (assign,nonatomic) long long moduloForHashing;                                                  //@synthesize moduloForHashing=_moduloForHashing - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultPersonalizationTreatment; 
@property (nonatomic,retain) NTPBPersonalizationTreatment * defaultPersonalizationTreatment;              //@synthesize defaultPersonalizationTreatment=_defaultPersonalizationTreatment - In the implementation block
@property (nonatomic,retain) NSMutableArray * personalizationBuckets;                                     //@synthesize personalizationBuckets=_personalizationBuckets - In the implementation block
@property (nonatomic,retain) NSMutableArray * personalizationTreatments;                                  //@synthesize personalizationTreatments=_personalizationTreatments - In the implementation block
+(Class)personalizationBucketsType;
+(Class)personalizationTreatmentsType;
-(id)dictionaryRepresentation;
-(void)setModuloForHashing:(long long)arg1 ;
-(void)setHasModuloForHashing:(BOOL)arg1 ;
-(BOOL)hasModuloForHashing;
-(long long)moduloForHashing;
-(void)addPersonalizationBuckets:(id)arg1 ;
-(void)addPersonalizationTreatments:(id)arg1 ;
-(void)setDefaultPersonalizationTreatment:(NTPBPersonalizationTreatment *)arg1 ;
-(BOOL)hasDefaultPersonalizationTreatment;
-(void)clearPersonalizationBuckets;
-(unsigned long long)personalizationBucketsCount;
-(id)personalizationBucketsAtIndex:(unsigned long long)arg1 ;
-(void)clearPersonalizationTreatments;
-(NTPBBinningConfig *)binningConfig;
-(unsigned long long)personalizationTreatmentsCount;
-(id)personalizationTreatmentsAtIndex:(unsigned long long)arg1 ;
-(NTPBPersonalizationTreatment *)defaultPersonalizationTreatment;
-(NSMutableArray *)personalizationBuckets;
-(void)setPersonalizationBuckets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)personalizationTreatments;
-(void)setPersonalizationTreatments:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBinningConfig:(NTPBBinningConfig *)arg1 ;
-(id)description;
-(BOOL)hasBinningConfig;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

