/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKHTTPCookieStore : NSObject <WKObject> {

	ObjectStorage<API::HTTPCookieStore> _cookieStore;
	HashMap<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> >, WTF::PtrHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > >* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(Object*)_apiObject;
-(void)getAllCookies:(/*^block*/id)arg1 ;
-(void)setCookie:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCookie:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

