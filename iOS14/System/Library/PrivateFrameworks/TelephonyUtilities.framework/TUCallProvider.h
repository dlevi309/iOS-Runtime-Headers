/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSURL, NSArray, NSOrderedSet, TUSandboxExtendedURL, NSData;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsAudioOnly;
	BOOL _supportsAudioAndVideo;
	BOOL _supportsEmergency;
	BOOL _supportsVoicemail;
	BOOL _supportsRecents;
	BOOL _supportsCurrentPlatform;
	unsigned _audioSessionID;
	NSString* _identifier;
	NSString* _localizedName;
	NSSet* _supportedHandleTypes;
	NSURL* _bundleURL;
	NSString* _bundleIdentifier;
	NSArray* _emergencyHandles;
	NSArray* _emergencyLabeledHandles;
	NSArray* _handoffIdentifiers;
	NSOrderedSet* _prioritizedSenderIdentities;
	TUSandboxExtendedURL* _sandboxExtendedRingtoneSoundURL;
	NSURL* _originalRingtoneSoundURL;
	NSData* _iconTemplateImageData;
	unsigned long long _maximumCallGroups;
	unsigned long long _maximumCallsPerCallGroup;
	long long _sandboxExtensionHandle;

}

@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * supportedHandleTypes;                                          //@synthesize supportedHandleTypes=_supportedHandleTypes - In the implementation block
@property (nonatomic,copy) NSArray * emergencyHandles;                                            //@synthesize emergencyHandles=_emergencyHandles - In the implementation block
@property (nonatomic,copy) NSArray * emergencyLabeledHandles;                                     //@synthesize emergencyLabeledHandles=_emergencyLabeledHandles - In the implementation block
@property (nonatomic,copy) NSArray * handoffIdentifiers;                                          //@synthesize handoffIdentifiers=_handoffIdentifiers - In the implementation block
@property (nonatomic,copy) NSOrderedSet * prioritizedSenderIdentities;                            //@synthesize prioritizedSenderIdentities=_prioritizedSenderIdentities - In the implementation block
@property (nonatomic,retain) NSURL * ringtoneSoundURL; 
@property (nonatomic,retain) TUSandboxExtendedURL * sandboxExtendedRingtoneSoundURL;              //@synthesize sandboxExtendedRingtoneSoundURL=_sandboxExtendedRingtoneSoundURL - In the implementation block
@property (nonatomic,retain) NSURL * originalRingtoneSoundURL;                                    //@synthesize originalRingtoneSoundURL=_originalRingtoneSoundURL - In the implementation block
@property (nonatomic,copy) NSData * iconTemplateImageData;                                        //@synthesize iconTemplateImageData=_iconTemplateImageData - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallGroups;                                //@synthesize maximumCallGroups=_maximumCallGroups - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallsPerCallGroup;                         //@synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioOnly;                                              //@synthesize supportsAudioOnly=_supportsAudioOnly - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioAndVideo;                                          //@synthesize supportsAudioAndVideo=_supportsAudioAndVideo - In the implementation block
@property (assign,nonatomic) BOOL supportsEmergency;                                              //@synthesize supportsEmergency=_supportsEmergency - In the implementation block
@property (assign,nonatomic) BOOL supportsVoicemail;                                              //@synthesize supportsVoicemail=_supportsVoicemail - In the implementation block
@property (assign,nonatomic) BOOL supportsRecents;                                                //@synthesize supportsRecents=_supportsRecents - In the implementation block
@property (assign,nonatomic) BOOL supportsCurrentPlatform;                                        //@synthesize supportsCurrentPlatform=_supportsCurrentPlatform - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                             //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) long long sandboxExtensionHandle;                                    //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (getter=isTelephonyProvider,nonatomic,readonly) BOOL telephonyProvider; 
@property (getter=isFaceTimeProvider,nonatomic,readonly) BOOL faceTimeProvider; 
@property (getter=isSuperboxProvider,nonatomic,readonly) BOOL superboxProvider; 
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(NSURL *)bundleURL;
-(void)setBundleURL:(NSURL *)arg1 ;
-(unsigned)audioSessionID;
-(TUSandboxExtendedURL *)sandboxExtendedRingtoneSoundURL;
-(NSURL *)originalRingtoneSoundURL;
-(NSData *)iconTemplateImageData;
-(unsigned long long)maximumCallGroups;
-(unsigned long long)maximumCallsPerCallGroup;
-(BOOL)supportsEmergency;
-(BOOL)supportsVoicemail;
-(BOOL)supportsRecents;
-(BOOL)supportsCurrentPlatform;
-(NSSet *)supportedHandleTypes;
-(NSArray *)emergencyHandles;
-(NSArray *)emergencyLabeledHandles;
-(NSArray *)handoffIdentifiers;
-(BOOL)isSuperboxProvider;
-(BOOL)isTinCanProvider;
-(void)setSandboxExtendedRingtoneSoundURL:(TUSandboxExtendedURL *)arg1 ;
-(void)setPrioritizedSenderIdentities:(NSOrderedSet *)arg1 ;
-(BOOL)isEqualToCallProvider:(id)arg1 ;
-(void)setEmergencyHandles:(NSArray *)arg1 ;
-(void)setEmergencyLabeledHandles:(NSArray *)arg1 ;
-(void)setHandoffIdentifiers:(NSArray *)arg1 ;
-(BOOL)supportsHandleType:(long long)arg1 ;
-(void)setOriginalRingtoneSoundURL:(NSURL *)arg1 ;
-(void)setIconTemplateImageData:(NSData *)arg1 ;
-(void)setMaximumCallGroups:(unsigned long long)arg1 ;
-(void)setMaximumCallsPerCallGroup:(unsigned long long)arg1 ;
-(void)setSupportsCurrentPlatform:(BOOL)arg1 ;
-(BOOL)supportsShowingInCallUI;
-(BOOL)prefersShowingInCallUI;
-(BOOL)hasRestrictionsInRetailEnvironment;
-(id)senderIdentityForUUID:(id)arg1 ;
-(id)senderIdentityForHandle:(id)arg1 ;
-(id)displayAppBundleIdentifier;
-(id)inCallUIBundleIdentifier;
-(NSURL *)ringtoneSoundURL;
-(void)setRingtoneSoundURL:(NSURL *)arg1 ;
-(void)setSenderIdentities:(id)arg1 ;
-(id)senderIdentities;
-(id)init;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isFaceTimeProvider;
-(long long)sandboxExtensionHandle;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSOrderedSet *)prioritizedSenderIdentities;
-(unsigned long long)hash;
-(BOOL)isSystemProvider;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsAudioOnly;
-(BOOL)supportsAudioAndVideo;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isTelephonyProvider;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)senderIdentityForAccountUUID:(id)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSupportsAudioOnly:(BOOL)arg1 ;
-(void)setSupportsEmergency:(BOOL)arg1 ;
-(void)setSupportsVoicemail:(BOOL)arg1 ;
-(void)setSupportsRecents:(BOOL)arg1 ;
-(void)setSupportedHandleTypes:(NSSet *)arg1 ;
-(void)setSupportsAudioAndVideo:(BOOL)arg1 ;
@end

