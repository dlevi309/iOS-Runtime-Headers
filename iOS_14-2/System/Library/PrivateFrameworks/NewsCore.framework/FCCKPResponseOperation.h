/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPQueryRetrieveResponse, FCCKPRecordRetrieveResponse, FCCKPOperation, FCCKPResponseOperationResult;

@interface FCCKPResponseOperation : PBCodable <NSCopying> {

	unsigned _operationCost;
	FCCKPQueryRetrieveResponse* _queryRetrieveResponse;
	FCCKPRecordRetrieveResponse* _recordRetrieveResponse;
	FCCKPOperation* _response;
	FCCKPResponseOperationResult* _result;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasRecordRetrieveResponse; 
@property (nonatomic,retain) FCCKPRecordRetrieveResponse * recordRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasQueryRetrieveResponse; 
@property (nonatomic,retain) FCCKPQueryRetrieveResponse * queryRetrieveResponse; 
@property (assign,nonatomic) BOOL hasOperationCost; 
@property (assign,nonatomic) unsigned operationCost;                                            //@synthesize operationCost=_operationCost - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) FCCKPOperation * response;                                         //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasResult; 
@property (nonatomic,retain) FCCKPResponseOperationResult * result;                             //@synthesize result=_result - In the implementation block
-(void)setResult:(FCCKPResponseOperationResult *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(BOOL)hasRecordRetrieveResponse;
-(BOOL)hasResponse;
-(void)setRecordRetrieveResponse:(FCCKPRecordRetrieveResponse *)arg1 ;
-(BOOL)hasOperationCost;
-(void)mergeFrom:(id)arg1 ;
-(void)setQueryRetrieveResponse:(FCCKPQueryRetrieveResponse *)arg1 ;
-(void)setHasOperationCost:(BOOL)arg1 ;
-(id)description;
-(void)setOperationCost:(unsigned)arg1 ;
-(FCCKPOperation *)response;
-(void)setResponse:(FCCKPOperation *)arg1 ;
-(FCCKPQueryRetrieveResponse *)queryRetrieveResponse;
-(unsigned long long)hash;
-(unsigned)operationCost;
-(FCCKPResponseOperationResult *)result;
-(BOOL)readFrom:(id)arg1 ;
-(FCCKPRecordRetrieveResponse *)recordRetrieveResponse;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasQueryRetrieveResponse;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

