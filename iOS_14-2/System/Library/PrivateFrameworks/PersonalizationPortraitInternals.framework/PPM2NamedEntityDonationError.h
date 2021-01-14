/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2NamedEntityDonationError : PBCodable <NSCopying> {

	long long _errorCode;
	NSString* _errorMessage;
	int _source;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                           //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                  //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(id)dictionaryRepresentation;
-(int)StringAsSource:(id)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(BOOL)hasSource;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(NSString *)errorMessage;
-(BOOL)hasErrorCode;
-(void)setSource:(int)arg1 ;
-(BOOL)hasErrorMessage;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(void)setErrorMessage:(NSString *)arg1 ;
@end

