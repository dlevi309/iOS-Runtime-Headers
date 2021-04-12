/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CXHandle, NSString, NSUUID, NSSet, CXHandoffContext, NSDictionary;

@interface CXCallUpdate : NSObject <CXCopying, NSSecureCoding, NSCopying> {

	BOOL _emergency;
	BOOL _usingBaseband;
	BOOL _blocked;
	BOOL _mayRequireBreakBeforeMake;
	BOOL _hasVideo;
	BOOL _requiresInCallSounds;
	BOOL _supportsHolding;
	BOOL _supportsGrouping;
	BOOL _supportsUngrouping;
	BOOL _supportsDTMF;
	BOOL _supportsUnambiguousMultiPartyState;
	BOOL _supportsAddCall;
	BOOL _supportsSendingToVoicemail;
	BOOL _prefersExclusiveAccessToCellularNetwork;
	BOOL _supportsTTYWithVoice;
	BOOL _remoteUplinkMuted;
	BOOL _shouldSuppressInCallUI;
	BOOL _requiresAuthentication;
	BOOL _mutuallyExclusiveCall;
	os_unfair_lock_s _accessorLock;
	CXHandle* _remoteHandle;
	NSString* _localizedCallerName;
	long long _ttyType;
	NSString* _audioCategory;
	NSString* _audioMode;
	long long _audioInterruptionProvider;
	long long _audioInterruptionOperationMode;
	long long _verificationStatus;
	long long _priority;
	long long _inCallSoundRegion;
	long long _videoStreamToken;
	NSString* _crossDeviceIdentifier;
	NSString* _ISOCountryCode;
	NSUUID* _localSenderIdentityUUID;
	NSUUID* _localSenderIdentityAccountUUID;
	NSSet* _remoteParticipantHandles;
	NSSet* _activeRemoteParticipantHandles;
	CXHandoffContext* _handoffContext;
	NSDictionary* _context;
	CXCallUpdateHasSet _hasSet;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) os_unfair_lock_s accessorLock;                                        //@synthesize accessorLock=_accessorLock - In the implementation block
@property (assign,nonatomic) CXCallUpdateHasSet hasSet;                                              //@synthesize hasSet=_hasSet - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                                          //@synthesize UUID=_UUID - In the implementation block
@property (assign,getter=isEmergency,nonatomic) BOOL emergency;                                      //@synthesize emergency=_emergency - In the implementation block
@property (assign,getter=isUsingBaseband,nonatomic) BOOL usingBaseband;                              //@synthesize usingBaseband=_usingBaseband - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                                          //@synthesize blocked=_blocked - In the implementation block
@property (assign,nonatomic) BOOL mayRequireBreakBeforeMake;                                         //@synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake - In the implementation block
@property (assign,setter=setTTYType:,nonatomic) long long ttyType;                                   //@synthesize ttyType=_ttyType - In the implementation block
@property (assign,nonatomic) BOOL supportsTTYWithVoice;                                              //@synthesize supportsTTYWithVoice=_supportsTTYWithVoice - In the implementation block
@property (assign,nonatomic) BOOL requiresInCallSounds;                                              //@synthesize requiresInCallSounds=_requiresInCallSounds - In the implementation block
@property (assign,nonatomic) long long inCallSoundRegion;                                            //@synthesize inCallSoundRegion=_inCallSoundRegion - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                                                 //@synthesize audioCategory=_audioCategory - In the implementation block
@property (nonatomic,copy) NSString * audioMode;                                                     //@synthesize audioMode=_audioMode - In the implementation block
@property (assign,nonatomic) long long audioInterruptionProvider;                                    //@synthesize audioInterruptionProvider=_audioInterruptionProvider - In the implementation block
@property (assign,nonatomic) long long audioInterruptionOperationMode;                               //@synthesize audioInterruptionOperationMode=_audioInterruptionOperationMode - In the implementation block
@property (assign,nonatomic) long long verificationStatus;                                           //@synthesize verificationStatus=_verificationStatus - In the implementation block
@property (assign,nonatomic) long long priority;                                                     //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSString * crossDeviceIdentifier;                                         //@synthesize crossDeviceIdentifier=_crossDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ISOCountryCode;                                                //@synthesize ISOCountryCode=_ISOCountryCode - In the implementation block
@property (nonatomic,copy) NSUUID * localSenderIdentityUUID;                                         //@synthesize localSenderIdentityUUID=_localSenderIdentityUUID - In the implementation block
@property (nonatomic,copy) NSUUID * localSenderIdentityAccountUUID;                                  //@synthesize localSenderIdentityAccountUUID=_localSenderIdentityAccountUUID - In the implementation block
@property (nonatomic,copy) NSSet * remoteParticipantHandles;                                         //@synthesize remoteParticipantHandles=_remoteParticipantHandles - In the implementation block
@property (nonatomic,copy) NSSet * activeRemoteParticipantHandles;                                   //@synthesize activeRemoteParticipantHandles=_activeRemoteParticipantHandles - In the implementation block
@property (nonatomic,retain) CXHandoffContext * handoffContext;                                      //@synthesize handoffContext=_handoffContext - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                                                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL prefersExclusiveAccessToCellularNetwork;                           //@synthesize prefersExclusiveAccessToCellularNetwork=_prefersExclusiveAccessToCellularNetwork - In the implementation block
@property (assign,getter=isRemoteUplinkMuted,nonatomic) BOOL remoteUplinkMuted;                      //@synthesize remoteUplinkMuted=_remoteUplinkMuted - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressInCallUI;                                            //@synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI - In the implementation block
@property (assign,getter=isMutuallyExclusiveCall,nonatomic) BOOL mutuallyExclusiveCall;              //@synthesize mutuallyExclusiveCall=_mutuallyExclusiveCall - In the implementation block
@property (assign,nonatomic) BOOL supportsUnambiguousMultiPartyState;                                //@synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState - In the implementation block
@property (assign,nonatomic) BOOL supportsAddCall;                                                   //@synthesize supportsAddCall=_supportsAddCall - In the implementation block
@property (assign,nonatomic) BOOL supportsSendingToVoicemail;                                        //@synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail - In the implementation block
@property (assign,nonatomic) long long videoStreamToken;                                             //@synthesize videoStreamToken=_videoStreamToken - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                                            //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (nonatomic,copy) CXHandle * remoteHandle;                                                  //@synthesize remoteHandle=_remoteHandle - In the implementation block
@property (nonatomic,copy) NSString * localizedCallerName;                                           //@synthesize localizedCallerName=_localizedCallerName - In the implementation block
@property (assign,nonatomic) BOOL supportsHolding;                                                   //@synthesize supportsHolding=_supportsHolding - In the implementation block
@property (assign,nonatomic) BOOL supportsGrouping;                                                  //@synthesize supportsGrouping=_supportsGrouping - In the implementation block
@property (assign,nonatomic) BOOL supportsUngrouping;                                                //@synthesize supportsUngrouping=_supportsUngrouping - In the implementation block
@property (assign,nonatomic) BOOL supportsDTMF;                                                      //@synthesize supportsDTMF=_supportsDTMF - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                                          //@synthesize hasVideo=_hasVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)callUpdateWithDefaultValuesSet;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSDictionary *)context;
-(void)setUUID:(NSUUID *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isBlocked;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setEmergency:(BOOL)arg1 ;
-(BOOL)emergency;
-(NSString *)ISOCountryCode;
-(BOOL)blocked;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setISOCountryCode:(NSString *)arg1 ;
-(NSString *)audioCategory;
-(void)setAudioCategory:(NSString *)arg1 ;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(BOOL)requiresAuthentication;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1 ;
-(BOOL)supportsGrouping;
-(NSSet *)remoteParticipantHandles;
-(BOOL)isEmergency;
-(BOOL)shouldSuppressInCallUI;
-(void)setShouldSuppressInCallUI:(BOOL)arg1 ;
-(BOOL)supportsHolding;
-(BOOL)supportsUngrouping;
-(BOOL)supportsDTMF;
-(BOOL)supportsUnambiguousMultiPartyState;
-(BOOL)supportsAddCall;
-(BOOL)supportsSendingToVoicemail;
-(void)setSupportsHolding:(BOOL)arg1 ;
-(void)setSupportsGrouping:(BOOL)arg1 ;
-(void)setSupportsUngrouping:(BOOL)arg1 ;
-(void)setSupportsDTMF:(BOOL)arg1 ;
-(void)setSupportsUnambiguousMultiPartyState:(BOOL)arg1 ;
-(void)setSupportsAddCall:(BOOL)arg1 ;
-(void)setSupportsSendingToVoicemail:(BOOL)arg1 ;
-(void)setRemoteParticipantHandles:(NSSet *)arg1 ;
-(NSUUID *)localSenderIdentityUUID;
-(void)setLocalSenderIdentityUUID:(NSUUID *)arg1 ;
-(NSUUID *)localSenderIdentityAccountUUID;
-(void)setLocalSenderIdentityAccountUUID:(NSUUID *)arg1 ;
-(BOOL)isUsingBaseband;
-(NSString *)audioMode;
-(BOOL)supportsTTYWithVoice;
-(BOOL)prefersExclusiveAccessToCellularNetwork;
-(BOOL)isRemoteUplinkMuted;
-(BOOL)isMutuallyExclusiveCall;
-(long long)videoStreamToken;
-(void)setUsingBaseband:(BOOL)arg1 ;
-(void)setSupportsTTYWithVoice:(BOOL)arg1 ;
-(void)setAudioMode:(NSString *)arg1 ;
-(void)setVideoStreamToken:(long long)arg1 ;
-(void)setPrefersExclusiveAccessToCellularNetwork:(BOOL)arg1 ;
-(void)setRemoteUplinkMuted:(BOOL)arg1 ;
-(void)setMutuallyExclusiveCall:(BOOL)arg1 ;
-(long long)verificationStatus;
-(void)setVerificationStatus:(long long)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(CXHandoffContext *)handoffContext;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)setHandoffContext:(CXHandoffContext *)arg1 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(CXCallUpdateHasSet)hasSet;
-(void)setHasSet:(CXCallUpdateHasSet)arg1 ;
-(CXHandle *)remoteHandle;
-(void)setRemoteHandle:(CXHandle *)arg1 ;
-(NSString *)localizedCallerName;
-(BOOL)mayRequireBreakBeforeMake;
-(long long)audioInterruptionProvider;
-(long long)audioInterruptionOperationMode;
-(BOOL)requiresInCallSounds;
-(long long)inCallSoundRegion;
-(NSString *)crossDeviceIdentifier;
-(NSSet *)activeRemoteParticipantHandles;
-(void)setLocalizedCallerName:(NSString *)arg1 ;
-(void)setMayRequireBreakBeforeMake:(BOOL)arg1 ;
-(void)setAudioInterruptionProvider:(long long)arg1 ;
-(void)setAudioInterruptionOperationMode:(long long)arg1 ;
-(void)setRequiresInCallSounds:(BOOL)arg1 ;
-(void)setInCallSoundRegion:(long long)arg1 ;
-(void)setCrossDeviceIdentifier:(NSString *)arg1 ;
-(void)setActiveRemoteParticipantHandles:(NSSet *)arg1 ;
-(BOOL)usingBaseband;
-(BOOL)remoteUplinkMuted;
-(BOOL)mutuallyExclusiveCall;
-(void)updateWithUpdate:(id)arg1 ;
-(os_unfair_lock_s)accessorLock;
@end

