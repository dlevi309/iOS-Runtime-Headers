/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKCDPError, NSData;

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying> {

	NSMutableArray* _assetAuthorizationResponses;
	CKCDPError* _error;
	NSData* _routingToken;
	NSData* _serializedResult;

}

@property (nonatomic,readonly) BOOL hasSerializedResult; 
@property (nonatomic,retain) NSData * serializedResult;                                 //@synthesize serializedResult=_serializedResult - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) CKCDPError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetAuthorizationResponses;              //@synthesize assetAuthorizationResponses=_assetAuthorizationResponses - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                                     //@synthesize routingToken=_routingToken - In the implementation block
+(Class)assetAuthorizationResponsesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(CKCDPError *)arg1 ;
-(CKCDPError *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAssetAuthorizationResponses:(id)arg1 ;
-(unsigned long long)assetAuthorizationResponsesCount;
-(void)clearAssetAuthorizationResponses;
-(id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)assetAuthorizationResponses;
-(void)setAssetAuthorizationResponses:(NSMutableArray *)arg1 ;
-(NSData *)serializedResult;
-(void)setRoutingToken:(NSData *)arg1 ;
-(BOOL)hasRoutingToken;
-(NSData *)routingToken;
-(void)setSerializedResult:(NSData *)arg1 ;
-(BOOL)hasSerializedResult;
@end

