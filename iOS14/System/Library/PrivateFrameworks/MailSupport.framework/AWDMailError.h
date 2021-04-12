/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailError : PBCodable <NSCopying> {

	long long _genericErrorCode;
	int _errorCode;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                           //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasGenericErrorCode; 
@property (assign,nonatomic) long long genericErrorCode;              //@synthesize genericErrorCode=_genericErrorCode - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)errorCode;
-(BOOL)hasErrorCode;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)errorCodeAsString:(int)arg1 ;
-(int)StringAsErrorCode:(id)arg1 ;
-(void)setGenericErrorCode:(long long)arg1 ;
-(void)setHasGenericErrorCode:(BOOL)arg1 ;
-(BOOL)hasGenericErrorCode;
-(long long)genericErrorCode;
@end

