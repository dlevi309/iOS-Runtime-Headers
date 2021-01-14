/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@class CDPContext, NSDictionary, NSURLSession;

@interface CDPDSecureBackupConfiguration : NSObject {

	CDPContext* _context;
	NSDictionary* _configurationURLs;
	NSDictionary* _escrowConfigurationURLs;
	NSURLSession* _session;

}
+(id)configurationWithContext:(id)arg1 ;
+(id)configurationWithContext:(id)arg1 andSession:(id)arg2 ;
+(id)_configurationRequestWithURLString:(id)arg1 ;
-(id)_escrowProxyURL;
-(id)_iCloudEnvironment;
-(id)accountInfoFetchSetupDictionary;
-(id)escrowAuthInfo;
-(id)_escrowConfigurationBag;
-(id)_setupConfigurationURLs;
-(id)_escrowConfigurationBagFull;
-(id)_fetchConfigurationDictionary;
-(id)_fetchEscrowConfigurationBag;
-(id)_escrowProxyConfigurationURL;
-(id)_escrowProxyConfigurationURLRequest;
-(id)_fetchConfigurationWithRequest:(id)arg1 ;
-(id)_configurationInfoURLRequest;
@end

