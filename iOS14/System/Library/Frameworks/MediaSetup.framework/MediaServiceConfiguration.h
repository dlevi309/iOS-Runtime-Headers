/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <MediaSetup/MediaServiceUpdatedServiceInterfaceDelegate.h>

@protocol MSAccountsImplementer, OS_dispatch_queue, MediaServiceUpdatedDelegate;
@class NSXPCConnection, NSObject, NSString;

@interface MediaServiceConfiguration : NSObject <MediaServiceUpdatedServiceInterfaceDelegate> {

	NSXPCConnection* _connection;
	id<MSAccountsImplementer> _accountsImplementer;
	NSObject*<OS_dispatch_queue> _queue;
	id<MediaServiceUpdatedDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<MediaServiceUpdatedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initWithQueue:(id)arg1 ;
-(void)getAvailableServices:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeServiceFromHome:(id)arg1 fromHome:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateDefaultMediaService:(id)arg1 forHome:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateProperty:(id)arg1 forHome:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDefaultMediaService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<MediaServiceUpdatedDelegate>)delegate;
-(void)setDelegate:(id<MediaServiceUpdatedDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)serviceSettingDidUpdate:(id)arg1 homeUserID:(id)arg2 ;
-(void)userDidRemoveService:(id)arg1 homeUserID:(id)arg2 ;
-(void)userDidUpdateDefaultService:(id)arg1 homeUserID:(id)arg2 ;
-(void)getCachedServiceInfo:(id)arg1 homeUserID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAuthRenewalForMediaService:(id)arg1 homeUserID:(id)arg2 parentNetworkActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getServiceConfigurationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getResolvedServiceInfo:(id)arg1 sharedUserID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getDefaultMediaServiceForAllUsers:(/*^block*/id)arg1 ;
-(void)getPublicInfoForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVersion:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCachedAvailableServices:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addMediaServiceToHome:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getResolvedServiceAndUser:(id)arg1 sharedUserID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

