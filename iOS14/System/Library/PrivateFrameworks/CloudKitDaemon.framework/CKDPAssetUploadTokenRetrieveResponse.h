/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {

	NSData* _authPutResponse;
	NSMutableArray* _contentResponseHeaders;
	NSMutableArray* _uploadTokens;

}

@property (nonatomic,retain) NSMutableArray * uploadTokens;                        //@synthesize uploadTokens=_uploadTokens - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthPutResponse; 
@property (nonatomic,retain) NSData * authPutResponse;                             //@synthesize authPutResponse=_authPutResponse - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentResponseHeaders;              //@synthesize contentResponseHeaders=_contentResponseHeaders - In the implementation block
+(Class)uploadTokensType;
+(Class)contentResponseHeadersType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)contentResponseHeaders;
-(void)setContentResponseHeaders:(NSMutableArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)authPutResponse;
-(void)setAuthPutResponse:(NSData *)arg1 ;
-(unsigned long long)contentResponseHeadersCount;
-(NSMutableArray *)uploadTokens;
-(void)addUploadTokens:(id)arg1 ;
-(void)addContentResponseHeaders:(id)arg1 ;
-(unsigned long long)uploadTokensCount;
-(void)clearUploadTokens;
-(id)uploadTokensAtIndex:(unsigned long long)arg1 ;
-(void)clearContentResponseHeaders;
-(id)contentResponseHeadersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAuthPutResponse;
-(void)setUploadTokens:(NSMutableArray *)arg1 ;
@end

