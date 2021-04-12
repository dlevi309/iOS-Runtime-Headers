/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(id)errorCodeAsString:(int)arg1 ;
-(int)StringAsErrorCode:(id)arg1 ;
-(void)setGenericErrorCode:(long long)arg1 ;
-(void)setHasGenericErrorCode:(BOOL)arg1 ;
-(BOOL)hasGenericErrorCode;
-(long long)genericErrorCode;
@end

