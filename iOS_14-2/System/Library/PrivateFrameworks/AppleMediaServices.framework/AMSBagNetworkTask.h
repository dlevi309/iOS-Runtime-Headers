/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>

@class AMSProcessInfo, NSString, AMSURLSession;

@interface AMSBagNetworkTask : AMSTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate> {

	AMSProcessInfo* _clientInfo;
	NSString* _profile;
	NSString* _profileVersion;
	AMSURLSession* _URLSession;
	NSString* _logKey;

}

@property (nonatomic,retain) AMSURLSession * URLSession;               //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,retain) NSString * logKey;                        //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * profile;                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                //@synthesize profileVersion=_profileVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2 ;
+(id)_URLCookieNamesForProfile:(id)arg1 ;
+(void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2 ;
+(BOOL)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2 ;
+(id)bagStorefrontForAccountMediaType:(id)arg1 ;
+(id)_OSBuildTypeString;
+(id)_deviceString;
+(id)_defaultURLCookieNames;
+(id)bagAccountForAccountMediaType:(id)arg1 ;
-(void)setProfile:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_shouldRetryForResult:(id)arg1 cookieNames:(id)arg2 urlCookies:(id)arg3 newStorefront:(id)arg4 ;
-(AMSProcessInfo *)clientInfo;
-(void)setURLSession:(AMSURLSession *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(AMSURLSession *)URLSession;
-(void)setLogKey:(NSString *)arg1 ;
-(id)_cookiesForNames:(id)arg1 ;
-(NSString *)profile;
-(id)initWithClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 ;
-(void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1 ;
-(id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2 ;
-(id)performFetch;
-(NSString *)logKey;
-(NSString *)profileVersion;
@end

