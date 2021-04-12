/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPM2ObjectsDeleted : PBCodable <NSCopying> {

	int _domain;
	int _source;
	BOOL _error;
	SCD_Struct_PP3 _has;

}

@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) int domain;                  //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) BOOL error;                  //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)domain;
-(void)setSource:(int)arg1 ;
-(int)source;
-(BOOL)error;
-(void)setError:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setDomain:(int)arg1 ;
-(BOOL)hasDomain;
-(BOOL)hasError;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(id)domainAsString:(int)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(void)setHasDomain:(BOOL)arg1 ;
@end

