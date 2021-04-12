/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_queue, NSObject;
@class NSURL, NSDictionary, NSMutableDictionary, NSOperationQueue, NSURLSession, NSObject, NSString;

@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate> {

	NSURL* _serverConfigurationURL;
	NSDictionary* _serverConfigurationDict;
	NSMutableDictionary* _userDefaultsCache;
	/*^block*/id _configurationPlistDidUpdateBlock;
	NSOperationQueue* _downloadQueue;
	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<NSObject> _defaultsDidChangeNotificationObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)_loadServerConfigurationDictionary;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)_parsePlistWithURL:(id)arg1 ;
-(void)setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
-(void)_prepopulateGlobalUserDefaults;
-(void)reset;
-(void)_setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
-(void)_loadCachedServerConfigurationDictionaryFromDB:(id)arg1 ;
-(void)_reset;
-(void)_saveServerConfigurationDictionaryToDB:(id)arg1 ;
-(id)defaultsForIdentifier:(id)arg1 ;
-(void)dealloc;
@end

