/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSUUID, NSString, NSDate, NSData, NSArray, NSDictionary;

@interface IDSGroupSessionParticipantUpdate : NSObject {

	NSUUID* _groupUUID;
	BOOL _isInitiator;
	unsigned long long _participantIdentifier;
	NSString* _participantDestinationID;
	unsigned long long _participantUpdateType;
	unsigned long long _participantUpdateSubtype;
	BOOL _fromServer;
	NSDate* _serverDate;
	NSData* _participantData;
	NSData* _clientContextData;
	NSArray* _members;
	NSDictionary* _participantIDs;
	NSUUID* _relaySessionID;

}

@property (nonatomic,readonly) BOOL isInitiator;                                         //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) NSUUID * groupUUID;                                       //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantIdentifier;                 //@synthesize participantIdentifier=_participantIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * participantDestinationID;                      //@synthesize participantDestinationID=_participantDestinationID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantUpdateType;                 //@synthesize participantUpdateType=_participantUpdateType - In the implementation block
@property (nonatomic,readonly) unsigned long long participantUpdateSubtype;              //@synthesize participantUpdateSubtype=_participantUpdateSubtype - In the implementation block
@property (nonatomic,readonly) BOOL fromServer;                                          //@synthesize fromServer=_fromServer - In the implementation block
@property (nonatomic,readonly) NSDate * serverDate;                                      //@synthesize serverDate=_serverDate - In the implementation block
@property (nonatomic,readonly) NSData * participantData;                                 //@synthesize participantData=_participantData - In the implementation block
@property (nonatomic,readonly) NSData * clientContextData;                               //@synthesize clientContextData=_clientContextData - In the implementation block
@property (nonatomic,readonly) NSArray * members;                                        //@synthesize members=_members - In the implementation block
@property (nonatomic,readonly) NSDictionary * participantIDs;                            //@synthesize participantIDs=_participantIDs - In the implementation block
@property (nonatomic,readonly) NSUUID * relaySessionID;                                  //@synthesize relaySessionID=_relaySessionID - In the implementation block
-(id)description;
-(id)debugDescription;
-(id)dictionaryRepresentation;
-(BOOL)isInitiator;
-(NSArray *)members;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSUUID *)groupUUID;
-(unsigned long long)participantIdentifier;
-(NSData *)participantData;
-(NSUUID *)relaySessionID;
-(id)initWithGroupUUID:(id)arg1 isInitiator:(BOOL)arg2 participantIdentifier:(unsigned long long)arg3 participantDestinationID:(id)arg4 participantUpdateType:(unsigned long long)arg5 participantUpdateSubtype:(unsigned long long)arg6 fromServer:(BOOL)arg7 serverDate:(id)arg8 participantData:(id)arg9 clientContextData:(id)arg10 members:(id)arg11 participantIDs:(id)arg12 relaySessionID:(id)arg13 ;
-(NSString *)participantDestinationID;
-(unsigned long long)participantUpdateType;
-(unsigned long long)participantUpdateSubtype;
-(BOOL)fromServer;
-(NSDate *)serverDate;
-(NSData *)clientContextData;
-(NSDictionary *)participantIDs;
@end

