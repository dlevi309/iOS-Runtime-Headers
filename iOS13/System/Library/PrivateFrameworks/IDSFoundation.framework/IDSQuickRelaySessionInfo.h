/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSString, NSData, NSArray, NSUUID;

@interface IDSQuickRelaySessionInfo : NSObject {

	long long _allocateType;
	double _allocateTime;
	NSString* _allocateRequestID;
	NSString* _idsSessionID;
	NSString* _relaySessionID;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	NSData* _softwareData;
	unsigned char _protocolVersion;
	long long _relayServerProviderType;
	long long _participantID;
	NSArray* _allParticipantIDs;
	BOOL _isInitiator;
	long long _linkProtocol;
	sockaddr_storage _serverAddress;
	sockaddr_storage _serverAddressIPv6;
	NSString* _groupID;
	NSString* _stableGroupID;
	NSUUID* _defaultDeviceLocalCBUUID;
	NSUUID* _defaultDeviceRemoteCBUUID;
	NSArray* _publishedStreams;
	NSArray* _subscribedStreams;
	unsigned _generationCounter;
	unsigned char _maxConcurrentStreams;

}

@property (readonly) long long allocateType;                                 //@synthesize allocateType=_allocateType - In the implementation block
@property (readonly) double allocateTime;                                    //@synthesize allocateTime=_allocateTime - In the implementation block
@property (readonly) NSString * allocateRequestID;                           //@synthesize allocateRequestID=_allocateRequestID - In the implementation block
@property (readonly) NSString * idsSessionID;                                //@synthesize idsSessionID=_idsSessionID - In the implementation block
@property (readonly) NSString * relaySessionID;                              //@synthesize relaySessionID=_relaySessionID - In the implementation block
@property (readonly) NSData * relaySessionToken;                             //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (readonly) NSData * relaySessionKey;                               //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (readonly) NSData * softwareData;                                  //@synthesize softwareData=_softwareData - In the implementation block
@property (readonly) unsigned char protocolVersion;                          //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (readonly) long long relayServerProviderType;                      //@synthesize relayServerProviderType=_relayServerProviderType - In the implementation block
@property (readonly) long long participantID;                                //@synthesize participantID=_participantID - In the implementation block
@property (readonly) NSArray * allParticipantIDs;                            //@synthesize allParticipantIDs=_allParticipantIDs - In the implementation block
@property (readonly) BOOL isInitiator;                                       //@synthesize isInitiator=_isInitiator - In the implementation block
@property (readonly) long long linkProtocol;                                 //@synthesize linkProtocol=_linkProtocol - In the implementation block
@property (readonly) const sockaddr_storage* serverAddress; 
@property (readonly) const sockaddr_storage* serverAddressIPv6; 
@property (readonly) NSUUID * defaultDeviceLocalCBUUID;                      //@synthesize defaultDeviceLocalCBUUID=_defaultDeviceLocalCBUUID - In the implementation block
@property (readonly) NSUUID * defaultDeviceRemoteCBUUID;                     //@synthesize defaultDeviceRemoteCBUUID=_defaultDeviceRemoteCBUUID - In the implementation block
@property (readonly) NSString * groupID;                                     //@synthesize groupID=_groupID - In the implementation block
@property (readonly) NSString * stableGroupID;                               //@synthesize stableGroupID=_stableGroupID - In the implementation block
@property (readonly) NSArray * publishedStreams;                             //@synthesize publishedStreams=_publishedStreams - In the implementation block
@property (readonly) NSArray * subscribedStreams;                            //@synthesize subscribedStreams=_subscribedStreams - In the implementation block
@property (readonly) unsigned generationCounter;                             //@synthesize generationCounter=_generationCounter - In the implementation block
@property (readonly) unsigned char maxConcurrentStreams;                     //@synthesize maxConcurrentStreams=_maxConcurrentStreams - In the implementation block
-(BOOL)isInitiator;
-(NSString *)groupID;
-(long long)participantID;
-(unsigned char)protocolVersion;
-(NSString *)relaySessionID;
-(NSData *)relaySessionKey;
-(NSData *)relaySessionToken;
-(long long)parseSessionInfo:(id)arg1 ;
-(long long)allocateType;
-(NSString *)allocateRequestID;
-(const sockaddr_storage*)serverAddress;
-(const sockaddr_storage*)serverAddressIPv6;
-(long long)linkProtocol;
-(NSString *)idsSessionID;
-(long long)relayServerProviderType;
-(double)allocateTime;
-(NSData *)softwareData;
-(NSArray *)publishedStreams;
-(NSArray *)subscribedStreams;
-(unsigned char)maxConcurrentStreams;
-(NSArray *)allParticipantIDs;
-(NSUUID *)defaultDeviceLocalCBUUID;
-(NSUUID *)defaultDeviceRemoteCBUUID;
-(NSString *)stableGroupID;
-(unsigned)generationCounter;
@end

