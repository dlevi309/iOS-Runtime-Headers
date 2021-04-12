/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

