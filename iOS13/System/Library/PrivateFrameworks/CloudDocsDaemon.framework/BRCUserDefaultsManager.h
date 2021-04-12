/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)_reset;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
-(void)_prepopulateGlobalUserDefaults;
-(void)_loadServerConfigurationDictionary;
-(void)_setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
-(void)_parsePlistWithURL:(id)arg1 ;
-(id)defaultsForIdentifier:(id)arg1 ;
-(void)_loadCachedServerConfigurationDictionaryFromDB:(id)arg1 ;
-(void)_saveServerConfigurationDictionaryToDB:(id)arg1 ;
@end

