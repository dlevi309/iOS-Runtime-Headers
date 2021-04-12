/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATPError : PBCodable <NSCopying> {

	long long _domainCode;
	int _code;
	NSString* _domain;
	NSString* _errorDescription;
	SCD_Struct_AT3 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasDomainCode; 
@property (assign,nonatomic) long long domainCode;                     //@synthesize domainCode=_domainCode - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                 //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(int)code;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)hasDomain;
-(NSString *)errorDescription;
-(void)setCode:(int)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)hasErrorDescription;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
-(void)setDomainCode:(long long)arg1 ;
-(void)setHasDomainCode:(BOOL)arg1 ;
-(BOOL)hasDomainCode;
-(long long)domainCode;
@end

