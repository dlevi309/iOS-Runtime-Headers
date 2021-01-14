/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableMedicalRecord;

@interface HDCodableUnknownRecord : PBCodable <HDDecoding, NSCopying> {

	NSString* _displayName;
	HDCodableMedicalRecord* _medicalRecord;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;              //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                              //@synthesize displayName=_displayName - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasMedicalRecord;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
@end

