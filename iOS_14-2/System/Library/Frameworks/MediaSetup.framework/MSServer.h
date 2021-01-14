/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MSAccountsImplementer.h>
#import <MediaSetup/MediaServiceUpdatedClientDelegate.h>

@protocol MSAccountsImplementer;
@class NSXPCListener, NSMutableSet, NSString;

@interface MSServer : NSObject <NSXPCListenerDelegate, MSAccountsImplementer, MediaServiceUpdatedClientDelegate> {

	NSXPCListener* _serverListener;
	id<MSAccountsImplementer> _accountsInterfaceDelegate;
	NSMutableSet* _clients;

}

@property (retain) NSMutableSet * clients;                                                            //@synthesize clients=_clients - In the implementation block
@property (assign,nonatomic,__weak) id<MSAccountsImplementer> accountsInterfaceDelegate;              //@synthesize accountsInterfaceDelegate=_accountsInterfaceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openConnection;
-(NSMutableSet *)clients;
-(void)_handleClientConnectionInvalidated:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)serviceSettingDidUpdate:(id)arg1 homeUserID:(id)arg2 ;
-(void)userDidRemoveService:(id)arg1 homeUserID:(id)arg2 ;
-(void)userDidUpdateDefaultService:(id)arg1 homeUserID:(id)arg2 ;
-(BOOL)_isConnectionEntitled:(id)arg1 ;
-(void)getAvailableServices:(id)arg1 userIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getCachedAvailableServices:(id)arg1 userIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getCachedServiceInfo:(id)arg1 homeUserID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAuthRenewalForMediaService:(id)arg1 homeUserID:(id)arg2 parentNetworkActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateDefaultMediaService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDefaultMediaService:(id)arg1 homeUserID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeMediaService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addMediaServiceToHome:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateProperty:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 withOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getServiceConfigurationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getResolvedServiceInfo:(id)arg1 sharedUserID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getDefaultMediaServiceForAllUsers:(/*^block*/id)arg1 ;
-(void)getPublicInfoForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVersion:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id<MSAccountsImplementer>)accountsInterfaceDelegate;
-(void)setAccountsInterfaceDelegate:(id<MSAccountsImplementer>)arg1 ;
@end

