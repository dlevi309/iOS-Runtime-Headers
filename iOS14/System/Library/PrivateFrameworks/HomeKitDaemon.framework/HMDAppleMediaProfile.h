/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaProfile.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>

@class HMDMediaSystem, MPRequestResponseController, HMDAppleMediaAccessory, NSString;

@interface HMDAppleMediaProfile : HMDMediaProfile <MPRequestResponseControllerDelegate> {

	HMDMediaSystem* _mediaSystem;
	MPRequestResponseController* _controller;

}

@property (__weak,readonly) HMDAppleMediaAccessory * mediaAccessory; 
@property (readonly) MPRequestResponseController * controller;                    //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) HMDMediaSystem * mediaSystem;                 //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFinishLoadingRequestForController:(id)arg1 ;
-(void)setMediaSystem:(HMDMediaSystem *)arg1 ;
-(void)registerForMessages;
-(HMDMediaSystem *)mediaSystem;
-(void)setMediaSession:(id)arg1 ;
-(MPRequestResponseController *)controller;
-(void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4 ;
-(void)_handleSetPower:(id)arg1 ;
-(BOOL)_updatePlayback:(id)arg1 ;
-(BOOL)_updateRefreshPlayback:(id)arg1 ;
-(HMDAppleMediaAccessory *)mediaAccessory;
-(void)sessionAudioControlUpdated:(id)arg1 ;
-(void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

