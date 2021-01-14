/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
*/

#import <SAObjects/SADPDeviceSearch.h>

@protocol OS_dispatch_queue;
@class _TtC8FMClient7Session, AuthenticationProvider, NSString, NSObject;

@interface FMIPSADeviceSearch : SADPDeviceSearch {

	BOOL _isSearchAuthenticated;
	BOOL _isSharedDevice;
	_TtC8FMClient7Session* _clientSession;
	AuthenticationProvider* _authenticationProvider;
	NSString* _ownerDsid;
	NSObject*<OS_dispatch_queue> _commandQueue;

}

@property (nonatomic,retain) _TtC8FMClient7Session * clientSession;                        //@synthesize clientSession=_clientSession - In the implementation block
@property (nonatomic,retain) AuthenticationProvider * authenticationProvider;              //@synthesize authenticationProvider=_authenticationProvider - In the implementation block
@property (assign,nonatomic) BOOL isSearchAuthenticated;                                   //@synthesize isSearchAuthenticated=_isSearchAuthenticated - In the implementation block
@property (assign,nonatomic) BOOL isSharedDevice;                                          //@synthesize isSharedDevice=_isSharedDevice - In the implementation block
@property (nonatomic,retain) NSString * ownerDsid;                                         //@synthesize ownerDsid=_ownerDsid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> commandQueue;                    //@synthesize commandQueue=_commandQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)commandQueue;
-(AuthenticationProvider *)authenticationProvider;
-(void)setAuthenticationProvider:(AuthenticationProvider *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setCommandQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setClientSession:(_TtC8FMClient7Session *)arg1 ;
-(void)setOwnerDsid:(NSString *)arg1 ;
-(_TtC8FMClient7Session *)clientSession;
-(NSString *)ownerDsid;
-(void)setIsSearchAuthenticated:(BOOL)arg1 ;
-(void)setIsSharedDevice:(BOOL)arg1 ;
-(void)initializeSearch;
-(void)performSearchWithCompletion:(/*^block*/id)arg1 ;
-(void)localizationTest;
-(void)computeSiriResponseWithFoundDevices:(id)arg1 responseCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)searchDevicesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSearchAuthenticated;
-(void)invalidateClientSession;
-(BOOL)isSharedDevice;
@end

