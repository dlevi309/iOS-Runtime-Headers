/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSHTTPCookieStorage.h>

@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage {

	unsigned long long _acceptPolicy;
	BOOL _behavesLikeNS;
	NSHTTPCookie2Storage* _store;

}
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCookie:(id)arg1 ;
-(void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4 ;
-(id)cookies;
-(void)_getCookiesForPartition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 ;
-(void)getCookiesForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_saveCookies;
-(void)_saveCookies:(/*^block*/id)arg1 ;
-(void)deleteCookie:(id)arg1 ;
-(id)init;
-(void)_setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(void)storeCookies:(id)arg1 forTask:(id)arg2 ;
-(void)_testingOfStoringOfCookie:(id)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_cookieStorage;
-(id)cookiesForURL:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 ;
-(id)_initWithCFHTTPCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(unsigned long long)cookieAcceptPolicy;
-(void)removeCookiesSinceDate:(id)arg1 ;
-(void)dealloc;
@end

