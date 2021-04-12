/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)open;
-(void)close;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(void)_closeWithError:(id)arg1 ;
-(id)accessoryBagURL;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
-(HMDRelayManager *)relayManager;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(id)initWithRelayManager:(id)arg1 accessory:(id)arg2 ;
@end

