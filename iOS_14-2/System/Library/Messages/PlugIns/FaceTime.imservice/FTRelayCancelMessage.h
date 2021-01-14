/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSNumber;

@interface FTRelayCancelMessage : FTFaceTimeMessage <NSCopying> {

	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _relayType;
	NSNumber* _reason;
	NSData* _relayConnectionID;
	NSData* _relayCandidateID;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;

}

@property (copy) NSString * peerID;                       //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSData * peerPushToken;                  //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSNumber * relayType;                    //@synthesize relayType=_relayType - In the implementation block
@property (copy) NSNumber * reason;                       //@synthesize reason=_reason - In the implementation block
@property (copy) NSData * relayConnectionID;              //@synthesize relayConnectionID=_relayConnectionID - In the implementation block
@property (copy) NSData * relayCandidateID;               //@synthesize relayCandidateID=_relayCandidateID - In the implementation block
@property (copy) NSData * selfRelayIP;                    //@synthesize selfRelayIP=_selfRelayIP - In the implementation block
@property (copy) NSNumber * selfRelayPort;                //@synthesize selfRelayPort=_selfRelayPort - In the implementation block
@property (copy) NSData * peerRelayIP;                    //@synthesize peerRelayIP=_peerRelayIP - In the implementation block
@property (copy) NSNumber * peerRelayPort;                //@synthesize peerRelayPort=_peerRelayPort - In the implementation block
-(void)setPeerID:(NSString *)arg1 ;
-(NSString *)peerID;
-(id)requiredKeys;
-(NSNumber *)reason;
-(void)setReason:(NSNumber *)arg1 ;
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
-(void)setRelayCandidateID:(NSData *)arg1 ;
-(void)setRelayType:(NSNumber *)arg1 ;
-(void)setSelfRelayIP:(NSData *)arg1 ;
-(void)setSelfRelayPort:(NSNumber *)arg1 ;
-(void)setPeerRelayIP:(NSData *)arg1 ;
-(void)setPeerRelayPort:(NSNumber *)arg1 ;
-(NSData *)relayCandidateID;
@end

