/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2ChildSAPayload, NEIKEv2InitiatorIdentifierPayload, NEIKEv2ResponderIdentifierPayload, NSArray, NEIKEv2AuthPayload, NEIKEv2EAPPayload, NEIKEv2ConfigPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2ResponderTrafficSelectorPayload;

@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet {

	NEIKEv2ChildSAPayload* _sa;
	NEIKEv2InitiatorIdentifierPayload* _idi;
	NEIKEv2ResponderIdentifierPayload* _idr;
	NSArray* _certificates;
	NSArray* _certificateRequests;
	NEIKEv2AuthPayload* _auth;
	NEIKEv2EAPPayload* _eap;
	NEIKEv2ConfigPayload* _config;
	NEIKEv2InitiatorTrafficSelectorPayload* _tsi;
	NEIKEv2ResponderTrafficSelectorPayload* _tsr;
	NSArray* _vendorIDs;

}

@property (retain) NEIKEv2ChildSAPayload * sa;                                //@synthesize sa=_sa - In the implementation block
@property (retain) NEIKEv2InitiatorIdentifierPayload * idi;                   //@synthesize idi=_idi - In the implementation block
@property (retain) NEIKEv2ResponderIdentifierPayload * idr;                   //@synthesize idr=_idr - In the implementation block
@property (retain) NSArray * certificates;                                    //@synthesize certificates=_certificates - In the implementation block
@property (retain) NSArray * certificateRequests;                             //@synthesize certificateRequests=_certificateRequests - In the implementation block
@property (retain) NEIKEv2AuthPayload * auth;                                 //@synthesize auth=_auth - In the implementation block
@property (retain) NEIKEv2EAPPayload * eap;                                   //@synthesize eap=_eap - In the implementation block
@property (retain) NEIKEv2ConfigPayload * config;                             //@synthesize config=_config - In the implementation block
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload * tsi;              //@synthesize tsi=_tsi - In the implementation block
@property (retain) NEIKEv2ResponderTrafficSelectorPayload * tsr;              //@synthesize tsr=_tsr - In the implementation block
@property (retain) NSArray * vendorIDs;                                       //@synthesize vendorIDs=_vendorIDs - In the implementation block
+(id)copyTypeDescription;
+(id)createEAPForInitiatorIKESA:(id)arg1 childSA:(id)arg2 lastResponderPacket:(id)arg3 ;
+(id)createIKEAuthForInitiatorIKESA:(id)arg1 childSA:(id)arg2 ;
+(id)createIKEAuthResponse:(id)arg1 refusalError:(unsigned long long)arg2 ;
+(id)createIKEAuthResponse:(id)arg1 ikeSA:(id)arg2 childSA:(id)arg3 ;
+(unsigned long long)exchangeType;
-(NEIKEv2ConfigPayload *)config;
-(NEIKEv2InitiatorTrafficSelectorPayload *)tsi;
-(NEIKEv2ResponderTrafficSelectorPayload *)tsr;
-(NEIKEv2EAPPayload *)eap;
-(NEIKEv2InitiatorIdentifierPayload *)idi;
-(NEIKEv2ResponderIdentifierPayload *)idr;
-(NEIKEv2AuthPayload *)auth;
-(NEIKEv2ChildSAPayload *)sa;
-(void)setSa:(NEIKEv2ChildSAPayload *)arg1 ;
-(NSArray *)certificates;
-(void)setTsi:(NEIKEv2InitiatorTrafficSelectorPayload *)arg1 ;
-(NSArray *)vendorIDs;
-(void)setAuth:(NEIKEv2AuthPayload *)arg1 ;
-(id)validateEAPOnlyAuthentication:(id)arg1 ;
-(BOOL)validateAuthAsInitiator:(id)arg1 childSA:(id)arg2 ;
-(id)validateAuthPart1AsResponderCopyErrorForIKESA:(id)arg1 ;
-(id)validateAuthPart2AsResponderCopyErrorForIKESA:(id)arg1 childSA:(id)arg2 ;
-(void)setTsr:(NEIKEv2ResponderTrafficSelectorPayload *)arg1 ;
-(void)setIdi:(NEIKEv2InitiatorIdentifierPayload *)arg1 ;
-(void)setIdr:(NEIKEv2ResponderIdentifierPayload *)arg1 ;
-(void)setEap:(NEIKEv2EAPPayload *)arg1 ;
-(void)setVendorIDs:(NSArray *)arg1 ;
-(void)setCertificateRequests:(NSArray *)arg1 ;
-(BOOL)validateFirstAuthPayloadsForInitiator:(id)arg1 childSA:(id)arg2 ;
-(void)gatherPayloads;
-(void)filloutPayloads;
-(NSArray *)certificateRequests;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setConfig:(NEIKEv2ConfigPayload *)arg1 ;
@end

