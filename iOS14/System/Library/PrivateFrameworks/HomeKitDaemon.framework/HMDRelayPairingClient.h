/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPRelayPairingClient.h>
#import <libobjc.A.dylib/HMDRelayManagerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDRelayManager, HMDAccessory, NSObject, NSString;

@interface HMDRelayPairingClient : HAPRelayPairingClient <HMDRelayManagerDelegate, HMFLogging> {

	HMDRelayManager* _relayManager;
	HMDAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDRelayManager * relayManager;                 //@synthesize relayManager=_relayManager - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                       //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)accessoryBagURL;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)open;
-(void)close;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(void)_closeWithError:(id)arg1 ;
-(HMDRelayManager *)relayManager;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(id)accessoryBagURL;
-(id)initWithRelayManager:(id)arg1 accessory:(id)arg2 ;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
@end

