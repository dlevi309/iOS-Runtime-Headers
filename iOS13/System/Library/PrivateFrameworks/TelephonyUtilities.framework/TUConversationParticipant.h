/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUHandle, NSString;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding> {

	BOOL _muted;
	BOOL _audioEnabled;
	BOOL _videoEnabled;
	BOOL _momentsAvailable;
	unsigned long long _identifier;
	TUHandle* _handle;
	long long _streamToken;
	long long _audioPriority;
	long long _videoPriority;
	NSString* _avcIdentifier;
	NSString* _activeIDSDestination;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted;                                    //@synthesize muted=_muted - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                      //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                      //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isMomentsAvailable,nonatomic) BOOL momentsAvailable;              //@synthesize momentsAvailable=_momentsAvailable - In the implementation block
@property (assign,nonatomic) long long streamToken;                                        //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) long long audioPriority;                                      //@synthesize audioPriority=_audioPriority - In the implementation block
@property (assign,nonatomic) long long videoPriority;                                      //@synthesize videoPriority=_videoPriority - In the implementation block
@property (nonatomic,copy) NSString * avcIdentifier;                                       //@synthesize avcIdentifier=_avcIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activeIDSDestination;                                //@synthesize activeIDSDestination=_activeIDSDestination - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) TUHandle * handle;                                     //@synthesize handle=_handle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(TUHandle *)handle;
-(void)setMuted:(BOOL)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(BOOL)isMuted;
-(long long)streamToken;
-(BOOL)isVideoEnabled;
-(BOOL)isMomentsAvailable;
-(BOOL)isEqualToParticipant:(id)arg1 ;
-(NSString *)avcIdentifier;
-(NSString *)activeIDSDestination;
-(id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2 ;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)setMomentsAvailable:(BOOL)arg1 ;
-(void)setStreamToken:(long long)arg1 ;
-(long long)audioPriority;
-(void)setAudioPriority:(long long)arg1 ;
-(long long)videoPriority;
-(void)setVideoPriority:(long long)arg1 ;
-(void)setAvcIdentifier:(NSString *)arg1 ;
-(void)setActiveIDSDestination:(NSString *)arg1 ;
@end

