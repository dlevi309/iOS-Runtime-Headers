/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)serviceOwnerBundles;
+(id)supportedServices;
-(void)signOutOfAllServicesUsingContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)signInToAllServicesInBackground:(BOOL)arg1 usingContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signOutOfServices:(id)arg1 usingContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2 ;
-(void)signInToServices:(id)arg1 usingContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2 ;
-(void)setServiceOwners:(NSDictionary *)arg1 ;
-(id)accountForService:(id)arg1 ;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2 ;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_buildServiceOwnerMapping;
-(void)signInToAllServicesInBackgroundUsingContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_postCloudSupportedServicesForAltDSID:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(NSDictionary *)serviceOwners;
@end

