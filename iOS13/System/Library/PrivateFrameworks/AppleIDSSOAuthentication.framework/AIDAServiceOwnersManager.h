/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
*/

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <libobjc.A.dylib/AIDAServiceOwnerProtocol.h>

@class ACAccountStore, NSDictionary, NSString;

@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol> {

	os_unfair_lock_s _serviceOwnersLock;
	ACAccountStore* _accountStore;
	NSDictionary* _serviceOwners;

}

@property (nonatomic,copy) NSDictionary * serviceOwners;              //@synthesize serviceOwners=_serviceOwners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedServices;
+(id)serviceOwnerBundles;
-(id)init;
-(id)initWithAccountStore:(id)arg1 ;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountForService:(id)arg1 ;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2 ;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2 ;
-(id)_buildServiceOwnerMapping;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2 ;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)serviceOwners;
-(void)setServiceOwners:(NSDictionary *)arg1 ;
@end

