/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSUUID, NSString, NSData;

@interface IDSGroupSessionActiveParticipant : NSObject {

	NSUUID* _groupUUID;
	unsigned long long _participantIdentifier;
	NSString* _participantURI;
	BOOL _isKnown;
	NSData* _participantPushToken;

}

@property (nonatomic,readonly) NSUUID * groupUUID;                                    //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantIdentifier;              //@synthesize participantIdentifier=_participantIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isKnown;                                          //@synthesize isKnown=_isKnown - In the implementation block
@property (nonatomic,readonly) NSString * participantURI;                             //@synthesize participantURI=_participantURI - In the implementation block
@property (nonatomic,readonly) NSData * participantPushToken;                         //@synthesize participantPushToken=_participantPushToken - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 isKnown:(BOOL)arg3 participantURI:(id)arg4 pushToken:(id)arg5 ;
-(NSString *)participantURI;
-(NSData *)participantPushToken;
-(id)debugDescription;
-(BOOL)isKnown;
-(id)description;
-(NSUUID *)groupUUID;
-(unsigned long long)participantIdentifier;
@end

