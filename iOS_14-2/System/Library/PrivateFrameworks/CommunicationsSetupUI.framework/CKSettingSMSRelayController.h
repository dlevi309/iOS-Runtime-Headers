/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate> {

	IDSService* _relayService;

}

@property (nonatomic,retain) IDSService * relayService;              //@synthesize relayService=_relayService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceIsAuthorized:(id)arg1 ;
+(id)authorizedSMSRelayDevices;
+(unsigned long long)numberOfActiveDevices;
+(BOOL)shouldShowSMSRelaySettings;
-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setRelayService:(IDSService *)arg1 ;
-(IDSService *)relayService;
-(void)setDeviceActive:(id)arg1 specifier:(id)arg2 ;
-(id)getDeviceActive:(id)arg1 ;
@end

