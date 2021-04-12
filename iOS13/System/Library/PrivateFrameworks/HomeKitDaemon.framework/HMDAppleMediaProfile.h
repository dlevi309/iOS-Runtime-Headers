/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaProfile.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>

@class HMDMediaSystem, MPRequestResponseController, HMDAccessorySettingContainer, HMDAppleMediaAccessory, NSString;

@interface HMDAppleMediaProfile : HMDMediaProfile <MPRequestResponseControllerDelegate> {

	HMDMediaSystem* _mediaSystem;
	MPRequestResponseController* _controller;
	HMDAccessorySettingContainer* _container;

}

@property (__weak,readonly) HMDAppleMediaAccessory * mediaAccessory; 
@property (readonly) MPRequestResponseController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) HMDMediaSystem * mediaSystem;                   //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (nonatomic,retain) HMDAccessorySettingContainer * container;              //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMDAccessorySettingContainer *)container;
-(void)setContainer:(HMDAccessorySettingContainer *)arg1 ;
-(MPRequestResponseController *)controller;
-(void)didFinishLoadingRequestForController:(id)arg1 ;
-(void)setMediaSession:(id)arg1 ;
-(void)registerForMessages;
-(HMDMediaSystem *)mediaSystem;
-(void)setMediaSystem:(HMDMediaSystem *)arg1 ;
-(void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4 ;
-(HMDAppleMediaAccessory *)mediaAccessory;
-(void)_handleSetPower:(id)arg1 ;
-(BOOL)_updatePlayback:(id)arg1 ;
-(BOOL)_updateRefreshPlayback:(id)arg1 ;
-(void)sessionAudioControlUpdated:(id)arg1 ;
-(void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

