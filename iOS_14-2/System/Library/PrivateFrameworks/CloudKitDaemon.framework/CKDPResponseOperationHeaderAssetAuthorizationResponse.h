/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPResponseOperationHeaderAssetAuthorizationResponse : PBCodable <NSCopying> {

	NSData* _authGetResponseBody;
	NSMutableArray* _responseHeaders;
	NSString* _responseUUID;

}

@property (nonatomic,readonly) BOOL hasResponseUUID; 
@property (nonatomic,retain) NSString * responseUUID;                       //@synthesize responseUUID=_responseUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthGetResponseBody; 
@property (nonatomic,retain) NSData * authGetResponseBody;                  //@synthesize authGetResponseBody=_authGetResponseBody - In the implementation block
@property (nonatomic,retain) NSMutableArray * responseHeaders;              //@synthesize responseHeaders=_responseHeaders - In the implementation block
+(Class)responseHeadersType;
-(id)dictionaryRepresentation;
-(NSString *)responseUUID;
-(void)mergeFrom:(id)arg1 ;
-(void)setResponseUUID:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResponseHeaders:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)responseHeaders;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addResponseHeaders:(id)arg1 ;
-(void)setAuthGetResponseBody:(NSData *)arg1 ;
-(unsigned long long)responseHeadersCount;
-(void)clearResponseHeaders;
-(id)responseHeadersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasResponseUUID;
-(BOOL)hasAuthGetResponseBody;
-(NSData *)authGetResponseBody;
@end

