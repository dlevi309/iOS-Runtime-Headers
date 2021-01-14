/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRequestOperationHeader, FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPOperation;

@interface FCCKPRequestOperation : PBCodable <NSCopying> {

	FCCKPRequestOperationHeader* _header;
	FCCKPQueryRetrieveRequest* _queryRetrieveRequest;
	FCCKPRecordRetrieveRequest* _recordRetrieveRequest;
	FCCKPOperation* _request;

}

@property (nonatomic,readonly) BOOL hasRecordRetrieveRequest; 
@property (nonatomic,retain) FCCKPRecordRetrieveRequest * recordRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasQueryRetrieveRequest; 
@property (nonatomic,retain) FCCKPQueryRetrieveRequest * queryRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasHeader; 
@property (nonatomic,retain) FCCKPRequestOperationHeader * header;                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) FCCKPOperation * request;                                        //@synthesize request=_request - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHeader:(FCCKPRequestOperationHeader *)arg1 ;
-(BOOL)hasQueryRetrieveRequest;
-(BOOL)hasRequest;
-(void)setRequest:(FCCKPOperation *)arg1 ;
-(FCCKPQueryRetrieveRequest *)queryRetrieveRequest;
-(void)setQueryRetrieveRequest:(FCCKPQueryRetrieveRequest *)arg1 ;
-(FCCKPRequestOperationHeader *)header;
-(void)mergeFrom:(id)arg1 ;
-(FCCKPOperation *)request;
-(BOOL)hasHeader;
-(id)description;
-(BOOL)hasRecordRetrieveRequest;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRecordRetrieveRequest:(FCCKPRecordRetrieveRequest *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(FCCKPRecordRetrieveRequest *)recordRetrieveRequest;
@end

