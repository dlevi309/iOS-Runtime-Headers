/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSSet, NSArray, NSOrderedSet, CXSandboxExtendedURL;

@interface CXProviderConfiguration : NSObject <NSSecureCoding, CXCopying, NSCopying> {

	BOOL _includesCallsInRecents;
	BOOL _supportsVideo;
	BOOL _supportsAudioOnly;
	BOOL _supportsEmergency;
	BOOL _supportsVoicemail;
	BOOL _supportsCurrentPlatform;
	unsigned _audioSessionID;
	NSString* _localizedName;
	NSData* _iconTemplateImageData;
	unsigned long long _maximumCallGroups;
	unsigned long long _maximumCallsPerCallGroup;
	NSSet* _supportedHandleTypes;
	NSArray* _emergencyHandles;
	NSArray* _emergencyLabeledHandles;
	NSArray* _handoffIdentifiers;
	NSOrderedSet* _prioritizedSenderIdentities;
	CXSandboxExtendedURL* _ringtoneSoundURL;

}

@property (nonatomic,copy) NSString * localizedName;                                   //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                  //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (nonatomic,copy) NSArray * emergencyHandles;                                 //@synthesize emergencyHandles=_emergencyHandles - In the implementation block
@property (nonatomic,copy) NSArray * emergencyLabeledHandles;                          //@synthesize emergencyLabeledHandles=_emergencyLabeledHandles - In the implementation block
@property (nonatomic,copy) NSArray * handoffIdentifiers;                               //@synthesize handoffIdentifiers=_handoffIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * senderIdentities; 
@property (nonatomic,copy) NSOrderedSet * prioritizedSenderIdentities;                 //@synthesize prioritizedSenderIdentities=_prioritizedSenderIdentities - In the implementation block
@property (nonatomic,copy) CXSandboxExtendedURL * ringtoneSoundURL;                    //@synthesize ringtoneSoundURL=_ringtoneSoundURL - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioOnly;                                   //@synthesize supportsAudioOnly=_supportsAudioOnly - In the implementation block
@property (assign,nonatomic) BOOL supportsEmergency;                                   //@synthesize supportsEmergency=_supportsEmergency - In the implementation block
@property (assign,nonatomic) BOOL supportsVoicemail;                                   //@synthesize supportsVoicemail=_supportsVoicemail - In the implementation block
@property (assign,nonatomic) BOOL supportsCurrentPlatform;                             //@synthesize supportsCurrentPlatform=_supportsCurrentPlatform - In the implementation block
@property (nonatomic,retain) NSString * ringtoneSound; 
@property (nonatomic,copy) NSData * iconTemplateImageData;                             //@synthesize iconTemplateImageData=_iconTemplateImageData - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallGroups;                     //@synthesize maximumCallGroups=_maximumCallGroups - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallsPerCallGroup;              //@synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup - In the implementation block
@property (assign,nonatomic) BOOL includesCallsInRecents;                              //@synthesize includesCallsInRecents=_includesCallsInRecents - In the implementation block
@property (assign,nonatomic) BOOL supportsVideo;                                       //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (nonatomic,copy) NSSet * supportedHandleTypes;                               //@synthesize supportedHandleTypes=_supportedHandleTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(unsigned)audioSessionID;
-(NSData *)iconTemplateImageData;
-(unsigned long long)maximumCallGroups;
-(unsigned long long)maximumCallsPerCallGroup;
-(BOOL)supportsEmergency;
-(BOOL)supportsVoicemail;
-(BOOL)supportsCurrentPlatform;
-(NSSet *)supportedHandleTypes;
-(NSArray *)emergencyHandles;
-(NSArray *)emergencyLabeledHandles;
-(NSArray *)handoffIdentifiers;
-(void)setPrioritizedSenderIdentities:(NSOrderedSet *)arg1 ;
-(void)setEmergencyHandles:(NSArray *)arg1 ;
-(void)setEmergencyLabeledHandles:(NSArray *)arg1 ;
-(void)setHandoffIdentifiers:(NSArray *)arg1 ;
-(void)setIconTemplateImageData:(NSData *)arg1 ;
-(void)setMaximumCallGroups:(unsigned long long)arg1 ;
-(void)setMaximumCallsPerCallGroup:(unsigned long long)arg1 ;
-(void)setSupportsCurrentPlatform:(BOOL)arg1 ;
-(CXSandboxExtendedURL *)ringtoneSoundURL;
-(void)setRingtoneSoundURL:(CXSandboxExtendedURL *)arg1 ;
-(void)setSenderIdentities:(NSSet *)arg1 ;
-(NSSet *)senderIdentities;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithLocalizedName:(id)arg1 ;
-(NSOrderedSet *)prioritizedSenderIdentities;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsAudioOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSupportsAudioOnly:(BOOL)arg1 ;
-(void)setSupportsEmergency:(BOOL)arg1 ;
-(void)setSupportsVoicemail:(BOOL)arg1 ;
-(void)setSupportedHandleTypes:(NSSet *)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(BOOL)supportsVideo;
-(BOOL)includesCallsInRecents;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(void)setIncludesCallsInRecents:(BOOL)arg1 ;
-(NSString *)ringtoneSound;
-(void)setRingtoneSound:(NSString *)arg1 ;
@end

