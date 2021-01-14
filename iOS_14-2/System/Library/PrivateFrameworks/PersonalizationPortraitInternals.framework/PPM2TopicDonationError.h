/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2TopicDonationError : PBCodable <NSCopying> {

	long long _code;
	NSString* _activeTreatments;
	int _reason;
	int _source;
	SCD_Struct_PP4 _has;

}

@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) long long code;                           //@synthesize code=_code - In the implementation block
-(id)dictionaryRepresentation;
-(int)StringAsSource:(id)arg1 ;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(BOOL)hasReason;
-(id)sourceAsString:(int)arg1 ;
-(BOOL)hasSource;
-(BOOL)hasActiveTreatments;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(void)setCode:(long long)arg1 ;
-(void)setSource:(int)arg1 ;
-(id)description;
-(BOOL)hasCode;
-(int)reason;
-(void)setHasCode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(long long)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
@end

