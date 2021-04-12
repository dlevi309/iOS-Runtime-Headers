/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(HDCodableMedicalCoding *)severityCoding;
-(HDCodableMedicalDate *)onsetDate;
-(NSMutableArray *)manifestationCodings;
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

