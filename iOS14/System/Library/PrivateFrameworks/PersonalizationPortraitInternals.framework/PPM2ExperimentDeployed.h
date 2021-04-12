/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2ExperimentDeployed : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	unsigned _delay;
	NSString* _namespaceName;
	SCD_Struct_PP1 _has;

}

@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) unsigned delay;                           //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) BOOL hasNamespaceName; 
@property (nonatomic,retain) NSString * namespaceName;                 //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(BOOL)hasActiveTreatments;
-(void)setDelay:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasDelay;
-(unsigned)delay;
-(void)setHasDelay:(BOOL)arg1 ;
-(BOOL)hasNamespaceName;
-(void)setNamespaceName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)namespaceName;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

