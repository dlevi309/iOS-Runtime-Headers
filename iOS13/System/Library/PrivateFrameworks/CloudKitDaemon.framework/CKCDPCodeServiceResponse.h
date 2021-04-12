/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKCDPError, NSData;

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying> {

	NSMutableArray* _assetAuthorizationResponses;
	CKCDPError* _error;
	NSData* _serializedResult;

}

@property (nonatomic,readonly) BOOL hasSerializedResult; 
@property (nonatomic,retain) NSData * serializedResult;                                 //@synthesize serializedResult=_serializedResult - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) CKCDPError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetAuthorizationResponses;              //@synthesize assetAuthorizationResponses=_assetAuthorizationResponses - In the implementation block
+(Class)assetAuthorizationResponsesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKCDPError *)error;
-(void)setError:(CKCDPError *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)addAssetAuthorizationResponses:(id)arg1 ;
-(unsigned long long)assetAuthorizationResponsesCount;
-(void)clearAssetAuthorizationResponses;
-(id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)assetAuthorizationResponses;
-(void)setAssetAuthorizationResponses:(NSMutableArray *)arg1 ;
-(NSData *)serializedResult;
-(void)setSerializedResult:(NSData *)arg1 ;
-(BOOL)hasSerializedResult;
@end

