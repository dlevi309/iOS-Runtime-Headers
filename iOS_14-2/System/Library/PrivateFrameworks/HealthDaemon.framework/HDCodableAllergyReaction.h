/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, HDCodableMedicalDate, HDCodableMedicalCoding;

@interface HDCodableAllergyReaction : PBCodable <NSCopying> {

	NSMutableArray* _manifestationCodings;
	HDCodableMedicalDate* _onsetDate;
	HDCodableMedicalCoding* _severityCoding;

}

@property (nonatomic,retain) NSMutableArray * manifestationCodings;                //@synthesize manifestationCodings=_manifestationCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasSeverityCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * severityCoding;              //@synthesize severityCoding=_severityCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasOnsetDate; 
@property (nonatomic,retain) HDCodableMedicalDate * onsetDate;                     //@synthesize onsetDate=_onsetDate - In the implementation block
+(Class)manifestationCodingsType;
-(id)dictionaryRepresentation;
-(HDCodableMedicalDate *)onsetDate;
-(HDCodableMedicalCoding *)severityCoding;
-(NSMutableArray *)manifestationCodings;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOnsetDate:(HDCodableMedicalDate *)arg1 ;
-(BOOL)hasOnsetDate;
-(BOOL)hasSeverityCoding;
-(void)addManifestationCodings:(id)arg1 ;
-(void)setSeverityCoding:(HDCodableMedicalCoding *)arg1 ;
-(unsigned long long)manifestationCodingsCount;
-(void)clearManifestationCodings;
-(id)manifestationCodingsAtIndex:(unsigned long long)arg1 ;
-(void)setManifestationCodings:(NSMutableArray *)arg1 ;
@end

