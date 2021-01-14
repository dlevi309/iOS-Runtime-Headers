/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying> {

	int _code;
	CKDPResponseOperationResultError* _error;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                              //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) CKDPResponseOperationResultError * error;              //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(CKDPResponseOperationResultError *)arg1 ;
-(CKDPResponseOperationResultError *)error;
-(void)setCode:(int)arg1 ;
-(id)description;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(int)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)codeAsString:(int)arg1 ;
-(int)StringAsCode:(id)arg1 ;
@end

