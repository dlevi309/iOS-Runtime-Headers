/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)setupCode;
-(NSString *)homeName;
-(id)initWithHomeName:(id)arg1 setupCode:(id)arg2 setupCodeProvider:(/*^block*/id)arg3 requiresUserConsent:(BOOL)arg4 networkCredential:(id)arg5 country:(id)arg6 ;
-(BOOL)requiresUserConsent;
-(HMDAccessoryNetworkCredential *)networkCredential;
-(id)setupCodeProvider;
@end

