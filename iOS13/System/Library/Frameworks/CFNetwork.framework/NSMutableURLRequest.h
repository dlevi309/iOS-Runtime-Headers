/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLRequest.h>

@class NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSString * HTTPMethod; 
@property (copy) NSDictionary * allHTTPHeaderFields; 
@property (copy) NSData * HTTPBody; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (assign) BOOL HTTPShouldHandleCookies; 
@property (assign) BOOL HTTPShouldUsePipelining; 
@property (copy) NSURL * URL; 
@property (assign) unsigned long long cachePolicy; 
@property (assign) double timeoutInterval; 
@property (copy) NSURL * mainDocumentURL; 
@property (assign) unsigned long long networkServiceType; 
@property (assign) BOOL allowsCellularAccess; 
@property (assign) BOOL allowsExpensiveNetworkAccess; 
@property (assign) BOOL allowsConstrainedNetworkAccess; 
+(id)ak_anisetteHeadersWithData:(id)arg1 ;
+(id)ak_proxiedAnisetteHeadersWithData:(id)arg1 ;
+(id)ak_clientTimeHeader;
+(id)ak_localeHeader;
+(id)ak_timeZoneHeader;
+(id)ak_clientInfoHeader;
+(id)ak_deviceUDIDHeader;
+(id)ak_anisetteHeadersWithCompanionData:(id)arg1 ;
-(void)ak_addICSCRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_addRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_setBodyWithParameters:(id)arg1 ;
-(void)_setAuthorizationHeaderWithToken:(id)arg1 altDSID:(id)arg2 key:(id)arg3 ;
-(void)ak_addInternalBuildHeader;
-(void)ak_addLocalUserUUIDHashHeader;
-(void)ak_addAppleIDHeaderWithValue:(id)arg1 ;
-(void)ak_addAppleIDUserModeHeaderWithValue:(unsigned long long)arg1 ;
-(void)ak_addDeviceUDIDHeader;
-(void)ak_addProxiedDeviceUDIDHeader:(id)arg1 ;
-(void)ak_addClientInfoHeader;
-(void)ak_addClientTimeHeader;
-(void)ak_addCircleStatusHeader;
-(void)ak_addCompanionClientInfoHeader:(id)arg1 ;
-(void)ak_addProxiedClientInfoHeader:(id)arg1 ;
-(void)ak_addEphemeralAuthHeader;
-(void)ak_addAnisetteHeaders;
-(void)ak_addProxiedAnisetteHeaders:(id)arg1 ;
-(void)ak_addProxiedAttestationHeaders:(id)arg1 ;
-(void)ak_addAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_addProxiedAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_addAuthorizationHeaderWithServiceToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_addAuthorizationHeaderWithHeartbeatToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_addShortLivedTokenHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_addURLSwitchingHeaderWithURLKey:(id)arg1 altDSID:(id)arg2 ;
-(id)ak_valueForEncodedHeaderWithKey:(id)arg1 ;
-(void)ak_setJSONBodyWithParameters:(id)arg1 ;
-(void)ak_addAbsintheHeaderWithValue:(id)arg1 ;
-(void)ak_addLoggedInServicesHeaderForServices:(id)arg1 ;
-(void)ak_addContextHeaderForServiceType:(long long)arg1 ;
-(void)ak_addContinutationKeyHeader:(id)arg1 ;
-(void)ak_addPasswordResetKeyHeader:(id)arg1 ;
-(void)ak_addCountryHeader;
-(void)ak_addProxiedDeviceCountryHeader:(id)arg1 ;
-(void)ak_addLocaleHeader;
-(void)ak_addTimeZoneHeaders;
-(void)ak_addPRKRequestHeader;
-(void)ak_addProxiedDevicePRKRequestHeader;
-(void)ak_addICSCIntentHeader;
-(void)ak_addLocalUserHasAppleIDLoginHeader;
-(void)ak_addDeviceROMHeader;
-(void)ak_addDeviceMLBHeader;
-(void)ak_addDeviceSerialNumberHeader;
-(void)ak_addProxiedDeviceSerialNumberHeader:(id)arg1 ;
-(void)ak_addPhoneNumberHeader;
-(void)ak_addPhoneNumberCertificateHeaderWithValue:(id)arg1 ;
-(void)ak_addPhoneInformationHeaderWithValue:(id)arg1 ;
-(void)ak_addAcceptedSLAHeaderWithVersion:(unsigned long long)arg1 ;
-(void)ak_addClientApp:(id)arg1 ;
-(void)ak_addProxyApp:(id)arg1 ;
-(void)ak_addAppProvidedContext:(id)arg1 ;
-(void)ak_addProxiedDeviceICSCIntentHeader;
-(void)ak_addShowWarranty;
-(void)ak_addDeviceModel;
-(void)ak_addCFUHeader:(id)arg1 ;
-(void)ak_addDeviceConfigurationModeHeader;
-(void)bindToHotspotHelperCommand:(id)arg1 ;
-(void)bindToCommand:(_CNPluginCommand*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setAllHTTPHeaderFields:(NSDictionary *)arg1 ;
-(void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPShouldHandleCookies:(BOOL)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(void)_setIgnoreHSTS:(BOOL)arg1 ;
-(void)setAllowsConstrainedNetworkAccess:(BOOL)arg1 ;
-(void)setAllowsExpensiveNetworkAccess:(BOOL)arg1 ;
-(void)setBoundInterfaceIdentifier:(id)arg1 ;
-(void)setHTTPContentType:(id)arg1 ;
-(void)setHTTPExtraCookies:(id)arg1 ;
-(void)setHTTPReferrer:(id)arg1 ;
-(void)setHTTPUserAgent:(id)arg1 ;
-(void)setRequestPriority:(unsigned long long)arg1 ;
-(unsigned long long)requestPriority;
-(void)setHTTPShouldUsePipelining:(BOOL)arg1 ;
-(void)setExpectedWorkload:(unsigned long long)arg1 ;
-(void)_setTimeWindowDelay:(double)arg1 ;
-(void)_setTimeWindowDuration:(double)arg1 ;
-(void)_setStartTimeoutDate:(id)arg1 ;
-(void)_setRequiresShortConnectionTimeout:(BOOL)arg1 ;
-(void)_setPreventHSTSStorage:(BOOL)arg1 ;
-(void)_setPayloadTransmissionTimeout:(double)arg1 ;
-(void)setContentDispositionEncodingFallbackArray:(id)arg1 ;
@end

