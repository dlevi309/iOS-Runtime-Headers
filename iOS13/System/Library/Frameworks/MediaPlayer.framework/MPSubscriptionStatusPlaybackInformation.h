/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ICMusicSubscriptionStatus;

@interface MPSubscriptionStatusPlaybackInformation : NSObject {

	ICMusicSubscriptionStatus* _subscriptionStatusObject;
	BOOL _definitiveInformation;
	BOOL _hasPlaybackCapability;
	BOOL _requiresCarrierManualVerification;
	BOOL _shouldUseLease;
	BOOL _shouldUseAccountLessStreaming;

}

@property (getter=isDefinitiveInformation,nonatomic,readonly) BOOL definitiveInformation;              //@synthesize definitiveInformation=_definitiveInformation - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackCapability;                                             //@synthesize hasPlaybackCapability=_hasPlaybackCapability - In the implementation block
@property (nonatomic,readonly) BOOL requiresCarrierManualVerification;                                 //@synthesize requiresCarrierManualVerification=_requiresCarrierManualVerification - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLease;                                                    //@synthesize shouldUseLease=_shouldUseLease - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseAccountLessStreaming;                                     //@synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming - In the implementation block
-(id)description;
-(BOOL)shouldUseAccountLessStreaming;
-(id)initWithICSubscriptionStatus:(id)arg1 ;
-(BOOL)isDefinitiveInformation;
-(BOOL)hasPlaybackCapability;
-(BOOL)requiresCarrierManualVerification;
-(BOOL)shouldUseLease;
@end

