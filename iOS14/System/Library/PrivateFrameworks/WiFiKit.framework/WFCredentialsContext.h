/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/SFPasswordSharingServiceDelegate.h>
#import <libobjc.A.dylib/WFCredentialsProviderContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>

@protocol WFNetworkView;
@class NSString, NSArray, UIViewController, WFNetworkProfile, WFNetworkScanRecord, SFPasswordSharingService;

@interface WFCredentialsContext : NSObject <SFPasswordSharingServiceDelegate, WFCredentialsProviderContext, WFContextPresenting> {

	BOOL _enterprise;
	BOOL _weakSecurity;
	BOOL _passwordSharingSupported;
	BOOL _shouldReactivatePasswordSharing;
	UIViewController*<WFNetworkView> _provider;
	long long _availableAuthTraits;
	/*^block*/id _completionHandler;
	/*^block*/id _cancellationHandler;
	WFNetworkProfile* _profile;
	WFNetworkScanRecord* _network;
	long long _requestedFields;
	/*^block*/id _providerCallback;
	NSArray* _availableTLSIdentities;
	SFPasswordSharingService* _passwordSharingService;

}

@property (nonatomic,retain) WFNetworkProfile * profile;                                                   //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                                //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) long long requestedFields;                                                    //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,copy) id providerCallback;                                                            //@synthesize providerCallback=_providerCallback - In the implementation block
@property (nonatomic,retain) NSArray * availableTLSIdentities;                                             //@synthesize availableTLSIdentities=_availableTLSIdentities - In the implementation block
@property (assign,getter=isEnterprise,nonatomic) BOOL enterprise;                                          //@synthesize enterprise=_enterprise - In the implementation block
@property (nonatomic,retain) SFPasswordSharingService * passwordSharingService;                            //@synthesize passwordSharingService=_passwordSharingService - In the implementation block
@property (assign,nonatomic) BOOL shouldReactivatePasswordSharing;                                         //@synthesize shouldReactivatePasswordSharing=_shouldReactivatePasswordSharing - In the implementation block
@property (assign,getter=isWeakSecurity,nonatomic) BOOL weakSecurity;                                      //@synthesize weakSecurity=_weakSecurity - In the implementation block
@property (assign,nonatomic) long long availableAuthTraits;                                                //@synthesize availableAuthTraits=_availableAuthTraits - In the implementation block
@property (assign,getter=isPasswordSharingSupported,nonatomic) BOOL passwordSharingSupported;              //@synthesize passwordSharingSupported=_passwordSharingSupported - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id cancellationHandler;                                                         //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,readonly) NSString * username; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider;                             //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL needsDismissal; 
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)setProvider:(UIViewController*<WFNetworkView>)arg1 ;
-(void)service:(id)arg1 receivedNetworkInfo:(id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(UIViewController*<WFNetworkView>)provider;
-(WFNetworkScanRecord *)network;
-(void)appWillResignActive:(id)arg1 ;
-(id)completionHandler;
-(void)appWillEnterForeground:(id)arg1 ;
-(NSString *)username;
-(void)setCancellationHandler:(id)arg1 ;
-(WFNetworkProfile *)profile;
-(void)finishWithError:(id)arg1 ;
-(BOOL)isEnterprise;
-(void)setEnterprise:(BOOL)arg1 ;
-(id)cancellationHandler;
-(void)cancel;
-(void)appDidBecomeActive:(id)arg1 ;
-(void)setRequestedFields:(long long)arg1 ;
-(BOOL)isPasswordSharingSupported;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(long long)requestedFields;
-(void)appDidEnterBackground:(id)arg1 ;
-(long long)securityMode;
-(void)dealloc;
-(void)launchSettings;
-(BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2 ;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 ;
-(void)gatherCredentials:(/*^block*/id)arg1 ;
-(void)finishWithError:(id)arg1 forNetwork:(id)arg2 profile:(id)arg3 ;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 authTraits:(long long)arg3 ;
-(void)setPasswordSharingSupported:(BOOL)arg1 ;
-(BOOL)needsDismissal;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(void)activatePasswordSharing;
-(void)deactivatePasswordSharingWithReactivation:(BOOL)arg1 ;
-(NSArray *)availableTLSIdentities;
-(BOOL)isWeakSecurity;
-(long long)availableAuthTraits;
-(void)setAvailableTLSIdentities:(NSArray *)arg1 ;
-(void)setAvailableAuthTraits:(long long)arg1 ;
-(id)providerCallback;
-(void)setProviderCallback:(id)arg1 ;
-(SFPasswordSharingService *)passwordSharingService;
-(BOOL)shouldReactivatePasswordSharing;
-(void)setPasswordSharingService:(SFPasswordSharingService *)arg1 ;
-(void)setShouldReactivatePasswordSharing:(BOOL)arg1 ;
-(void)setWeakSecurity:(BOOL)arg1 ;
@end

