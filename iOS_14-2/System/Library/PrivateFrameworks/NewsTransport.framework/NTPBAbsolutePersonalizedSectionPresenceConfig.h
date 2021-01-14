/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAbsolutePersonalizedSectionPresenceConfig : PBCodable <NSCopying> {

	double _cTRToHide;
	double _cTRToShow;
	double _minProbabilityToShow;
	unsigned long long _sectionEdition;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasCTRToShow; 
@property (assign,nonatomic) double cTRToShow;                               //@synthesize cTRToShow=_cTRToShow - In the implementation block
@property (assign,nonatomic) BOOL hasCTRToHide; 
@property (assign,nonatomic) double cTRToHide;                               //@synthesize cTRToHide=_cTRToHide - In the implementation block
@property (assign,nonatomic) BOOL hasMinProbabilityToShow; 
@property (assign,nonatomic) double minProbabilityToShow;                    //@synthesize minProbabilityToShow=_minProbabilityToShow - In the implementation block
@property (assign,nonatomic) BOOL hasSectionEdition; 
@property (assign,nonatomic) unsigned long long sectionEdition;              //@synthesize sectionEdition=_sectionEdition - In the implementation block
-(id)dictionaryRepresentation;
-(double)cTRToShow;
-(double)cTRToHide;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setHasCTRToShow:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCTRToShow;
-(void)setHasCTRToHide:(BOOL)arg1 ;
-(BOOL)hasCTRToHide;
-(void)setHasMinProbabilityToShow:(BOOL)arg1 ;
-(BOOL)hasMinProbabilityToShow;
-(void)setHasSectionEdition:(BOOL)arg1 ;
-(BOOL)hasSectionEdition;
-(double)minProbabilityToShow;
-(unsigned long long)sectionEdition;
-(void)writeTo:(id)arg1 ;
-(void)setCTRToShow:(double)arg1 ;
-(void)setCTRToHide:(double)arg1 ;
-(void)setMinProbabilityToShow:(double)arg1 ;
-(void)setSectionEdition:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

