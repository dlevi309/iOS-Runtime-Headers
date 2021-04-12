/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIAccessViewController;

@interface VUIVPPAManager : NSObject {

	VUIAccessViewController* _accessViewController;

}

@property (nonatomic,retain) VUIAccessViewController * accessViewController;              //@synthesize accessViewController=_accessViewController - In the implementation block
+(id)sharedInstance;
+(BOOL)_isReminderDue:(id)arg1 reminderInterval:(double)arg2 ;
+(id)addUniqueChannels:(id)arg1 channels:(id)arg2 ;
+(id)_getConsentedChannels;
+(id)_getDeniedChannels;
+(BOOL)channelAlreadyExists:(id)arg1 channelID:(id)arg2 ;
-(id)_rootViewController;
-(VUIAccessViewController *)accessViewController;
-(void)startVPPAConsentFlowForDeeplink:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAccessViewController:(VUIAccessViewController *)arg1 ;
-(BOOL)_isChannelVPPAPromptEligible:(id)arg1 ;
-(void)_fetchConfigurationAndPresentVPPAIfRequired:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isVPPAPromptDueForConfig:(id)arg1 ;
-(void)_presentVPPAConsentScreen:(id)arg1 vppaState:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_getVPPABulkChannels:(long long)arg1 ;
-(id)_getEligibleBulkChannels;
-(void)startVPPAConsentFlow:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

