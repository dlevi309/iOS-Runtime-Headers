/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_queue;
@class NSPersistentHTTPCookie2Storage, NSMemoryHTTPCookie2Storage, NSObject;

@interface NSHTTPCookie2Storage : NSObject {

	NSPersistentHTTPCookie2Storage* persistentStore;
	NSMemoryHTTPCookie2Storage* memoryStore;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _defaultNotificationHandler;

}
+(id)sharedNSHTTPCookie2Storage;
-(void)getCookiesWithFilter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCookie:(id)arg1 withFilter:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCookies:(id)arg1 withFilter:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteCookiesWithFilter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllCookiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)deleteCookie:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getAllCookiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initInNSMemoryHTTPCookie2Storage;
-(id)initWithIdentifyingData:(id)arg1 ;
-(id)identifyingData;
-(id)initWithPath:(id)arg1 ;
@end

