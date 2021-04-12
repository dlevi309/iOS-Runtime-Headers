/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSString, HMDAccessoryNetworkCredential;

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject {

	BOOL _requiresUserConsent;
	NSString* _homeName;
	NSString* _setupCode;
	/*^block*/id _setupCodeProvider;
	HMDAccessoryNetworkCredential* _networkCredential;
	NSString* _isoCountryCode;

}

@property (readonly) NSString * homeName;                                            //@synthesize homeName=_homeName - In the implementation block
@property (readonly) NSString * setupCode;                                           //@synthesize setupCode=_setupCode - In the implementation block
@property (readonly) id setupCodeProvider;                                           //@synthesize setupCodeProvider=_setupCodeProvider - In the implementation block
@property (readonly) BOOL requiresUserConsent;                                       //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (readonly) HMDAccessoryNetworkCredential * networkCredential;              //@synthesize networkCredential=_networkCredential - In the implementation block
@property (readonly) NSString * isoCountryCode;                                      //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
-(NSString *)isoCountryCode;
-(BOOL)requiresUserConsent;
-(NSString *)homeName;
-(NSString *)setupCode;
-(id)initWithHomeName:(id)arg1 setupCode:(id)arg2 setupCodeProvider:(/*^block*/id)arg3 requiresUserConsent:(BOOL)arg4 networkCredential:(id)arg5 country:(id)arg6 ;
-(HMDAccessoryNetworkCredential *)networkCredential;
-(id)setupCodeProvider;
@end

