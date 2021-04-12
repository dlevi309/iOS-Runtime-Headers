/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Packet.h>

@class NSArray, NEIKEv2ConfigPayload;

@interface NEIKEv2InformationalPacket : NEIKEv2Packet {

	NSArray* _deletes;
	NEIKEv2ConfigPayload* _config;

}

@property (readonly) BOOL isKeepalive; 
@property (readonly) BOOL isDeleteIKE; 
@property (readonly) BOOL isDeleteChild; 
@property (readonly) BOOL isMOBIKE; 
@property (retain) NSArray * deletes;                          //@synthesize deletes=_deletes - In the implementation block
@property (retain) NEIKEv2ConfigPayload * config;              //@synthesize config=_config - In the implementation block
+(id)copyTypeDescription;
+(id)createDeleteIKE;
+(id)createInformationalResponse:(id)arg1 ikeSA:(id)arg2 ;
+(id)createDeleteChild:(id)arg1 ;
+(id)createDeleteResponse:(id)arg1 child:(id)arg2 ;
+(id)createInformationalPacketWithNATPayload:(id)arg1 ;
+(id)createInformational;
+(id)createNotifyPacketForType:(unsigned long long)arg1 data:(id)arg2 ;
+(id)createUpdateAddressInitiator:(id)arg1 ;
+(id)createMOBIKEPacketResponse:(id)arg1 ikeSA:(id)arg2 ;
+(id)createDeleteIKEResponse:(id)arg1 ;
+(unsigned long long)exchangeType;
-(NEIKEv2ConfigPayload *)config;
-(void)setConfig:(NEIKEv2ConfigPayload *)arg1 ;
-(NSArray *)deletes;
-(void)setDeletes:(NSArray *)arg1 ;
-(BOOL)validateInformational;
-(BOOL)validateDeleteChild:(id)arg1 ;
-(BOOL)validateDeleteIKE;
-(BOOL)validateUpdateAddresses:(id)arg1 ;
-(BOOL)isMOBIKE;
-(BOOL)validateMOBIKE:(id)arg1 ;
-(BOOL)isDeleteIKE;
-(BOOL)isDeleteChild;
-(BOOL)isKeepalive;
-(BOOL)validateKeepalive;
-(void)gatherPayloads;
-(void)filloutPayloads;
@end

