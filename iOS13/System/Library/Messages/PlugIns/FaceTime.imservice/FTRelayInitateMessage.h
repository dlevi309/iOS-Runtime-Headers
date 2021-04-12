/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSNumber, NSString;

@interface FTRelayInitateMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSNumber* _selfNatType;
	NSNumber* _selfNATIP;
	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _peerNatType;
	NSNumber* _peerNATIP;
	NSNumber* _relayType;
	NSData* _relayConnectionId;
	NSData* _relayTransactionIdAlloc;
	NSData* _relayTokenAllocReq;
	NSData* _relayCandidateID;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;

}

@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSNumber * selfNatType;                        //@synthesize selfNatType=_selfNatType - In the implementation block
@property (copy) NSNumber * selfNATIP;                          //@synthesize selfNATIP=_selfNATIP - In the implementation block
@property (copy) NSString * peerID;                             //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSData * peerPushToken;                        //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSNumber * peerNatType;                        //@synthesize peerNatType=_peerNatType - In the implementation block
@property (copy) NSNumber * peerNATIP;                          //@synthesize peerNATIP=_peerNATIP - In the implementation block
@property (copy) NSData * relayCandidateID;                     //@synthesize relayCandidateID=_relayCandidateID - In the implementation block
@property (copy) NSNumber * relayType;                          //@synthesize relayType=_relayType - In the implementation block
@property (copy) NSData * relayConnectionId;                    //@synthesize relayConnectionId=_relayConnectionId - In the implementation block
@property (copy) NSData * relayTransactionIdAlloc;              //@synthesize relayTransactionIdAlloc=_relayTransactionIdAlloc - In the implementation block
@property (copy) NSData * relayTokenAllocReq;                   //@synthesize relayTokenAllocReq=_relayTokenAllocReq - In the implementation block
@property (copy) NSData * selfRelayIP;                          //@synthesize selfRelayIP=_selfRelayIP - In the implementation block
@property (copy) NSNumber * selfRelayPort;                      //@synthesize selfRelayPort=_selfRelayPort - In the implementation block
@property (copy) NSData * peerRelayIP;                          //@synthesize peerRelayIP=_peerRelayIP - In the implementation block
@property (copy) NSNumber * peerRelayPort;                      //@synthesize peerRelayPort=_peerRelayPort - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(id)requiredKeys;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSNumber *)relayType;
-(NSData *)relayConnectionId;
-(NSData *)relayTransactionIdAlloc;
-(NSData *)relayTokenAllocReq;
-(NSData *)peerRelayIP;
-(NSNumber *)peerRelayPort;
-(NSData *)selfRelayIP;
-(NSNumber *)selfRelayPort;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setSelfNATIP:(NSNumber *)arg1 ;
-(void)setPeerNATIP:(NSNumber *)arg1 ;
-(void)setSelfNatType:(NSNumber *)arg1 ;
-(void)setPeerNatType:(NSNumber *)arg1 ;
-(void)setRelayCandidateID:(NSData *)arg1 ;
-(void)setRelayType:(NSNumber *)arg1 ;
-(void)setSelfRelayIP:(NSData *)arg1 ;
-(void)setSelfRelayPort:(NSNumber *)arg1 ;
-(void)setPeerRelayIP:(NSData *)arg1 ;
-(void)setPeerRelayPort:(NSNumber *)arg1 ;
-(NSData *)selfPushToken;
-(NSNumber *)selfNATIP;
-(NSData *)peerPushToken;
-(NSNumber *)peerNATIP;
-(void)setRelayConnectionId:(NSData *)arg1 ;
-(void)setRelayTransactionIdAlloc:(NSData *)arg1 ;
-(void)setRelayTokenAllocReq:(NSData *)arg1 ;
-(NSData *)relayCandidateID;
-(NSNumber *)selfNatType;
-(NSNumber *)peerNatType;
@end

