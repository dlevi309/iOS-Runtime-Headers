/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSHTTPCookieStorageInternal, NSArray;

@interface NSHTTPCookieStorage : NSObject {

	NSHTTPCookieStorageInternal* _internal;
	BOOL __overrideSessionCookieAcceptPolicy;

}

@property (assign,nonatomic) BOOL _overrideSessionCookieAcceptPolicy;              //@synthesize _overrideSessionCookieAcceptPolicy=__overrideSessionCookieAcceptPolicy - In the implementation block
@property (copy,readonly) NSArray * cookies; 
@property (assign) unsigned long long cookieAcceptPolicy; 
+(id)sharedHTTPCookieStorage;
+(id)_groupContainerCookieStorages;
+(void)_setSharedHTTPCookieStorage:(id)arg1 ;
+(id)sharedCookieStorageForGroupContainerIdentifier:(id)arg1 ;
+(id)_csff:(id)arg1 ;
+(id)_csfi:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)cookiesForURL:(id)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_cookieStorage;
-(void)_saveCookies;
-(void)deleteCookie:(id)arg1 ;
-(NSArray *)cookies;
-(void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 ;
-(id)_initWithCFHTTPCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(BOOL)_overrideSessionCookieAcceptPolicy;
-(void)getCookiesForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)storeCookies:(id)arg1 forTask:(id)arg2 ;
-(unsigned long long)cookieAcceptPolicy;
-(void)setCookie:(id)arg1 ;
-(void)removeCookiesSinceDate:(id)arg1 ;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)_setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(void)_saveCookies:(/*^block*/id)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_CFHTTPCookieStorage;
-(id)cookieRequestHeaderFieldsForURL:(id)arg1 ;
-(void)setCookiesFromResponseHeader:(id)arg1 forURL:(id)arg2 policyBaseURL:(id)arg3 ;
-(id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 ;
-(void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4 ;
-(id)sortedCookiesUsingDescriptors:(id)arg1 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_getCookieStoragePartitionsCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getCookiesForPartition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_testingOfStoringOfCookie:(id)arg1 ;
-(void)set_overrideSessionCookieAcceptPolicy:(BOOL)arg1 ;
@end

