/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying> {

	CKDPCodeFunctionInvokeResponseAttestationResponse* _attestationResponse;
	NSData* _serializedResult;

}

@property (nonatomic,readonly) BOOL hasSerializedResult; 
@property (nonatomic,retain) NSData * serializedResult;                                                            //@synthesize serializedResult=_serializedResult - In the implementation block
@property (nonatomic,readonly) BOOL hasAttestationResponse; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeResponseAttestationResponse * attestationResponse;              //@synthesize attestationResponse=_attestationResponse - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)serializedResult;
-(BOOL)hasAttestationResponse;
-(CKDPCodeFunctionInvokeResponseAttestationResponse *)attestationResponse;
-(void)setSerializedResult:(NSData *)arg1 ;
-(BOOL)hasSerializedResult;
-(void)setAttestationResponse:(CKDPCodeFunctionInvokeResponseAttestationResponse *)arg1 ;
@end

