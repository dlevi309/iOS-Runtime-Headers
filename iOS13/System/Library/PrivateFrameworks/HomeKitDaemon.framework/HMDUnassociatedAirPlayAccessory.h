/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)modelClass;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(void)associateToHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsAssociation;
@end

