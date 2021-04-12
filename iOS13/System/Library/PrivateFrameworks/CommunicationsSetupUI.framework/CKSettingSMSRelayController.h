/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(id)specifiers;
-(void)setRelayService:(IDSService *)arg1 ;
-(IDSService *)relayService;
-(void)setDeviceActive:(id)arg1 specifier:(id)arg2 ;
-(id)getDeviceActive:(id)arg1 ;
@end

