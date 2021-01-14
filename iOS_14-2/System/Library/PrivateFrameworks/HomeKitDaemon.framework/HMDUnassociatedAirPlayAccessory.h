/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryAssociation.h>

@class HMFPairingIdentity, NSString;

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation> {

	HMFPairingIdentity* _pairingIdentity;

}

@property (copy) HMFPairingIdentity * pairingIdentity;              //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL supportsAssociation; 
+(id)logCategory;
+(id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(void)associateToHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsAssociation;
@end

