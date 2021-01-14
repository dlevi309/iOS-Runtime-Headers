/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPPlaybackContext.h>
#import <libobjc.A.dylib/MPCPlaybackContextUserIdentityConsuming.h>
#import <libobjc.A.dylib/MPCPlaybackContextPrivateListeningOverridable.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequestEnvironmentConsuming.h>

@protocol MPCContinueListeningRadioQueueProviding;
@class ICUserIdentity, NSNumber, MPCPlaybackRequestEnvironment, MPCModelRadioContentReference, MPModelRadioStation, NSURL, NSString;

@interface MPCModelRadioPlaybackContext : MPPlaybackContext <MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable, MPCModelPlaybackRequestEnvironmentConsuming> {

	BOOL _continueListeningStation;
	ICUserIdentity* _userIdentity;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	id<MPCContinueListeningRadioQueueProviding> _continueListeningQueueProvider;
	long long _continueListeningMaxQueueReferences;
	long long _continueListeningPrefetchThreshold;
	MPCModelRadioContentReference* _nowPlayingContentReference;
	MPCModelRadioContentReference* _seedContentReference;
	MPModelRadioStation* _radioStation;
	NSURL* _stationURL;

}

@property (nonatomic,copy) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;                                       //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (assign,nonatomic) BOOL continueListeningStation;                                                                  //@synthesize continueListeningStation=_continueListeningStation - In the implementation block
@property (assign,nonatomic,__weak) id<MPCContinueListeningRadioQueueProviding> continueListeningQueueProvider;              //@synthesize continueListeningQueueProvider=_continueListeningQueueProvider - In the implementation block
@property (assign,nonatomic) long long continueListeningMaxQueueReferences;                                                  //@synthesize continueListeningMaxQueueReferences=_continueListeningMaxQueueReferences - In the implementation block
@property (assign,nonatomic) long long continueListeningPrefetchThreshold;                                                   //@synthesize continueListeningPrefetchThreshold=_continueListeningPrefetchThreshold - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * nowPlayingContentReference;                                       //@synthesize nowPlayingContentReference=_nowPlayingContentReference - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * seedContentReference;                                             //@synthesize seedContentReference=_seedContentReference - In the implementation block
@property (nonatomic,retain) MPModelRadioStation * radioStation;                                                             //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,copy) NSURL * stationURL;                                                                               //@synthesize stationURL=_stationURL - In the implementation block
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                                                    //@synthesize userIdentity=_userIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSNumber * privateListeningOverride; 
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(long long)shuffleType;
-(ICUserIdentity *)userIdentity;
-(id)init;
-(long long)queueEndAction;
-(NSURL *)stationURL;
-(NSNumber *)privateListeningOverride;
-(id)descriptionComponents;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRadioStation:(MPModelRadioStation *)arg1 ;
-(long long)repeatType;
-(MPModelRadioStation *)radioStation;
-(id)initWithCoder:(id)arg1 ;
-(MPCModelRadioContentReference *)seedContentReference;
-(MPCModelRadioContentReference *)nowPlayingContentReference;
-(void)setSeedContentReference:(MPCModelRadioContentReference *)arg1 ;
-(void)setNowPlayingContentReference:(MPCModelRadioContentReference *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setStationURL:(NSURL *)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)setPrivateListeningOverride:(NSNumber *)arg1 ;
-(void)setPlaybackRequestEnvironment:(MPCPlaybackRequestEnvironment *)arg1 ;
-(void)getRemotePlaybackQueueRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)setContinueListeningStation:(BOOL)arg1 ;
-(BOOL)continueListeningStation;
-(long long)continueListeningMaxQueueReferences;
-(void)setContinueListeningMaxQueueReferences:(long long)arg1 ;
-(long long)continueListeningPrefetchThreshold;
-(void)setContinueListeningPrefetchThreshold:(long long)arg1 ;
-(id<MPCContinueListeningRadioQueueProviding>)continueListeningQueueProvider;
-(void)setContinueListeningQueueProvider:(id<MPCContinueListeningRadioQueueProviding>)arg1 ;
@end

