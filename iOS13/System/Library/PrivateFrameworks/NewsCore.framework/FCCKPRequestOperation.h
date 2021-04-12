/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(FCCKPOperation *)arg1 ;
-(FCCKPOperation *)request;
-(FCCKPRequestOperationHeader *)header;
-(void)setHeader:(FCCKPRequestOperationHeader *)arg1 ;
-(BOOL)hasRequest;
-(BOOL)hasHeader;
-(FCCKPQueryRetrieveRequest *)queryRetrieveRequest;
-(void)setQueryRetrieveRequest:(FCCKPQueryRetrieveRequest *)arg1 ;
-(void)setRecordRetrieveRequest:(FCCKPRecordRetrieveRequest *)arg1 ;
-(BOOL)hasRecordRetrieveRequest;
-(FCCKPRecordRetrieveRequest *)recordRetrieveRequest;
-(BOOL)hasQueryRetrieveRequest;
@end

