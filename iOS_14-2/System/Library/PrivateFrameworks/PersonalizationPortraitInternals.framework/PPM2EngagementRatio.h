/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2EngagementRatio : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	int _domain;
	unsigned _engagedCount;
	unsigned _evaluatedCount;
	unsigned _k;
	unsigned _rejectedCount;
	SCD_Struct_PP20 _has;

}

@property (assign,nonatomic) BOOL hasK; 
@property (assign,k,nonatomic) unsigned k;                             //@synthesize k=_k - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluatedCount; 
@property (assign,nonatomic) unsigned evaluatedCount;                  //@synthesize evaluatedCount=_evaluatedCount - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedCount; 
@property (assign,nonatomic) unsigned engagedCount;                    //@synthesize engagedCount=_engagedCount - In the implementation block
@property (assign,nonatomic) BOOL hasRejectedCount; 
@property (assign,nonatomic) unsigned rejectedCount;                   //@synthesize rejectedCount=_rejectedCount - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) int domain;                               //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(unsigned)k;
-(id)dictionaryRepresentation;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(BOOL)hasActiveTreatments;
-(BOOL)hasK;
-(void)mergeFrom:(id)arg1 ;
-(void)setK:(unsigned)arg1 ;
-(void)setDomain:(int)arg1 ;
-(int)domain;
-(id)description;
-(BOOL)hasDomain;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDomain:(BOOL)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasK:(BOOL)arg1 ;
-(void)setEvaluatedCount:(unsigned)arg1 ;
-(void)setHasEvaluatedCount:(BOOL)arg1 ;
-(BOOL)hasEvaluatedCount;
-(unsigned)evaluatedCount;
-(void)setEngagedCount:(unsigned)arg1 ;
-(void)setHasEngagedCount:(BOOL)arg1 ;
-(BOOL)hasEngagedCount;
-(void)setRejectedCount:(unsigned)arg1 ;
-(void)setHasRejectedCount:(BOOL)arg1 ;
-(BOOL)hasRejectedCount;
-(unsigned)engagedCount;
-(unsigned)rejectedCount;
@end

