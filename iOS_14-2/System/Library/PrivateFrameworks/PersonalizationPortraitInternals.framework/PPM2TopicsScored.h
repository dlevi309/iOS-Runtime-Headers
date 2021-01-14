/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2TopicsScored : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	NSString* _bundleId;
	unsigned _resultSizeLog10;
	BOOL _error;
	BOOL _exclusionSpec;
	BOOL _limitHit;
	BOOL _timeLimited;
	BOOL _timeSpec;
	SCD_Struct_PP5 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                      //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasResultSizeLog10; 
@property (assign,nonatomic) unsigned resultSizeLog10;                 //@synthesize resultSizeLog10=_resultSizeLog10 - In the implementation block
@property (assign,nonatomic) BOOL hasLimitHit; 
@property (assign,nonatomic) BOOL limitHit;                            //@synthesize limitHit=_limitHit - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSpec; 
@property (assign,nonatomic) BOOL timeSpec;                            //@synthesize timeSpec=_timeSpec - In the implementation block
@property (assign,nonatomic) BOOL hasTimeLimited; 
@property (assign,nonatomic) BOOL timeLimited;                         //@synthesize timeLimited=_timeLimited - In the implementation block
@property (assign,nonatomic) BOOL hasExclusionSpec; 
@property (assign,nonatomic) BOOL exclusionSpec;                       //@synthesize exclusionSpec=_exclusionSpec - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) BOOL error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(void)setTimeSpec:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(BOOL)hasActiveTreatments;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(BOOL)hasResultSizeLog10;
-(void)setHasError:(BOOL)arg1 ;
-(void)setResultSizeLog10:(unsigned)arg1 ;
-(BOOL)hasBundleId;
-(BOOL)hasTimeSpec;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasExclusionSpec;
-(void)setError:(BOOL)arg1 ;
-(void)setHasTimeLimited:(BOOL)arg1 ;
-(BOOL)error;
-(id)description;
-(void)setHasResultSizeLog10:(BOOL)arg1 ;
-(BOOL)timeSpec;
-(void)setHasTimeSpec:(BOOL)arg1 ;
-(unsigned)resultSizeLog10;
-(BOOL)exclusionSpec;
-(BOOL)hasLimitHit;
-(void)setHasExclusionSpec:(BOOL)arg1 ;
-(BOOL)hasTimeLimited;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setExclusionSpec:(BOOL)arg1 ;
-(void)setTimeLimited:(BOOL)arg1 ;
-(void)setLimitHit:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(void)setHasLimitHit:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)timeLimited;
-(BOOL)limitHit;
@end

