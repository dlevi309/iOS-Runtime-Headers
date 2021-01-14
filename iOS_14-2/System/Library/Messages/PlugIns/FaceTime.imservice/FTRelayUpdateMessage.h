/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface FTRelayUpdateMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSData* _selfRelayBlob;
	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _relayType;
	NSData* _relayConnectionID;
	NSData* _relayTransactionIDAlloc;
	NSData* _relayTokenAllocRes;
	NSData* _relayCandidateID;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _selfRelayNATIP;
	NSNumber* _selfRelayNATPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;

}

@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSData * selfRelayBlob;                        //@synthesize selfRelayBlob=_selfRelayBlob - In the implementation block
@property (copy) NSString * peerID;                             //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSData * peerPushToken;                        //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSNumber * relayType;                          //@synthesize relayType=_relayType - In the implementation block
@property (copy) NSData * relayConnectionID;                    //@synthesize relayConnectionID=_relayConnectionID - In the implementation block
@property (copy) NSData * relayTransactionIDAlloc;              //@synthesize relayTransactionIDAlloc=_relayTransactionIDAlloc - In the implementation block
@property (copy) NSData * relayTokenAllocRes;                   //@synthesize relayTokenAllocRes=_relayTokenAllocRes - In the implementation block
@property (copy) NSData * relayCandidateID;                     //@synthesize relayCandidateID=_relayCandidateID - In the implementation block
@property (copy) NSData * selfRelayIP;                          //@synthesize selfRelayIP=_selfRelayIP - In the implementation block
@property (copy) NSNumber * selfRelayPort;                      //@synthesize selfRelayPort=_selfRelayPort - In the implementation block
@property (copy) NSData * selfRelayNATIP;                       //@synthesize selfRelayNATIP=_selfRelayNATIP - In the implementation block
@property (copy) NSNumber * selfRelayNATPort;                   //@synthesize selfRelayNATPort=_selfRelayNATPort - In the implementation block
@property (copy) NSData * peerRelayIP;                          //@synthesize peerRelayIP=_peerRelayIP - In the implementation block
@property (copy) NSNumber * peerRelayPort;                      //@synthesize peerRelayPort=_peerRelayPort - In the implementation block
-(void)setPeerID:(NSString *)arg1 ;
-(NSString *)peerID;
-(id)requiredKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)bagKey;
-(id)messageBody;
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(NSData *)relayConnectionID;
-(void)setRelayConnectionID:(NSData *)arg1 ;
-(NSNumber *)relayType;
-(NSData *)peerRelayIP;
-(NSNumber *)peerRelayPort;
-(NSData *)selfRelayIP;
-(NSNumber *)selfRelayPort;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setRelayCandidateID:(NSData *)arg1 ;
-(void)setRelayType:(NSNumber *)arg1 ;
-(void)setRelayTransactionIDAlloc:(NSData *)arg1 ;
-(void)setRelayTokenAllocRes:(NSData *)arg1 ;
-(void)setSelfRelayIP:(NSData *)arg1 ;
-(void)setSelfRelayPort:(NSNumber *)arg1 ;
-(void)setSelfRelayNATIP:(NSData *)arg1 ;
-(void)setSelfRelayNATPort:(NSNumber *)arg1 ;
-(void)setPeerRelayIP:(NSData *)arg1 ;
-(void)setPeerRelayPort:(NSNumber *)arg1 ;
-(void)setSelfRelayBlob:(NSData *)arg1 ;
-(NSData *)selfPushToken;
-(NSData *)relayCandidateID;
-(NSData *)relayTransactionIDAlloc;
-(NSData *)relayTokenAllocRes;
-(NSData *)selfRelayNATIP;
-(NSNumber *)selfRelayNATPort;
-(NSData *)selfRelayBlob;
@end

