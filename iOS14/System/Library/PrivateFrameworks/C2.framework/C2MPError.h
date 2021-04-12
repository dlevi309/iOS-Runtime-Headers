/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPError : PBCodable <NSCopying> {

	long long _errorCode;
	NSString* _errorDescription;
	NSString* _errorDomain;
	C2MPError* _underlyingError;
	SCD_Struct_C25 _has;

}

@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                   //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasUnderlyingError; 
@property (nonatomic,retain) C2MPError * underlyingError;              //@synthesize underlyingError=_underlyingError - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(void)setUnderlyingError:(C2MPError *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(C2MPError *)underlyingError;
-(long long)errorCode;
-(BOOL)hasErrorCode;
-(BOOL)hasErrorDescription;
-(id)description;
-(NSString *)errorDescription;
-(unsigned long long)hash;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasUnderlyingError;
@end

