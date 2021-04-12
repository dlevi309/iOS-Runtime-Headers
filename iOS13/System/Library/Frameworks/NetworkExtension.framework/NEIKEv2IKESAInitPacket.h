/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2NotifyPayload, NEIKEv2IKESAPayload, NEIKEv2KeyExchangePayload, NEIKEv2NoncePayload, NSArray;

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet {

	NEIKEv2NotifyPayload* _cookie;
	NEIKEv2IKESAPayload* _sa;
	NEIKEv2KeyExchangePayload* _ke;
	NEIKEv2NoncePayload* _nonce;
	NSArray* _vendorIDs;

}

@property (retain) NEIKEv2NotifyPayload * cookie;               //@synthesize cookie=_cookie - In the implementation block
@property (retain) NEIKEv2IKESAPayload * sa;                    //@synthesize sa=_sa - In the implementation block
@property (retain) NEIKEv2KeyExchangePayload * ke;              //@synthesize ke=_ke - In the implementation block
@property (retain) NEIKEv2NoncePayload * nonce;                 //@synthesize nonce=_nonce - In the implementation block
@property (retain) NSArray * vendorIDs;                         //@synthesize vendorIDs=_vendorIDs - In the implementation block
+(id)copyTypeDescription;
+(id)createIKESAInitForInitiatorIKESA:(id)arg1 ;
+(id)createIKESAInitResponse:(id)arg1 errorCode:(unsigned long long)arg2 errorData:(id)arg3 ;
+(id)createIKESAInitResponse:(id)arg1 ikeSA:(id)arg2 ;
+(unsigned long long)exchangeType;
+(BOOL)encryptPayloads;
-(NEIKEv2NoncePayload *)nonce;
-(void)setNonce:(NEIKEv2NoncePayload *)arg1 ;
-(void)setCookie:(NEIKEv2NotifyPayload *)arg1 ;
-(NEIKEv2IKESAPayload *)sa;
-(NEIKEv2NotifyPayload *)cookie;
-(void)setKe:(NEIKEv2KeyExchangePayload *)arg1 ;
-(NEIKEv2KeyExchangePayload *)ke;
-(BOOL)validateSAInitAsInitiator:(id)arg1 ;
-(BOOL)validateSAInitAsResponder:(id)arg1 sendInvalidKE:(BOOL*)arg2 ;
-(void)setSa:(NEIKEv2IKESAPayload *)arg1 ;
-(NSArray *)vendorIDs;
-(void)setVendorIDs:(NSArray *)arg1 ;
-(void)gatherPayloads;
-(void)filloutPayloads;
@end

