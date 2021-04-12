/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <FTServices/FTIDSMessage.h>

@class PDSProtoBatchRegisterReq, PDSProtoBatchRegisterResp;

@interface PDSRegisterMessage : FTIDSMessage {

	PDSProtoBatchRegisterReq* _protoRequest;
	PDSProtoBatchRegisterResp* _protoResponse;
	unsigned long long _regReason;

}

@property (nonatomic,retain) PDSProtoBatchRegisterReq * protoRequest;                //@synthesize protoRequest=_protoRequest - In the implementation block
@property (nonatomic,retain) PDSProtoBatchRegisterResp * protoResponse;              //@synthesize protoResponse=_protoResponse - In the implementation block
@property (assign,nonatomic) unsigned long long regReason;                           //@synthesize regReason=_regReason - In the implementation block
-(BOOL)requiresPushTokenKeys;
-(BOOL)wantsUDID;
-(double)anisetteHeadersTimeout;
-(id)messageBodyDataOverride;
-(id)overrideContentType;
-(id)parsedIDSMessageResult;
-(BOOL)wantsClientInfo;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(id)additionalMessageHeaders;
-(void)handleResponseBody:(id)arg1 ;
-(BOOL)wantsIDSProtocolVersion;
-(id)bagKey;
-(void)setProtoRequest:(PDSProtoBatchRegisterReq *)arg1 ;
-(unsigned long long)regReason;
-(void)setRegReason:(unsigned long long)arg1 ;
-(PDSProtoBatchRegisterResp *)protoResponse;
-(PDSProtoBatchRegisterReq *)protoRequest;
-(void)setProtoResponse:(PDSProtoBatchRegisterResp *)arg1 ;
@end

