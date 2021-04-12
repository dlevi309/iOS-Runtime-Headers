/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPResponseOperationResultError;

@interface FCCKPResponseOperationResult : PBCodable <NSCopying> {

	int _code;
	FCCKPResponseOperationResultError* _error;
	SCD_Struct_FC4 _has;

}

@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                               //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) FCCKPResponseOperationResultError * error;              //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(FCCKPResponseOperationResultError *)arg1 ;
-(FCCKPResponseOperationResultError *)error;
-(void)setCode:(int)arg1 ;
-(id)description;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

