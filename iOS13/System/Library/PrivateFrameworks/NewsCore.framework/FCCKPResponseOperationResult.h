/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPResponseOperationResultError;

@interface FCCKPResponseOperationResult : PBCodable <NSCopying> {

	int _code;
	FCCKPResponseOperationResultError* _error;
	SCD_Struct_FC1 _has;

}

@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                               //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) FCCKPResponseOperationResultError * error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)code;
-(FCCKPResponseOperationResultError *)error;
-(void)setError:(FCCKPResponseOperationResultError *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)setCode:(int)arg1 ;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
@end

