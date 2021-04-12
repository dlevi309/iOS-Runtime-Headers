/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUContactsDataProvider, NSUUID, NSSet, NSString, TUConversationMember, TUHandle, NSObject;

@interface TUConversation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _audioEnabled;
	BOOL _videoEnabled;
	BOOL _locallyCreated;
	BOOL _hasJoined;
	TUContactsDataProvider* _contactsDataProvider;
	NSUUID* _UUID;
	NSUUID* _groupUUID;
	long long _state;
	NSSet* _participantHandles;
	NSSet* _remoteMembers;
	NSSet* _activeRemoteParticipants;
	long long _avcSessionToken;
	NSString* _avcSessionIdentifier;
	TUConversationMember* _localMember;
	NSUUID* _messagesGroupUUID;
	TUHandle* _initiator;
	NSString* _messagesGroupName;
	long long _maxVideoDecodesAllowed;
	NSObject* _reportingHierarchyToken;
	NSObject* _reportingHierarchySubToken;

}

@property (nonatomic,readonly) TUContactsDataProvider * contactsDataProvider;              //@synthesize contactsDataProvider=_contactsDataProvider - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long avcSessionToken;                                    //@synthesize avcSessionToken=_avcSessionToken - In the implementation block
@property (nonatomic,copy) NSString * avcSessionIdentifier;                                //@synthesize avcSessionIdentifier=_avcSessionIdentifier - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                      //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                      //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isLocallyCreated,nonatomic) BOOL locallyCreated;                  //@synthesize locallyCreated=_locallyCreated - In the implementation block
@property (assign,getter=hasJoined,nonatomic) BOOL hasJoined;                              //@synthesize hasJoined=_hasJoined - In the implementation block
@property (nonatomic,retain) TUConversationMember * localMember;                           //@synthesize localMember=_localMember - In the implementation block
@property (nonatomic,copy) NSSet * remoteMembers;                                          //@synthesize remoteMembers=_remoteMembers - In the implementation block
@property (nonatomic,retain) NSUUID * messagesGroupUUID;                                   //@synthesize messagesGroupUUID=_messagesGroupUUID - In the implementation block
@property (nonatomic,copy) NSSet * participantHandles;                                     //@synthesize participantHandles=_participantHandles - In the implementation block
@property (nonatomic,copy) NSSet * activeRemoteParticipants;                               //@synthesize activeRemoteParticipants=_activeRemoteParticipants - In the implementation block
@property (nonatomic,retain) TUHandle * initiator;                                         //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,copy) NSString * messagesGroupName;                                   //@synthesize messagesGroupName=_messagesGroupName - In the implementation block
@property (assign,nonatomic) long long maxVideoDecodesAllowed;                             //@synthesize maxVideoDecodesAllowed=_maxVideoDecodesAllowed - In the implementation block
@property (nonatomic,retain) NSObject * reportingHierarchyToken;                           //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
@property (nonatomic,retain) NSObject * reportingHierarchySubToken;                        //@synthesize reportingHierarchySubToken=_reportingHierarchySubToken - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSUUID * groupUUID;                                         //@synthesize groupUUID=_groupUUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)numberFormatter;
+(id)emptyConversationWithGroupUUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)bundleIdentifier;
-(long long)state;
-(NSUUID *)UUID;
-(id)displayName;
-(void)setState:(long long)arg1 ;
-(id)handles;
-(TUHandle *)initiator;
-(NSUUID *)groupUUID;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(void)setInitiator:(TUHandle *)arg1 ;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(id)initWithUUID:(id)arg1 groupUUID:(id)arg2 ;
-(void)setParticipantHandles:(NSSet *)arg1 ;
-(void)setRemoteMembers:(NSSet *)arg1 ;
-(void)setActiveRemoteParticipants:(NSSet *)arg1 ;
-(NSUUID *)messagesGroupUUID;
-(NSString *)messagesGroupName;
-(BOOL)isLocallyCreated;
-(BOOL)hasJoined;
-(NSSet *)remoteMembers;
-(NSSet *)activeRemoteParticipants;
-(TUContactsDataProvider *)contactsDataProvider;
-(BOOL)isEqualToConversation:(id)arg1 ;
-(long long)avcSessionToken;
-(NSString *)avcSessionIdentifier;
-(NSSet *)participantHandles;
-(void)setMessagesGroupUUID:(NSUUID *)arg1 ;
-(void)setAvcSessionToken:(long long)arg1 ;
-(void)setAvcSessionIdentifier:(NSString *)arg1 ;
-(void)setLocallyCreated:(BOOL)arg1 ;
-(void)setHasJoined:(BOOL)arg1 ;
-(TUConversationMember *)localMember;
-(void)setLocalMember:(TUConversationMember *)arg1 ;
-(void)setMessagesGroupName:(NSString *)arg1 ;
-(long long)maxVideoDecodesAllowed;
-(void)setMaxVideoDecodesAllowed:(long long)arg1 ;
-(id)initiatorLocalizedName;
-(BOOL)isRepresentedByRemoteMembers:(id)arg1 ;
-(NSObject *)reportingHierarchyToken;
-(void)setReportingHierarchyToken:(NSObject *)arg1 ;
-(NSObject *)reportingHierarchySubToken;
-(void)setReportingHierarchySubToken:(NSObject *)arg1 ;
@end

