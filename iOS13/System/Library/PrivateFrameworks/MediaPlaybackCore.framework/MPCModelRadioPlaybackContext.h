/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPPlaybackContext.h>
#import <libobjc.A.dylib/MPCPlaybackContextUserIdentityConsuming.h>
#import <libobjc.A.dylib/MPCPlaybackContextPrivateListeningOverridable.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequestEnvironmentConsuming.h>

@class ICUserIdentity, MPCPlaybackRequestEnvironment, MPCModelRadioContentReference, MPModelRadioStation, NSURL, NSString;

@interface MPCModelRadioPlaybackContext : MPPlaybackContext <MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable, MPCModelPlaybackRequestEnvironmentConsuming> {

	ICUserIdentity* _userIdentity;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPCModelRadioContentReference* _nowPlayingContentReference;
	MPCModelRadioContentReference* _seedContentReference;
	MPModelRadioStation* _radioStation;
	NSURL* _stationURL;

}

@property (nonatomic,copy) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * nowPlayingContentReference;              //@synthesize nowPlayingContentReference=_nowPlayingContentReference - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * seedContentReference;                    //@synthesize seedContentReference=_seedContentReference - In the implementation block
@property (nonatomic,retain) MPModelRadioStation * radioStation;                                    //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,copy) NSURL * stationURL;                                                      //@synthesize stationURL=_stationURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                           //@synthesize userIdentity=_userIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setRadioStation:(MPModelRadioStation *)arg1 ;
-(long long)shuffleType;
-(long long)repeatType;
-(NSURL *)stationURL;
-(id)descriptionComponents;
-(MPModelRadioStation *)radioStation;
-(void)setStationURL:(NSURL *)arg1 ;
-(MPCModelRadioContentReference *)seedContentReference;
-(MPCModelRadioContentReference *)nowPlayingContentReference;
-(void)setSeedContentReference:(MPCModelRadioContentReference *)arg1 ;
-(void)setNowPlayingContentReference:(MPCModelRadioContentReference *)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)setPrivateListeningOverride:(id)arg1 ;
-(void)setPlaybackRequestEnvironment:(MPCPlaybackRequestEnvironment *)arg1 ;
-(void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

