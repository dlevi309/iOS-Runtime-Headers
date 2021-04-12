/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>

@protocol OS_dispatch_queue;
@class AMSProcessInfo, NSString, AMSURLSession, NSMutableArray, NSObject;

@interface AMSBagNetworkTask : AMSTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate> {

	BOOL _waitingForConnectivity;
	AMSProcessInfo* _clientInfo;
	NSString* _profile;
	NSString* _profileVersion;
	AMSURLSession* _URLSession;
	NSMutableArray* _waitingForConnectivityBlocks;
	NSObject*<OS_dispatch_queue> _waitingForConnectivityQueue;
	NSString* _logKey;

}

@property (nonatomic,retain) AMSURLSession * URLSession;                                            //@synthesize URLSession=_URLSession - In the implementation block
@property (assign,nonatomic) BOOL waitingForConnectivity;                                           //@synthesize waitingForConnectivity=_waitingForConnectivity - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitingForConnectivityBlocks;                         //@synthesize waitingForConnectivityBlocks=_waitingForConnectivityBlocks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> waitingForConnectivityQueue;              //@synthesize waitingForConnectivityQueue=_waitingForConnectivityQueue - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                                     //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                           //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * profile;                                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                                             //@synthesize profileVersion=_profileVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagStorefrontForAccountMediaType:(id)arg1 ;
+(id)bagAccountForAccountMediaType:(id)arg1 ;
+(id)_URLCookieNamesForProfile:(id)arg1 ;
+(void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2 ;
+(id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2 ;
+(id)_deviceString;
+(id)_OSBuildTypeString;
+(BOOL)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2 ;
+(id)_defaultURLCookieNames;
-(void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setURLSession:(AMSURLSession *)arg1 ;
-(AMSURLSession *)URLSession;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(NSString *)profileVersion;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)performFetch;
-(id)initWithClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 ;
-(void)addWaitingForConnectivityBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)waitingForConnectivityQueue;
-(NSMutableArray *)waitingForConnectivityBlocks;
-(BOOL)waitingForConnectivity;
-(void)_updateWaitingForConnectivity:(BOOL)arg1 ;
-(id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2 ;
-(void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1 ;
-(BOOL)_shouldRetryForResult:(id)arg1 cookieNames:(id)arg2 urlCookies:(id)arg3 newStorefront:(id)arg4 ;
-(id)_cookiesForNames:(id)arg1 ;
-(void)setWaitingForConnectivity:(BOOL)arg1 ;
-(void)setWaitingForConnectivityBlocks:(NSMutableArray *)arg1 ;
-(void)setWaitingForConnectivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

