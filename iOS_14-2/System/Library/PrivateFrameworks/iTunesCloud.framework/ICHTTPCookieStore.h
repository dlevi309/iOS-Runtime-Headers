/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICHTTPCookieStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedCookieStore;
-(id)getCookiesForURL:(id)arg1 ;
-(id)init;
-(void)saveCookies:(id)arg1 forURL:(id)arg2 userIdentifier:(id)arg3 ;
-(id)getCookie:(id)arg1 userIdentifier:(id)arg2 ;
-(void)saveCookies:(id)arg1 forURL:(id)arg2 ;
-(id)_cookieDictionaryForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(id)getCookiesForUserIdentifier:(id)arg1 ;
-(void)removeAllCookies;
-(void)removeCookiesWithProperties:(id)arg1 ;
-(id)getCookiesHeadersForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(void)saveGlobalAccountCookies:(id)arg1 forURL:(id)arg2 ;
-(id)getCookiesForURL:(id)arg1 userIdentifier:(id)arg2 ;
-(id)_accountForUserIdentifier:(id)arg1 ;
-(void)_saveCookies:(id)arg1 userIdentifier:(id)arg2 ;
-(id)getGlobalAccountCookiesForURL:(id)arg1 ;
-(void)dealloc;
@end

